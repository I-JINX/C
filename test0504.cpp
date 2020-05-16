#include "iostream"
using namespace std;
//
//class Parent
//{
//public:
//	void print()
//	{
//		cout << a << endl;
//		cout << b << endl;
//
//	}
//	int b;
//
//protected:
//
//private:
//	int a;
//	
//
//};
//
//class Chlid :public Parent 
//{
//private:
//	int c;
//};
////class Chlid :protected Parent
////{
////
////};
////class Chlid :private Parent
////{
////
////};
//
//int main()
//{
//	Chlid c1;
//	c1.b = 2;
//	//c1.c = 3;//×
//	cout << c1.b << endl;
//	c1.print();
//	return 0;
//}


//
//class Parent
//{
//public:
//	Parent(int a, int b)
//	{
//		this->a = a;
//		this->b = b;
//		cout << "父类构造函数" << endl;
//	}
//	~Parent()
//	{
//		cout << "析构函数" << endl;
//	}
//
//	void printP(int a, int b)
//	{
//		this->a = a;
//		this->b = b;
//		cout << "父类" << endl;
//	}
//private:
//	int a;
//	int b;
//};
//
//
//class child : public Parent
//{
//public:
//	child(int a, int b, int c) : Parent(a, b)
//	{
//		this->c = c;
//		cout << "子类构造函数" << endl;
//	}
//	~child()
//	{
//		cout << "析构函数" << endl;
//	}
//	void printC()
//	{
//		cout << "子类" << endl;
//	}
//protected:
//private:
//	int c;
//};
//
//
//void playObj()
//{
//	child c1(1, 2, 3);
//}
//void main()
//{
//	//Parent p(1, 2);
//	playObj();
//
//
//	cout << "hello..." << endl;
//	system("pause");
//	return;
//}


//
//class Object
//{
//public:
//	Object(int a, int b)
//	{
//		this->a = a;
//		this->b = b;
//		cout << "object构造函数 " << "a" << a << " b " << b << endl;
//	}
//	~Object()
//	{
//		cout << "object析构函数 \n";
//	}
//protected:
//	int a;
//	int b;
//};
//
//
//class Parent : public Object
//{
//public:
//	Parent(char* p) : Object(1, 2)
//	{
//		this->p = p;
//		cout << "P构造函数" << p << endl;
//	}
//	~Parent()
//	{
//		cout << "P析构函数" << p << endl;
//	}
//
//	void printP(int a, int b)
//	{
//		cout << "P" << endl;
//	}
//
//protected:
//	char* p;
//
//};
//
//
//class child : public Parent
//{
//public:
//	child(char* p) : Parent(p), obj1(3, 4), obj2(5, 6)
//	{
//		this->myp= p;
//		cout << "C构造函数" << myp << endl;
//	}
//	~child()
//	{
//		cout << "C析构函数" << myp << endl;
//	}
//	void printC()
//	{
//		cout << "C" << endl;
//	}
//protected:
//	char* myp;
//	Object obj1;
//	Object obj2;
//};
//
//
//void objplay()
//{
//	int p = 1;
//	char* a;
//	a =(char*)&p;
//	child c1(a);
//}
//int main()
//{
//	objplay();
//	cout << "hello..." << endl;
//	
//	return 0;
//}



//class A
//{
//	A()
//	{
//		cout << "A构造函数" << endl;
//	}
//public:
//	/*
//	static int a;
//	int b;
//	*/
//public:
//	/*
//	void get()
//	{
//		cout<<"b "<<b<<endl;
//	}
//	void print()
//	{
//		cout<<"AAAAA "<<endl;
//	}
//	*/
//protected:
//private:
//};
//
////int A::a = 100; 
//
//
///*
//class B : private A
//{
//
//public:
//	int b;
//	int c;
//public:
//	void get_child()
//	{
//		cout<<"b "<<b<<endl;
//		cout<<a<<endl;
//	}
//	void print()
//	{
//		cout<<"BBBB "<<endl;
//	}
//protected:
//private:
//};
//*/
//
//
//void main()
//{
//	A a1;
//	//a1.print();
//
//	 //B b1;
//	// b1.get_child();
//	system("pause");
//}
//
//void main01()
//{
//	// B  b1;
//	 //b1.a = 200;
//	system("pause");
//}
//

//
//class Base1
//{
//public:
//	Base1(int b1)
//	{
//		this->b1 = b1;
//	}
//	void printB1()
//	{
//		cout << "b1:" << b1 << endl;
//	}
//protected:
//private:
//	int  b1;
//};
//
//class Base2
//{
//public:
//	Base2(int b2)
//	{
//		this->b2 = b2;
//	}
//	void printB2()
//	{
//		cout << "b2:" << b2 << endl;
//	}
//protected:
//private:
//	int  b2;
//};
//
//class B : public Base1, public Base2
//{
//public:
//	B(int b1, int b2, int c) : Base1(b1), Base2(b2)
//	{
//		this->c = c;
//	}
//	void printC()
//	{
//		cout << "c:" << c << endl;
//	}
//protected:
//private:
//	int c;
//};
//
//void main()
//{
//	B b1(1, 2, 3);
//	b1.printC();
//	b1.printB1();
//	b1.printB2();
//	cout << "hello..." << endl;
//	system("pause");
//	return;
//}
//
//
//
//
//class B
//{
//public:
//	B()
//	{
//		cout << "B构造函数\n";
//	}
//	int b;
//protected:
//private:
//
//};
//
//class B1 : virtual public B //12
//{
//public:
//	int b1;
//
//};
//
//class B2 : public B //8
//{
//public:
//	int b2;
//};
//
//class C : public B1, public B2
//{
//public:
//	int c;
//};
//
//void main()
//{
//	cout << sizeof(B) << endl; //4
//	cout << sizeof(B1) << endl; //12 
//	cout << sizeof(B2) << endl;  //8
//	//cout<<sizeof(B)<<endl;
//
//	system("pause");
//
//}
//
//void main1101()
//{
//
//	C  c1;
//	c1.b1 = 100;
//	c1.b2 = 200;
//	c1.c = 300;
//
//	//c1.b = 500; 
//	//c1.B1::b = 500;
//	//c1.B2::b = 500;
//
//
//	cout << "hello..." << endl;
//	system("pause");
//	return;
//}
//
//class D1
//{
//public:
//	int k;
//protected:
//private:
//};
//
//class D2
//{
//public:
//	int k;
//protected:
//private:
//
//};
//
//class E : public D1, public D2
//{
//public:
//protected:
//private:
//};
//
//void main1202()
//{
//	E e1;
//	e1.D1::k = 100;
//	e1.D2::k = 200;
//
//	system("pause");
//}
//
//
//class Parent
//{
//public:
//	Parent(int a)
//	{
//		this->a = a;
//		cout << "Parent a" << a << endl;
//	}
//
//	virtual void print() 
//	{
//		cout << "Parent 打印 a:" << a << endl;
//	}
//protected:
//private:
//	int a;
//};
//
//class Child : public Parent
//{
//public:
//	Child(int b) : Parent(10)
//	{
//		this->b = b;
//		cout << "Child b" << b << endl;
//	}
//	virtual void print() //virtual 父类写了virtual,子类可写可不写 
//	{
//		cout << "Child 打印  b:" << b << endl;
//	}
//protected:
//private:
//	int b;
//};
//
//void howToPrint(Parent* base)
//{
//	base->print(); 
//}
//
//void howToPrint2(Parent& base)
//{
//	base.print();
//}
//void main()
//{
//
//	Parent* base = NULL;
//	Parent  p1(20);
//	Child   c1(30);
//
//	base = &p1;
//	base->print(); //执行父类的打印函数 
//
//	base = &c1;
//	base->print(); 
//
//
//	{
//		Parent& base2 = p1;
//		base2.print();
//
//		Parent& base3 = c1; 
//		base3.print();
//	}
//
//
//	
//	howToPrint(&p1);
//	howToPrint(&c1);
//
//	howToPrint2(p1);
//	howToPrint2(c1);
//
//
//
//
//	cout << "hello..." << endl;
//	system("pause");
//	return;
//}
//
//
//
//
//
//
////HeroFighter  AdvHeroFighter EnemyFighter
//
//
//class HeroFighter
//{
//public:
//	virtual int power()  
//	{
//		return 10;
//	}
//};
//
//class EnemyFighter
//{
//public:
//	int attack()
//	{
//		return 15;
//	}
//};
//
//
//class AdvHeroFighter : public HeroFighter
//{
//public:
//	virtual int power()
//	{
//		return 20;
//	}
//};
//
//class AdvAdvHeroFighter : public HeroFighter
//{
//public:
//	virtual int power()
//	{
//		return 30;
//	}
//};
//
//
//void PlayObj(HeroFighter* hf, EnemyFighter* ef)
//{
//
//	if (hf->power() > ef->attack())  //hf->power()函数调用会有多态发生
//	{
//		printf("主角win\n");
//	}
//	else
//	{
//		printf("主角挂了\n");
//	}
//}
//
//
//
//void main()
//{
//	HeroFighter     hf;
//	AdvHeroFighter  Advhf;
//	EnemyFighter    ef;
//
//	AdvAdvHeroFighter advadvhf;
//
//	PlayObj(&hf, &ef);
//	PlayObj(&Advhf, &ef);
//
//	PlayObj(&advadvhf, &ef); 
//
//	cout << "hello..." << endl;
//	system("pause");
//
//}
//void main1401()
//{
//
//	HeroFighter     hf;
//	AdvHeroFighter  Advhf;
//	EnemyFighter    ef;
//
//	if (hf.power() > ef.attack())
//	{
//		printf("主角win\n");
//	}
//	else
//	{
//		printf("主角挂了\n");
//	}
//
//	if (Advhf.power() > ef.attack())
//	{
//		printf("Adv 主角win\n");
//	}
//	else
//	{
//		printf("Adv 挂了\n");
//	}
//
//	cout << "hello..." << endl;
//	system("pause");
//	return;
//}
//

//
//class A
//{
//public:
//	A()
//	{
//		p = new char[20];
//		strcpy(p, "obja");
//		printf("A()\n");
//	}
//	virtual ~A()
//	{
//		delete[] p;
//		printf("~A()\n");
//	}
//protected:
//private:
//	char* p;
//};
//
//class B : public A
//{
//public:
//	B()
//	{
//		p = new char[20];
//		strcpy(p, "objb");
//		printf("B()\n");
//	}
//	~B()
//	{
//		delete[] p;
//		printf("~B()\n");
//	}
//protected:
//private:
//	char* p;
//};
//
//
//class C : public B
//{
//public:
//	C()
//	{
//		p = new char[20];
//		strcpy(p, "objc");
//		printf("C()\n");
//	}
//	~C()
//	{
//		delete[] p;
//		printf("~C()\n");
//	}
//protected:
//private:
//	char* p;
//};
//
//
//
//void howtodelete(A* base)
//{
//	delete base;  
//}
//
///*
//void howtodelete(B *base)
//{
//	delete base;  
//}
//*/
//void main()
//{
//	C* myC = new C; 
//	
//	delete myC; //ֱ
//
//
//	//howtodelete(myC);
//
//	cout << "hello..." << endl;
//	system("pause");
//	return;
//}
//

