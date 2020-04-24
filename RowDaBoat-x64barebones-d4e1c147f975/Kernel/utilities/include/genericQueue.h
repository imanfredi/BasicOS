#ifndef __GENERIC_QUEUE_H__
#define __GENERIC_QUEUE_H__

typedef struct genericQueueNode{
    void * data;
    struct genericQueueNode * next;
}genericQueueNode;

typedef struct genericQueue{
    genericQueueNode * first;
    genericQueueNode * last;
}genericQueue;


int enqueue(genericQueue * q, void * data);

void * dequeue(genericQueue * q);

int isQueueEmpty(genericQueue * q);

//void queuePeek(genericQueue *);

//int getQueueSize(genericQueue *);

#endif