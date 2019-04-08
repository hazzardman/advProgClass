#pragma warning(disable:4996)
#include <stdio.h>
#include <thread>
#include <Windows.h>
#include <stack>
using namespace std;

template<class T>
class Stack
{

	int size;
	int nData;
	T* data;
public:

Stack(int _size)
{
	size = _size;
	data = (T*)malloc(sizeof(T)*size);
	nData = 0;
}
void pushStack(T val)
{
	data[nData++] = val;
}
T popStack()
{
	return data[--nData];
}
};
int main()
{
	Stack<int>* a=new Stack<int>(100);
	a->pushStack(8);
	a->pushStack(4);
	a->pushStack(5);
	int x = a->popStack();
	x = a->popStack();
	a->pushStack(6);
	stack<int> c;


	
	return 0;
}