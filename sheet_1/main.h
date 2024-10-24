// ***** Header File *********
#ifndef SHEET_1_H
#define SHEET_1_H

#include <stdlib.h>
#include <stdbool.h>
#define MAX 10
typedef char type;
typedef struct {
    int top;
    type arr[MAX];
    int size;
} Stack;
void Create(Stack *s);
int Push(Stack *s, type value);
type Pop(Stack *s);
bool IsFull(Stack *s);
bool IsEmpty(Stack *s);
int Stack_Size(Stack *s);
type peek(Stack *s);
type FirstElem(Stack *s);
void Destroy(Stack *s);
void CopyStack(Stack *base, Stack *copy);

#endif //SHEET_1_H
