#include "iostream"
using namespace std;

//class Test
//{
//public:
//	Test()//无参数 构造函数
//	{
//		a = 10;
//		p = (char*)malloc(100);
//		strcpy(p, "aaafff");
//	}
//	void print()
//	{
//		cout << p << endl;
//		cout << a << endl;
//	}
//	Test()
//	{
//		if (p != NULL)
//		{
//			free(p);
//		}
//	}
//protected:
//
//private:
//	int a;
//	char* p;
//};
//
//void objplay()
//{
//	Test t1;
//	t1.print();
//
//	Test t2;
//	t2.print();
//}
//int main()
//{
//	objplay();
//	return 0;
//}


//class Test2
//{
//public:
//	Test2() 
//	{
//		m_a = 0;
//		m_b = 0;
//		cout << "无参数构造函数" << endl;
//	}
//
//	Test2(int a)
//	{
//		m_a = a;
//		m_b = 0;
//	}
//
//	Test2(int a, int b) 
//	{
//		m_a = a;
//		m_b = b;
//		cout << "有参  " << endl;
//	}
//
//	
//	Test2(const Test2& obj)
//	{
//		cout << "赋值（copy）构造函数" << endl;
//	}
//
//public:
//	void printT()
//	{
//		cout << " 普通成员函数 " << endl;
//	}
//private:
//	int m_a;
//	int m_b;
//};
//
//void main21()
//{
//
//	Test2 t1;  
//	cout << "hello." << endl;
//	system("pause");
//	return;
//}
//
//
//void main22()
//{
//	
//	Test2 t1(1, 2);  
//	t1.printT();
//
//	
//	Test2 t2 = (3, 4, 5, 6, 7); 
//
//	Test2 t3 = 5;
//
//	//直接调用构造函数 产生匿名对象
//	Test2 t4 = Test2(1, 2); 
//	
//
//	t1 = t4;  
//	
//
//	cout << "hello..." << endl;
//	system("pause");
//	return;
//}

//
//class Test3
//{
//public:
//	void init(int _a, int _b)
//	{
//		a = _a;
//		b = _b;
//	}
//
//protected:
//private:
//	int a;
//	int b;
//};
//
//
//void main31()
//{
//
//	
//	Test3 t1;
//	int a = 10;
//	int b = 20;
//	t1.init(a, b);
//
//	Test3 tArray[3];
//	tArray[0].init(1, 2);
//	tArray[1].init(1, 2);
//	tArray[2].init(1, 2);
//
//	//
//	Test3 t21;  t21.init(1, 2);
//	Test3 t22;  t22.init(1, 2);
//	Test3 t23;  t23.init(1, 2);
//
//	
//	Test3 tArray2[3] = { t21, t22, t23 };
//
//	
//	Test3 tArray3[1999] = { t21, t22, t23 };
//
//
//	cout << "hello..." << endl;
//	system("pause");
//	return;
//}





//class Test4
//{
//public:
//	Test4()  
//	{
//		m_a = 0;
//		m_b = 0;
//		cout << "  2" << endl;
//	}
//
//	Test4(int a)
//	{
//		m_a = a;
//		m_b = 0;
//	}
//
//	Test4(int a, int b) 
//	{
//		m_a = a;
//		m_b = b;
//		cout << "   1" << endl;
//	}
//
//	
//	Test4(const Test4& obj)
//	{
//		cout <<"  2" << endl;
//		m_b = obj.m_b + 100;
//		m_a = obj.m_a + 100;
//	}
//
//public:
//	void printT()
//	{
//		cout << "   " << endl;
//		cout << "m_a" << m_a << " m_a" << m_b << endl;
//	}
//private:
//	int m_a;
//	int m_b;
//};
//
//  
//void main41()
//{
//	Test4 t1(1, 2);
//	Test4 t0(1, 2);
//
//	
//	//operator=()
//	t0 = t1; 
//
//	
//	Test4 t2 = t1; 
//	t2.printT();
//
//	cout << "hello..." << endl;
//	system("pause");
//	return;
//}

//
//void main44()
//{
//	Test4 t1(1, 2);
//	Test4 t0(1, 2);
//
//	Test4 t2(t1);  
//	t2.printT();
//
//	cout << "hello..." << endl;
//	system("pause");
//	return;
//}


//class Name
//{
//public:
//	Name(const char* myp)
//	{
//		int m_len = strlen(myp);
//		m_p = (char*)malloc(m_len + 1);
//		strcpy(m_p, myp);
//	}
//	//编写拷贝构造函数 深拷贝
//	Name(const Name& obj)
//	{
//		int len = obj.m_len;
//		m_p = (char*)malloc(len + 1);
//		strcpy(m_p, obj.m_p);
//	}
//
//	~Name()
//	{
//		if(m_p!=NULL)
//		{
//			free(m_p);
//			m_p = NULL;
//			m_len = 0;
//		}
//
//	}
//private:
//	char* m_p;	
//	int m_len;
//};
//

//void playmain()
//{
//	Name obj1("aaa");
//	Name obj2 = obj1;
//
//	Name obj3("obj3");
//	obj3 = obj1;
//	return ;
//}
//
//int main()
//{
//	playmain();
//	return 0;
//}



//malloc free
//new    delete
//void main()
//{
//	//int* p = (int*)malloc(sizeof(int));
//	//*p = 10;
//	//free(p);
//	//int* p2 = new int;
//	//*p2 = 20;
//	//delete p2;
//	//int* p3 = new int(30);
//	//delete p3;
//
//	int* p = (int*)malloc(sizeof(int) * 10);
//	p[0] = 1;
//	free(p);
//
//	int* pAarry = new int[10];
//	pAarry[0] = 10;
//	delete[] pAarry;
//
//
//	return;
//}
//
//
//class C1
//{
//public:
//	int i;  //4
//	int j; //4
//	int k;  //4
//protected:
//private:
//}; //12
//
//class C2
//{
//public:
//	int i;
//	int j;
//	int k;
//
//	static int m; //4
//public:
//	int getK() const { return k; } //4
//	void setK(int val) { k = val; }  //4
//
//protected:
//private:
//}; //24 16 12
//
//struct S1
//{
//	int i;
//	int j;
//	int k;
//}; //12
//
//struct S2
//{
//	int i;
//	int j;
//	int k;
//	static int m;
//}; //16
//
//int main()
//{
//	printf("c1:%d \n", sizeof(C1));
//	printf("c2:%d \n", sizeof(C2));
//	printf("s1:%d \n", sizeof(S1));
//	printf("s2:%d \n", sizeof(S2));
//
//	system("pause");
//}
//

//class Test
//{
//public:
//	Test(int a, int b) //---> Test(const Test *const this, int a, int b)
//	{
//		this->a = a;
//		this->b = b;
//	}
//	void printT()
//	{
//		cout << "a: " << a << endl;
//		cout << "b: " << this->b << endl;
//	}
//protected:
//private:
//	int a;
//	int b;
//};
//
//void main()
//{
//
//	Test t1(1, 2);
//	t1.printT();// ===> printT(&t1)
//	return;
//}

//
//class Complex
//{
//private:
//	int a;
//	int b;
//	
//	friend Complex operator+(Complex& c1, Complex& c2);
//	
//	friend Complex& operator++(Complex& c1);
//	friend Complex operator++(Complex& c1, int);
//public:
//	Complex(int a = 0, int b = 0)
//	{
//		this->a = a;
//		this->b = b;
//	}
//	void printCom()
//	{
//		cout << a << " + " << b << "i" << endl;
//	}
//public:
//
//	
//	Complex operator-(Complex& c2)
//	{
//		Complex tmp(this->a - c2.a, this->b - c2.b);
//		return tmp;
//	}
//
//	
//	Complex& operator--()
//	{
//		this->a--;
//		this->b--;
//		return *this;
//	}
//
//	Complex operator--(int)
//	{
//		Complex tmp = *this;
//		this->a--;
//		this->b--;
//		return tmp;
//	}
//};
//
//
//Complex operator+(Complex& c1, Complex& c2)
//{
//	Complex tmp(c1.a + c2.a, c1.b + c2.b);
//	return tmp;
//}
//
//
//Complex& operator++(Complex& c1)
//{
//	c1.a++;
//	c1.b++;
//	return c1;
//}
//
//Complex operator++(Complex& c1, int)
//{
//	
//	Complex tmp = c1;
//	//return c1;
//	c1.a++;
//	c1.b++;
//	return tmp;
//}
//
//
//void main()
//{
//	Complex c1(1, 2), c2(3, 4);
//
//
//	
//	// Complex operator+(Complex &c1, Complex &c2);
//	Complex c3 = c1 + c2;
//	c3.printCom();
//
//	
//	//c1.operator-(c2);
//	//Complex operator-(Complex &c2)
//	Complex c4 = c1 - c2;
//	c4.printCom();
//
//	
//	++c1;
//	c1.printCom();
//
//	
//	--c1;
//	c1.printCom();
//	//Complex& operator++(Complex &c1)
//	//c1.operator--();
//
//	
//	c1++;
//	c1.printCom();
//
//	
//	c1--;
//	c1.printCom();
//	//c1.operator--()
//
//	cout << "hello..." << endl;
//	system("pause");
//	return;
//}

class  Name
{
public:
	Name(const char* myp)
	{
		m_len = strlen(myp);
		m_p = (char*)malloc(m_len + 1); //
		strcpy(m_p, myp);
	}

	//Name obj2 = obj1;
	
	Name(const Name& obj1)
	{
		m_len = obj1.m_len;
		m_p = (char*)malloc(m_len + 1);
		strcpy(m_p, obj1.m_p);
	}

	//obj3 = obj1;  
	//obj3.operator=(obj1)

	Name& operator=(Name& obj1)
	{
		if (this->m_p != NULL)
		{
			delete[] m_p;
			m_len = 0;
		}
		
		this->m_len = obj1.m_len;
		this->m_p = new char[m_len + 1];

		
		strcpy(m_p, obj1.m_p);
		return *this;
	}

	~Name()
	{
		if (m_p != NULL)
		{
			free(m_p);
			m_p = NULL;
			m_len = 0;
		}
	}
protected:
private:
	char* m_p;
	int m_len;
};


void objplaymain()
{
	Name obj1("abcdefg");
	Name obj2 = obj1;  
	Name obj3("obj3");

	obj3 = obj1;  
	//obj3.operator=(obj1)
	//operato=(Name &obj1)

	obj1 = obj2 = obj3;
	//obj2.operator=(obj3);
	//obj1 = void;
}

void main()
{
	objplaymain();
	cout << "hello..." << endl;
	system("pause");
	return;
}
