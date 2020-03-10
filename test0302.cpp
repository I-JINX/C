#include <iostream>
using namespace std;
//void main()
//{
//	std::cout << "sss" << std::endl;//如果不写using namespace std;需要显示的引入std
//
//	system("pause");
//	return;
//}
//定义命名空间
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
////使用命名空间
//void main()
//{
//	using namespace namespaceA;
//	cout << a << endl;
//	using namespace namespaceA;
//	using namespace namespaceB;
//	cout << namespaceA::a << endl;
//	cout << namespaceB::a << endl;
//	namespaceB::namespaceC::Teacher t1;//没有using 
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
//const和#define 在编译预处理阶段 处理
//#define d 20
//void main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int arr[a + b];//c c++编译器不支持 Linux gcc编译器支持
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
//	const int b = 20;//作用域
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
//	int& b = a;//引用语法 Type &name=var
//	//int &c;//普通引用必须要初始化
//	b = 100;//通过b操纵a
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
//复杂数据类型的引用
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

//函数当左值
//返回变量的值
int g1()
{
	static int a = 10;
	a++;
	return a;
}
//返回变量本身
int &g2()
{
	static int a = 10;
	a++;
	return a;
}

void mian()
{
	//g1() = 100;//×
	//11=100;
	g2() = 100;//函数返回值是引用，且当左值
	return;
}



