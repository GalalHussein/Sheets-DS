

#include "sheet_2.h"
void Create(Queue *q){
    q->size = q->front = q->rear = 0;
}

void Enqueue(Queue *q, type value) {
    if(q->size == MAX) {
        printf("Full Queue!\n");
        return;
    }
    q->arr[(q->rear++)%MAX] = value;
    q->size++;
}

type Dequeue(Queue *q) {
    if(q->size == 0) {
        printf("Queue Empty\n");
        return -1;
    }
    q->size--;
    return q->arr[q->front++%MAX];
}

int Full(Queue *q) { return q->size == MAX; }
int Empty(Queue *q) { return q->size == 0; }

// Question (2)
type LastElement(Queue *q) {
   if(q->size == 0) {
       printf("Queue is Empty\n"); return -1;
   }
     return q->arr[q->size-1];
}

// ===================================================

// Question (3)
type FirstElement(Queue *q) {
   if(q->size == 0) {
       printf("Queue is empty\n");
       return -1;
   } return q->arr[q->front];
}

// ===================================================

// Question (4)
void Destroy(Queue *q) {
    Create(q);
}

// ===================================================


// Question (5)
Queue CopyQueue(Queue *q) {
    Queue _new;
    Create(&_new);
     for(int i=0; i<q->size; i++) {
         _new.arr[i] = q->arr[i];
     }
     _new.size = q->size;
     _new.front = q->front;
     _new.rear = q->rear;
     return _new;
}

// ===================================================

// Question (6)
int size(Queue *q) {
    return q->size;
}




