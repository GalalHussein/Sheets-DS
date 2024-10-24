// ******** main file **********

#include "stack.h" // stack.h
#include <stdio.h>
#define for_0(i, n) for(int i=0; i<n; i++)

void print_stack(Stack s);
char FirsElem(Stack s);
void Copy_Stack(Stack base, Stack *copy);
void Destroy_stack(Stack *s);
int StackSize(Stack s);



int main() {
   Stack  s;
    Create(&s);
//    printf("Current size: %d\n", Stack_Size(&s));
    printf("Enter elements to stack:  ");
    for(int i=0; i<10; i++) {
        char c;
        scanf(" %c", &c);
        if(!IsFull(&s))
            Push(&s , c);
        else {
            printf("Stack is full!\n");
            break;
        }
    }

//    printf("%d", StackSize(s));
//    printf("\nCurrent size: %d\n", Stack_Size(&s));

//   for (int i = 0; i < 11; ++i) {
//       if(!IsEmpty(&s))
//          printf("%c\n", Pop(&s));
//       else {
//           printf("Stack is empty!\n");
//           break;
//       }
//    }
//  print_stack(s);

//    printf("Current size: %d\n", Stack_Size(&s));
//    Stack s2;
//    Create(&s2);
//    CopyStack(&s, &s2);
//    printf("%c ", Pop(&s2));
//    printf("%c ", Pop(&s2));
//    printf("%c ", Pop(&s2));
//    printf("%c ", Pop(&s2));
//    printf("%c ", Pop(&s2));

//    printf("%c",FirsElem(s));
//    Stack s2;
//    Create(&s2);
//    Copy_Stack(s, &s2);
//    print_stack(s2);
    return 0;
}


//########################### Functions in user level #########################

void print_stack(Stack s) {
    int size = Stack_Size(&s);
    for(int i=0; i<size; i++) {
        printf("%c ", Pop(&s));
    }
}

char FirsElem(Stack s) {
     int size = Stack_Size(&s);
      for(int i=0; i<size-1; i++) {
          Pop(&s);
      } return Pop(&s);
}

char LastElem(Stack s) {
    return Pop(&s);
}

void Destroy_stack(Stack *s) {
    Create(s);
}

void Copy_Stack(Stack base, Stack *copy) {
     int size = Stack_Size(&base);
     char arr[size];
     for_0(i, size) {
         arr[i] = Pop(&base);
     }
     for(int i=size-1; i>=0; i--) {
         Push(copy, arr[i]);
     }
}

int StackSize(Stack s) {
    int size = 0;
    while(!IsEmpty(&s)) {
        Pop(&s);
        size++;
    }
   return size;
}

