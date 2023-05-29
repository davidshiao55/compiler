#ifndef SYMTAB_H
#define SYMTAB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct symrec symrec;
typedef struct symtab symtab;
typedef struct QNode QNode;
typedef struct Queue Queue;

struct symrec
{
    int index;
    char *name;
    char *type;
    int mut;
    int addr;
    int lineno;
    char *Func_sig;
};

struct symtab
{
    int scope;
    int n;
    Queue *recQueue;
    struct symtab *next;
};

struct QNode
{
    symrec rec;
    struct QNode *next;
};

// The queue, front stores the front node of LL and rear
// stores the last node of LL
struct Queue
{
    struct QNode *front, *rear;
};

extern int scope;
extern int addr;
extern symtab *tables;

// A utility function to create a new linked list node.
struct QNode *newNode(symrec rec)
{
    struct QNode *temp = (struct QNode *)malloc(sizeof(struct QNode));
    temp->rec = rec;
    temp->next = NULL;
    return temp;
}

// A utility function to create an empty queue
struct Queue *createQueue()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

// The function to add a key k to q
void enQueue(struct Queue *q, symrec rec)
{
    // Create a new LL node
    struct QNode *temp = newNode(rec);

    // If queue is empty, then new node is front and rear
    // both
    if (q->rear == NULL)
    {
        q->front = q->rear = temp;
        return;
    }

    // Add the new node at the end of queue and change rear
    q->rear->next = temp;
    q->rear = temp;
}

// Function to remove a key from given queue q
void deQueue(struct Queue *q)
{
    // If queue is empty, return NULL.
    if (q->front == NULL)
        return;

    // Store previous front and move front one node ahead
    struct QNode *temp = q->front;

    q->front = q->front->next;

    // If front becomes NULL, then change rear also as NULL
    if (q->front == NULL)
        q->rear = NULL;

    free(temp->rec.name);
    free(temp->rec.type);
    free(temp->rec.Func_sig);
    free(temp);
}

void deleteQueue(struct Queue *q)
{
    while (q->front)
    {
        deQueue(q);
    }
    free(q);
}

static void create_symbol()
{
    printf("> Create symbol table (scope level %d)\n", scope);
    symtab *newTab = (symtab *)malloc(sizeof(symtab));
    newTab->scope = scope;
    newTab->n = 0;
    newTab->recQueue = createQueue();
    newTab->next = tables;
    tables = newTab;
}

static void insert_symbol(char *name, char *type, int mut, int addr, int lineno, char *Func_sig)
{
    printf("> Insert `%s` (addr: %d) to scope level %d\n", name, addr, scope);

    symrec newRec;
    newRec.index = (tables->n)++;
    newRec.name = strdup(name);
    newRec.type = strdup(type);
    newRec.Func_sig = strdup(Func_sig);
    newRec.mut = mut;
    newRec.lineno = lineno;
    newRec.addr = addr;
    enQueue(tables->recQueue, newRec);
}

static QNode *lookup_symbol(char *name)
{
    symtab *cur = tables;
    while (cur)
    {
        QNode *curNode = cur->recQueue->front;
        while (curNode)
        {
            if (!strcmp(curNode->rec.name, name))
            {
                return curNode;
            }
            curNode = curNode->next;
        }
        cur = cur->next;
    }
    return NULL;
}

static void dump_symbol()
{
    printf("\n> Dump symbol table (scope level: %d)\n", scope);
    printf("%-10s%-10s%-10s%-10s%-10s%-10s%-10s\n",
           "Index", "Name", "Mut", "Type", "Addr", "Lineno", "Func_sig");

    symtab *tmp = tables;
    tables = tables->next;

    while (tmp->recQueue->front)
    {
        symrec rec = tmp->recQueue->front->rec;
        if (strcmp(rec.type, "func") && scope == 1)
            addr--;
        printf("%-10d%-10s%-10d%-10s%-10d%-10d%-10s\n",
               rec.index, rec.name, rec.mut, rec.type, rec.addr, rec.lineno, rec.Func_sig);
        deQueue(tmp->recQueue);
    }
    deleteQueue(tmp->recQueue);
    free(tmp);
}

#endif