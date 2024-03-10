#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;
	

void pop(){
	if(top == -1){
		
	printf("underflow");
	
	}else
	{
	printf("%d", stack[top]);
	top--;
	
	}
	
}

void push(int value){

	if(top == MAX_SIZE-1){
	printf("stack overflow");
	}else{
	top++;
	stack[top] = value;
	printf("%d",stack[top]);
	}
	
}
 int top_func(){
 	int t =stack[top];
       return t;
 }

int main(){
	push(5);
	printf("\n");
	push(51);
	printf("\n");
	push(35);
	printf("\n");
	push(55);
	printf("\n");
	
	int top_value = top_func();
	printf("top value is :%d",top_value);
	
	printf("\n");
	pop();
	printf("\n");
	pop();
	printf("\n");
	pop();
	printf("\n");
	pop();
	printf("\n");
	
	
	


}