
#ifndef SHEETS_DS_SHEET_2_H
#define SHEETS_DS_SHEET_2_H

#include <stdio.h>
#define MAX 100

typedef int type;
typedef struct {
    int front, rear, size;
    type arr[MAX];
} Queue;

void Create(Queue *q);
void Enqueue(Queue *q, type value);
type Dequeue(Queue *q);
int Full(Queue *q);
int Empty(Queue *q);
int size(Queue *q);
Queue CopyQueue(Queue *q);
void Destroy(Queue *q);
type FirstElement(Queue *q);
type LastElement(Queue *q);


#endif //SHEETS_DS_SHEET_2_H
