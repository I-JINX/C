#include <iostream>
using namespace std;
//��������
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
//����ָ��
//����һ����������
//void myfunc(int a, int b)
typedef void (MyTypefunc)(int a, int b);

//����һ������ָ������
typedef void (*MyPTypefunc)(int a, int b);
//���庯��ָ�����
void (*MyVarPfunc)(int a, int b);

void main()

{
	//MyTypefunc* myfuncp = NULL;
	//MyPTypefunc fp = NULL;

	MyPTypefunc fp;
	fp = myfunc;

	fp(1, 2);
	//fp("s","s");��

	return;
}