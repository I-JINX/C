#include <iostream>
using namespace std;
//void main()
//{
//	std::cout << "sss" << std::endl;//�����дusing namespace std;��Ҫ��ʾ������std
//
//	system("pause");
//	return;
//}
//���������ռ�
//namespace namespaceA
//{
//	int a =10;	
//}
//namespace namespaceB
//{
//	int a =20;
//	namespace namespaceC
//	{
//		struct Teacher
//		{
//			char name[20];
//			int age;
//		};
//	}
//}
////ʹ�������ռ�
//void main()
//{
//	using namespace namespaceA;
//	cout << a << endl;
//	using namespace namespaceA;
//	using namespace namespaceB;
//	cout << namespaceA::a << endl;
//	cout << namespaceB::a << endl;
//	namespaceB::namespaceC::Teacher t1;//û��using 
//	t1.age = 30;
//	using namespaceB::namespaceC::Teacher;
//	Teacher t2;
//	t2.age = 40;
//	system("pause");
//	return;
//}

//void main()
//{
//	const int a = 10;
//	int* p = NULL;
//	p = (int*)&a;
//	*p = 20;
//	cout << a << endl;
//	return;
//}
//const��#define �ڱ���Ԥ����׶� ����
//#define d 20
//void main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int arr[a + b];//c c++��������֧�� Linux gcc������֧��
//
//	const int c = 10;
//	//const int d = 20;
//	int arr[c + d];
//
//	return;
//}
//
//void fun1()
//{
//#define a 10
//	const int b = 20;//������
////#undef a
////#undef
//}
//void fun2()
//{
//	printf("a=%d", a);
//	//printf("b=%d", b);
//}
//int main()
//{
//	fun1();
//	fun2();
//	return 0;
//}
//
//
//int main()
//{
//	int a = 10;
//	int& b = a;//�����﷨ Type &name=var
//	//int &c;//��ͨ���ñ���Ҫ��ʼ��
//	b = 100;//ͨ��b����a
//	printf("%d\n%d\n", b, a);
//	return 0;
//}
//
//void myswap1(int a,int b)
//{
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//}
//void myswap2(int *a,int *b)
//{
//	int c = 0;
//	c = *a;
//	*a = *b;
//	*b = c;
//
//}
//void myswap3(int &a,int &b)
//{
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	x = 10;
//	y = 20;
//	myswap1(x, y);
//	printf("x=%d  y=%d\n", x, y);
//
//	myswap2(&x, &y);
//	printf("x=%d  y=%d\n", x, y);
//
//	myswap3(x, y);
//	printf("x=%d  y=%d\n", x, y);
//	return 0;
//}
//�����������͵�����
//
//struct Teacher
//{
//	char name[20];
//	int age;
//};
//void printfT1(Teacher* pT)///???????
//{
//	cout << pT->age << endl;
//}
//
//void printfT2(Teacher &pT)
//{
//	cout << pT.age << endl;
//}
//
//void printfT3(Teacher pT)
//{
//	cout << pT.age << endl;
//}
//
//int main()
//{
//	Teacher t1;
//	t1.age = 35;
//	printfT1(&t1);
//	printfT2(t1);
//	printfT3(&t1);
//	return 0;
//}

//int main()
//{
//	const int c1 = 10;
//	int a = 0;
//	int& b = a;
//	printf("&a:%d  &b:%d\n", &a, &b);
//
//	return 0;
//}

//
//struct Teacher
//{
//	char name[64];
//	int age;
//	int &a;
//	int &b;
//};
//void mo1(int& a1)
//{
//	a1 = 5;
//}
//void mo2(int* const a1)
//{
//	*a1 = 6;
//}
//
//void main()
//{
//	int a = 10;
//	mo1(a);
//	printf("%d\n", a);
//
//	mo2(&a);
//	printf("%d\n", a);
//
//	printf("sizeof(Teacher):%d", sizeof(Teacher));
//	system("pause");
//	return;
//}

//��������ֵ
//���ر�����ֵ
int g1()
{
	static int a = 10;
	a++;
	return a;
}
//���ر�������
int &g2()
{
	static int a = 10;
	a++;
	return a;
}

void mian()
{
	//g1() = 100;//��
	//11=100;
	g2() = 100;//��������ֵ�����ã��ҵ���ֵ
	return;
}



