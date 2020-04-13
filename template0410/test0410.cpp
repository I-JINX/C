#include "iostream"
using namespace std;

//class Cube
//{
//public:
//	void setA(int a)
//	{
//		m_a = a;
//	}
//	void setB(int b)
//	{
//		m_b = b;
//	}
//	void setC(int c)
//	{
//		m_c = c;
//	}
//public:
//	void setABC(int a, int b, int c)
//	{
//		m_a = a;
//		m_b = b;
//		m_c = c;
//	}
//
//	int getV()
//	{
//		m_v = m_a * m_b * m_c;
//		return m_v;
//	}
//	int getS()
//	{
//		m_s = 2 * (m_a * m_b + m_a * m_c + m_b * m_c);
//		return m_s;
//	}
//	int getA()
//	{
//		return m_a;
//	}
//	int getB()
//	{
//		return m_b;
//	}
//	int getC()
//	{
//		return m_c;
//	}
//
//	int judge(Cube& c1, Cube& c2)
//	{
//		if (c1.getA() == c2.getA() &&
//			c1.getB() == c2.getB() &&
//			c1.getC() == c2.getC())
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//
//	int judge(Cube& c2)
//	{
//		if (m_a==c2.getA()&&
//			m_b==c2.getB()&&
//			m_c==c2.getC())
//		{
//			return 1;
//		}
//		else {
//			return 0;
//		}
//	}
//protected:
//
//private:
//	int m_a;
//	int m_b;
//	int m_c;
//	int m_v;
//	int m_s;
//};
//////È«¾Öº¯Êı
////int judge(Cube& c1, Cube& c2)
////{
////	if (c1.getA() == c2.getA() &&
////		c1.getB() == c2.getB() &&
////		c1.getC() == c2.getC())
////	{
////		return 1;
////	}
////	else
////	{
////		return 0;
////	}
////}
//int main()
//{
//	Cube c1, c2;
//	c1.setABC(1, 2, 3);
//	cout << c1.getS()<< endl;
//	cout << c1.getV()<< endl;
//	c2.setABC(1,2,4);
//
//	c1.judge(c2);
//
//	if (c1.judge(c1, c2) == 1)
//	{
//		cout << "the same" << endl;
//		}
//	else
//	{
//		cout << "not the same" << endl;
//	}
//
//	//if (judge(c1, c2) == 1)
//	//{
//	//	cout << "the same" << endl;
//	//	}
//	//else
//	//{
//	//	cout << "not the same" << endl;
//	//}
//	system("pause");
//	return 0;
//}
//




#include "AdvCircle.h"
#include "Point.h"

void main()
{
	AdvCircle c1;
	Point p1;

	c1.setCircle(2, 3, 3);
	p1.setPoint(7, 7);
	int tag = c1.judge(p1);
	if (tag == 1)
	{
		cout << "same" << endl;
	}
	else
	{
		cout << "not same" << endl;
	}

	system("pause");
	return;
}