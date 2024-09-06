#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top = -1;
int stack_array[MAX];
void push(int);
void pop();
void peek();
void display();
int main(){
 push(20);
 push(34);
 push(96);
 push(108);
 display();
 
 pop();
 pop();
 pop();
 pop();
 display();
 printf("last element is :");
 peek();

    return 0;
}
void push(int x){
    if(top == MAX-1){
        printf("stack overflow");
    }
    else{
        top++;
        stack_array[top] =  x;
    }
}
void pop(){
    if(top == -1 ){
        printf("stack underflow");
    }
    else{
        top--;
    }
}
void peek(){
    if(top ==-1){
        printf("stack is empty");
    }
    else{
        printf("%d",stack_array[top]);
    }
}
void display(){
    for(int i=0;i<=top;i++){
        printf("%d ",stack_array[i]);
    }
}
