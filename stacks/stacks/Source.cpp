#pragma warning(disable:4996)
#include <stdio.h>
#include <thread>
#include <Windows.h>

using namespace std;

struct Stack
{
	int size;
	int nData;
	int* data;
};
void initStack(Stack* s, int size)
{
	s->size = size;
	s->data = (int*)malloc(sizeof(int)*size);
	s->nData = 0;
}
void pushStack(Stack* s, int val)
{
	s->data[s->nData++] = val;
}
int popStack(Stack* s)
{
	return s->data[--s->nData];
}
int main()
{
	Stack a;
	initStack(&a, 100);
	pushStack(&a, 3);
	pushStack(&a, 4);
	pushStack(&a, 5);
	int x = popStack(&a);
	x = popStack(&a);
	pushStack(&a, 6);
	free(a.data);
	initStack(&a, 10);
	x = popStack(&a);
	pushStack(&a, 6);
	x = popStack(&a);


	return 0;
}