#include "iostream"
using namespace std;

//class MyCircle
//{
//public:
//	double m_r;
//	double m_s;
//public:
//	double getR()
//	{
//		return m_r;
//	}
//	double setR(double r)
//	{
//		m_r = r;
//	}
//	double getS()
//	{
//		m_s = 3.14 * m_r * m_r;
//		return m_s;
//	}
//};
//
//void printCircle1(MyCircle *pC)
//{
//	cout << "r=" << pC->getR() << endl;
//	cout << "s=" << pC->getS() << endl;
//
//}
//void printCircle2(MyCircle& Mpc)
//{
//	cout << Mpc.getS << endl;
//}
//void printCircle3(MyCircle Mpc)
//{
//
//}
//
//void maini()
//{
//	MyCircle c1,c2;
//	c1.setR(10);
//	cout << "S=" << c1.getS << endl;
//	c1.setR(11);
//	printCircle1(&c1);
//	c2.setR(20);
//	printCircle1(&c2);
//
//
//	return;
//}



class MyAdvCircle
{
private:
	double m_r;
	double m_s;
public:
	double getR()
	{
		return m_r;
	}
	double setR(double r)
	{
		m_r = r;
	}
	double getS()
	{
		m_s = 3.14 * m_r * m_r;
		return m_s;
	}
};



void main()
{
	MyAdvCircle c1, c2;
	//c1.m_r = 10;
	c1.setR(10);

	return;
}