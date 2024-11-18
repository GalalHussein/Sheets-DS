#include <stdio.h>
#include <string.h>
#include "sheet_2.h"
#define Trouble int main (){
#define Shooter return 0;}


void TEST_QUEUE();
char _LastElement(Queue q);
char _CopyFirstElement(Queue q);
void _Destroy(Queue *q);
Queue _CopyQueue(Queue);
int __Size(Queue q);
int CheckBalanced(char *str);
int __main_1();

Trouble Shooter


// =============================================================

// Question (1)
void TEST_QUEUE() {
    Queue q;
    Create(&q);
    printf("size: %d\n", size(&q));
    Enqueue(&q, 'A');
    printf("size: %d\n", size(&q));
    Enqueue(&q, 'B');
    printf("size: %d\n", size(&q));
    Enqueue(&q, 'c');
    printf("size: %d\n", size(&q));
    Enqueue(&q, 'D');
    printf("size: %d\n", size(&q));
    Enqueue(&q, 'E');
    printf("size: %d\n", size(&q));
    printf("%c\n", Dequeue(&q));
    printf("%c\n", Dequeue(&q));
    Enqueue(&q, 'F');
    Enqueue(&q, 'G');
    printf("%c\n", Dequeue(&q));
    printf("%c\n", Dequeue(&q));
    printf("%c\n", Dequeue(&q));
    printf("%c\n", Dequeue(&q));
    printf("%c\n", Dequeue(&q));
    printf("size: %d\n", size(&q));

}

// =========================================================

// Question (7)
char _LastElement(Queue q) {
    int temp = size(&q);
   for(int i=0; i<temp-1; ++i)  Dequeue(&q);
   return Dequeue(&q);
}

// =========================================================

// Question (8)
char _CopyFirstElement(Queue q) {
    return Dequeue(&q);
}

// =========================================================

// Question (9)
void _Destroy(Queue *q) {
    while(!Empty(q)) Dequeue(q);
}

// =========================================================

// Question (10)
Queue _CopyQueue(Queue q) {
    int temp = size(&q);
    Queue _newQueue;
    Create(&_newQueue);
     for(int i=0; i<temp; i++) {
         Enqueue(&_newQueue, Dequeue(&q));
     }
     return _newQueue;
}

// =========================================================

//Question(11)
int __Size(Queue q) {
    int i=0;
    while(!Empty(&q)) {
        Dequeue(&q); i++;
    } return i;
}

// =========================================================

//Question (12): Note -> This Solution with Queue not stack.
int CheckBalanced(char *str) {
     Queue q;
     Create(&q);
     int len = strlen(str);
      for(int i=0; i<len; i++) {
         if(str[i] == '(' || str[i] == '{' || str[i] == '[')
          Enqueue(&q, str[i]);
         else {
             if(Empty(&q)) return printf("Not balanced\n");
            char open = Dequeue(&q);
             if(str[i] == ')' && open != '(' ||
                str[i] == '}' && open != '{'  ||
                str[i] == ']' && open != '[')
                 return printf("Not balanced\n");
         }
      }
      return printf("%s", Empty(&q)? "Balanced\n": "Not balanced\n");
}

// ===================================================

// Question (13)
int __main_1() {
    Queue Groups, SectionsCode, NewQueue;
    Create(&Groups);
    Create(&SectionsCode);
    Create(&NewQueue);
    for(int i=0; i<100; i++) {
        Enqueue(&Groups, i);
    }
    for(int i=0; i<10; i++) {
        Enqueue(&SectionsCode, i);
    }
    int arrayGroups[10]={0}; int x = 0;
    for(int i=0; i<100; i++) {
        arrayGroups[x] += Dequeue(&Groups);
        if(i % 10 == 0) x++;
    }
    for(int i=0; i<10; i++) {
        Enqueue(&NewQueue, arrayGroups[i] + Dequeue(&SectionsCode));
    }
    for(int i=0; i<10; i++) {
        printf("%d\n", Dequeue(&NewQueue));
    }

    return 0;
}


