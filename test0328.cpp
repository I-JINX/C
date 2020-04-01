#include <iostream>
using namespace std;
//函数重载
void myfunc(int a)
{
	printf("%d\n", a);
}
void myfunc(char* p)
{
	printf("%s\n", p);
}
void myfunc(int a, int b)
{
	printf("%d %d\n", a, b);
}
//函数指针
//声明一个函数类型
//void myfunc(int a, int b)
typedef void (MyTypefunc)(int a, int b);

//声明一个函数指针类型
typedef void (*MyPTypefunc)(int a, int b);
//定义函数指针变量
void (*MyVarPfunc)(int a, int b);

void main()

{
	//MyTypefunc* myfuncp = NULL;
	//MyPTypefunc fp = NULL;

	MyPTypefunc fp;
	fp = myfunc;

	fp(1, 2);
	//fp("s","s");×

	return;
}