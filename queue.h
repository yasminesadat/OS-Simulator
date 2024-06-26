#ifndef QUEUE_H
#define QUEUE_H
#include <stdbool.h>

#define QUEUE_SIZE 3

typedef struct
{
    int count;
    int elements[QUEUE_SIZE];
} queue;

void initQueue(queue *q);
void printQueue(queue *q);
void enqueue(queue *q, int processID);
int dequeue(queue *q);
bool isEmpty(queue *q);

#endif