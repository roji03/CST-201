#include<stdio.h>
int stack[5],top=-1,x;

void push(){
    if(top==5){
        printf("the stack is full");
    }
    else{
        printf("Enter the element to be addes to stack");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }

}

void pop(){
    if(top==-1){
        printf("the stack is underflow");

    }
 else{
    printf("the element poped is %d",stack[top]);
    top--;
 }

}
void display(){
    if(top==-1){
        printf("the stack is empty");
    }
    else{
        printf("the stack elemnts are:");
        for(int i=0;i<top;i++){
            printf(" %d",stack[i]);
        }
    }
}
void main(){
    int choice;
   do{ printf("\n1.push\n2.pop\n3.display\n4.exit\nenter your choice(1,2,3,4)\n");
   scanf("%d",&choice);
   switch(choice){
    case 1:push();break;
    case 2:pop();break;
    case 3:display();break;
    case 4:printf("exting...");break;
    default:printf("invalid choice");
   }



} while(choice!=4);
}