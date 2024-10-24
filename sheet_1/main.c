// ****** Implementation File **********

#include "stack.h" // stack.h

void Create(Stack *s) {
    s->top = 0;
    s->size = 0;
}
int Push(Stack *s, type value) {
    // pre condition.
    if(s->size == MAX) return 0;
     s->arr[s->top++] = value;
     s->size++;
     return 1;
}

type Pop(Stack *s) {
    // pre condition
    if(s->size == 0) return 0;
     s->size--;
     return s->arr[--s->top];
}
type FirstElem(Stack *s) {
    return s->arr[0];
}
type peek(Stack *s) {
    return s->arr[s->top];
}

bool IsFull(Stack *s) {
    return s->size == MAX;
}
bool IsEmpty(Stack *s) {
    return s->size == 0;
}

int Stack_Size(Stack *s) {
    return s->size;
}

void Destroy(Stack *s) {
    s->top = 0;
    s->size = 0;
}

void CopyStack(Stack *base, Stack *copy) {
    int size = base->size;
    copy->size = size;
    for (int i = 0; i < size; i++) {
         copy->arr[i] = base->arr[i];
         copy->top++;
         copy->size++;
    }
}
