#include<stdio.h>
#include<stdlib.h>

struct stack {
	int size;
	int top;
	int* arr;
};

void create(struct stack* s){
	scanf("%d", &s->size);
	s->top = -1;
	s->arr = (int*)malloc(s->size * sizeof(int));
};

void display(struct stack* s){
	int i = 0;
	for( i = s->top; i >= 0; i--){
		printf("%d ", s->arr[i]);
	}
}

void push(struct stack* s, int data){
	if(s->top != s->size - 1){
		s->top++;
		s->arr[s->top] = data;
	} else {
		printf("stack overflow.");
	}
}

int pop(struct stack* s){
	int m = -1;
	if(s->top != -1){
		m = s->arr[s->top];
		s->top--;
	} else {
		printf("stack underflow");
	}
	return m;
}

int main() {
	struct stack st;
	create(&st);
	push(&st, 4);
	push(&st, 5);
	push(&st, 6);
	push(&st, 7);
	push(&st, 8);
	push(&st, 9);
    pop(&st);
	display(&st);
	return 0;
}

