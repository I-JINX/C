#include "iostream"
using namespace std;
//void main()
//{
//	//<<左移操作符 c++中进行了增强或改造 c++语言操作符重载
//	//endl \n
//	cout << "hello" << endl;
//	system("pause");
//}

//求圆面积
//面向过程
//void main()
//{
//	double r = 0;
//	double s = 0;
//	cout << "Please enter the radius of the circle" << endl;
//	cin >> r;
//	s = 3.14 * r * r;
//	cout << "The area of a circle is s" << endl;
//	system("pause");
//}

//面向对象
//
//struct Circle
//{
//	double c_s;
//	double c_r;
//
//};
//class MyCircle
//{
//public:
//	double m_s;//成员变量 属性
//	double m_r;
//public:
//	void setR(double r)//成员函数
//	{
//		m_r = r;
//	}
//	double getR()
//	{
//		return m_r;
//	}
//	double getS()
//	{
//		m_s = 3.14 * m_r * m_r;
//		return m_s;
//	}
//		;
//protected:
//private:
//
//};
//void main()
//{
//	MyCircle c1, c2, c3;
//	double r1,r2,r3;
//	//c1圆
//	cout << "please enter the radius of c1 circle" << endl;
//	cin >> r1;
//	c1.setR(r1);
//	cout << "The area of c1 circle is " << c1.getS() << endl;
//	//c2圆
//	cout << "please enter the radius of c2 circle" << endl;
//	cin >> r2;
//	c2.setR(r2);
//	cout << "The area of c1 circle is " << c2.getS() << endl;
//
//	system("pause");
//错误案例
//class circle
//{public:
//	double r;
//	double pi = 3.1415926;
//	double area = pi * r * r;//初始化时已经执行了，当时r为随机值
//};
//int main()
//{
//	circle c1;
//	cout << "input r" << endl;
//	cin >> c1.r;
//	cout << c1.area << endl;//当执行c1.area时，只从变量所标识的内存空间拿值，并没有执行pi*r*r。
//	system("pause");
//	return 0;
//}