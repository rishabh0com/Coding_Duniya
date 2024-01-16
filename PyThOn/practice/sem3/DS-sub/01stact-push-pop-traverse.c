#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void traverse();
int item, top=-1;
int i , stack[10],ch;

int main(){

   do{
    printf("\nEnter Choice \n 1.Push \n 2.pop \n 3.traverse \n 4.exit : ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1 : 
        push();
        break;
    case 2 :
        pop();
        break;
    case 3 :
        traverse();
        break;
    case 4 :
    printf("\n you are exit\n");
       break;
    
    default:
    printf("Your choice is Invalid !\n");
        break;
    }


   }while(ch != 4);

    return 0;
}


void push(){
    if(top == top - 1){
        printf("\nStact OverFlow \n\n");
    }
    else{
        top = top + 1;
        printf("\nEnter Item to push : ");
        scanf("%d",&item);
        stack[top] = item;
        printf("\n item pushed \n");
    }
}

void pop(){
    if(top == -1){
        printf("Stack Underflow ! \n");
    }
    else{
        item = stack[top];
        top = top - 1;
        printf("Poped item : %d \n\n",item);
    }

}

void traverse(){
   for(i = top; i >= 0; i--){
    printf("\n item of %d  : %d \n",i,stack[i]);
   }
}