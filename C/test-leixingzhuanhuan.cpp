#include <iostream>
using namespace std;
//
//class Animal
//{
//public:
//	virtual void cry() = 0;
//private:
//};
//
//class Dog:public Animal
//{
//public:
//	virtual void cry()
//	{
//		cout << "wangwang" << endl;
//	}
//	void doHome()
//	{
//		cout << "kanjia" << endl;
//	}
//};
//
//class Cat:public Animal
//{
//public:
//	virtual void cry()
//	{
//		cout << "miaomiao" << endl;
//	}
//
//	void doThing()
//	{
//		cout << "zhalaoshu" << endl;
//	}
//};
//
//void playObj(Animal *base)
//{
//	base->cry();//1.有继承 2.虚函数重写 3.父类指针 指向子类对象-->多态
//	//能识别子类对象
//	//dynamic_cast<>()运行时识别类型
//
//	Dog* pdog = dynamic_cast<Dog*>(base);
//	if(pdog != NULL)
//	{
//		pdog->doHome();
//	}
//
//	Cat* pcat = dynamic_cast<Cat*>(base);
//	if (pcat != NULL)
//	{
//		pcat->doThing();
//	}
//}
//int main()
//{
//	double dpi = 3.14;
//	int num1 = (int)dpi;//c类型转换
//	int num2 = static_cast<int>(dpi);
//
//	//char*->int*
//	char* p1= "hello";
//	int* p2 = NULL;
//	//p2 = static_cast<int*>(p1);//hui做类型检查
//	p2 = reinterpret_cast<int*>(p1);
//
//	cout << "p1:" << p1 << endl;
//	cout << "p2:" << p2 << endl;
//
//	Dog d1;
//	Cat c1;
//
//	Animal* pbase = NULL;
//	pbase = &d1;
//	pbase = static_cast<Animal*>(pbase);//static_cast c++编译时进行类型检查
//
//	//强制类型转换
//	pbase = reinterpret_cast<Animal*>(&d1);
//
//	playObj(&c1);
//
//	return 0;
//}



// ////////////////////////////////////////
//const char *p中const 让p指向的内存空间变为只读
//void printBuf(const char *p)
//{
//	//p[0] = 'a';//×
//	char* p1 = NULL;
//	p1 = const_cast<char*>(p);
//	p1[0] = 'Z';
//	cout << p << endl;
//}
//int main()
//{
//	char buf[] = "aaaaaaaaaaaaaddddd";
//	printBuf(buf);
//
//
//	return 0;
//}

// /////////////
//
//void divide(int x, int y)
//{
//	if (y == 0)
//	{
//		throw x;//抛出 int类型异常
//	}
//	cout << "divide结果：" << x / y << endl;
//}
//void myDivide(int x,int y)
//{
//	divide(x, y);
//}
//
//
//int main()
//{
//	try
//	{
//		//divide(10, 2);
//		//divide(100, 0);
//
//		myDivide(100, 0);
//	}
//	catch(int e)
//	{
//		cout << e << "被零除" << endl;
//	}
//	catch(...)
//	{
//		cout << "未知类型错误" << endl;
//	}
//
//	return 0;
//}


// ////////////////////

//
//class Test3
//{
//public:
//	Test3(int x = 0, int y = 0)
//	{
//		this->a = a;
//		this->b = b;
//		cout << "构造函数" << endl;
//	}
//	~Test3()
//	{
//		cout << "析构函数" << endl;
//	}
//private:
//	int a;
//	int b;
//
//
//};
//
//void myDivide()
//{
//	Test3 t1(1, 2), t2(3, 4);
//	cout << "myDivide....要发生异常" << endl;
//	throw 1;
//}
//
//int main()
//{
//	try
//	{
//		myDivide();
//	}
//	catch(int a)
//	{
//		cout << "int 类型异常" << endl;
//	}
//	catch (...)
//	{
//		cout << "未知类型错误" << endl;
//	}
//	return 0;
//}
//


// ///////////////////////////////////////////////
//
//
////传统的错误处理机制
////throw int类型异常
//void my_strcpy1(char* to, char* from)
//{
//    if (from == NULL)
//    {
//        throw 1;
//    }
//    if (to == NULL)
//    {
//        throw 2;
//    }
//
//    //copy   场景检查
//    if (*from == 'a')
//    {
//        throw 3; //copyʱ����
//    }
//    while (*from != '\0')
//    {
//        *to = *from;
//        to++;
//        from++;
//    }
//    *to = '\0';
//}
//
////传统的错误处理机制
////throw char*类型异常
//void my_strcpy2(char* to, char* from)
//{
//    if (from == NULL)
//    {
//        throw "源buf出错";
//    }
//    if (to == NULL)
//    {
//        throw "目的buf出错";
//    }
//
//    //copy时的场景检查
//    if (*from == 'a')
//    {
//        throw "copy过程出错"; //copy时出错
//    }
//    while (*from != '\0')
//    {
//        *to = *from;
//        to++;
//        from++;
//    }
//    *to = '\0';
//}
//
//
//class BadSrcType {};
//class BadDestType {};
//class BadProcessType
//{
//public:
//    BadProcessType()
//    {
//        cout << "BadProcessType构造函数do \n";
//    }
//
//
//    BadProcessType(const BadProcessType& obj)
//    {
//        cout << "BadProcessType copy构造函数do \n";
//    }
//
//    ~BadProcessType()
//    {
//        cout << "BadProcessType析构函数do \n";
//    }
//
//};
//
//
////传统的错误处理机制
////throw 类与对象 类型错误
//void my_strcpy3(char* to, char* from)
//{
//    if (from == NULL)
//    {
//        throw BadSrcType();
//    }
//    if (to == NULL)
//    {
//        throw BadDestType();
//    }
//
//    //copy时的场景检查
//    if (*from == 'a')
//    {
//        printf("开始 BadProcessType类型异常 \n");
//        throw BadProcessType(); 
//    }
//
//    if (*from == 'b')
//    {
//        throw& (BadProcessType()); 
//    }
//
//    if (*from == 'c')
//    {
//        throw new BadProcessType; 
//    }
//    while (*from != '\0')
//    {
//        *to = *from;
//        to++;
//        from++;
//    }
//    *to = '\0';
//}
//
//void main()
//{
//    int ret = 0;
//    char buf1[] = "cbbcdefg";
//    char buf2[1024] = { 0 };
//
//    try
//    {
//        //my_strcpy1(buf2, buf1);
//        //my_strcpy2(buf2, buf1);
//        my_strcpy3(buf2, buf1);
//    }
//    catch (int e) //e可写可不写
//    {
//        cout << e << " int类型异常" << endl;
//    }
//    catch (char* e)
//    {
//        cout << e << " char* 类型异常" << endl;
//    }
//
//    //---
//    catch (BadSrcType e)
//    {
//        cout << " BadSrcType 类型异常" << endl;
//    }
//    catch (BadDestType e)
//    {
//        cout << " BadDestType 类型异常" << endl;
//    }
//    //结论1:如果接受异常的时候 使用一个异常变量，则copy构造异常变量  
//    /*
//    catch( BadProcessType e) //是把匿名对象copy给e 
//    {
//        cout << " BadProcessType 类型错误" << endl;
//    }
//    */
//    //结论2: 使用引用 会使用throw时的对象
//    //catch( BadProcessType &e) 
//    //{
//    //  cout << " BadProcessType 类型错误" << endl;
//    //}
//
//    //结论3: 指针可以和元素/引用写在一块， 引用 元素不能写在一块
//    catch (BadProcessType* e) //
//    {
//        cout << " BadProcessType 类型异常" << endl;
//        delete e;
//    }
//
//
//    // --
//    catch (...) 
//    {
//        cout << "未知类型异常" << endl;
//    }
//
//    cout << "hello..." << endl;
//    system("pause");
//    return;
//}
//
//
//
//int my_strcpy(char* to, char* from)
//{
//    if (from == NULL)
//    {
//        return 1;
//    }
//    if (to == NULL)
//    {
//        return 2;
//    }
//
//  
//    if (*from == 'a')
//    {
//        return 3; 
//    }
//    while (*from != '\0')
//    {
//        *to = *from;
//        to++;
//        from++;
//    }
//    *to = '\0';
//
//    return 0;
//}
//
//
//void main41()
//{
//    int ret = 0;
//    char buf1[] = "zbcdefg";
//    char buf2[1024] = { 0 };
//
//    ret = my_strcpy(buf2, buf1);
//    if (ret != 0)
//    {
//        switch (ret)
//        {
//        case 1:
//            printf("源buf出错!\n");
//            break;
//        case 2:
//            printf("目的buf出错!\n");
//            break;
//        case 3:
//            printf("copy过程出错!\n");
//            break;
//        default:
//            printf("未知错误!\n");
//            break;
//        }
//    }
//    printf("buf2:%s \n", buf2);
//
//    cout << "hello..." << endl;
//    system("pause");
//    return;
//}
//
//
//
//// ////////////////

#include "vector"
#include "algorithm"

//
void main11()
{
    vector<int>  v1; // 1����: �����Ԫ��copy�������� 
    v1.push_back(-1);
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(3);

    // 1  3  5
    //��
    //2������: �൱��һ��ָ�� ����
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }

    //3�㷨  �㷨�͵����� �����޷������ 
    int num1 = count(v1.begin(), v1.end(), 3);
    cout << "num1: " << num1 << endl;

}

class  Teacher
{
public:
    int     age;
    char    name[64];

public:
    void printT()
    {
        cout << "age: " << age << endl;
    }
};

//������ װ Ԫ��
void main12()
{
    Teacher  t1, t2, t3;
    t1.age = 31;
    t2.age = 32;
    t3.age = 33;

    vector<Teacher>  v1; // 1����: �����Ԫ��copy��������  //����ʵ���� �������� ���㷨����Ч����
    v1.push_back(t1);
    v1.push_back(t2);
    v1.push_back(t3);

    // 1  3  5
    //��
    //2������: �൱��һ��ָ�� ����
    for (vector<Teacher>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << it->age << " ";
    }

    //3�㷨  �㷨�͵����� �����޷������ 
    //int num1 = count(v1.begin(), v1.end(), 3);
    //cout << "num1: " << num1 <<endl;

    //��ש: ����� ���� �� ��ʦ���� ����=33 ����....

}

//������ װ Ԫ��
void main13()
{
    Teacher  t1, t2, t3;
    t1.age = 31;
    t2.age = 32;
    t3.age = 33;
    Teacher* p1, * p2, * p3;
    p1 = &t1;
    p2 = &t2;
    p3 = &t3;

    vector<Teacher*>  v1; // 1����: ��t1 t2 t3�ڴ��׵�ַ ���뵽������
    v1.push_back(p1);
    v1.push_back(p2);
    v1.push_back(p3);

    // p1  p2  p3
    //           ��
    //2������: �൱��һ��ָ�� ����
    for (vector<Teacher*>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << (*it)->age << endl;
    }

    //3�㷨  �㷨�͵����� �����޷������ 
    //int num1 = count(v1.begin(), v1.end(), 3);
    //cout << "num1: " << num1 <<endl;

}

void main111()
{
    //main11();
    //main12();
    main13();


    cout << "hello..." << endl;
    system("pause");
    return;
}



//  ///////////////////


#include <iostream>
using namespace std;
#include "string"
#include "algorithm"

//string�ĳ�ʼ��
void main21()
{
    string s1 = "aaaa";
    string s2("bbbb");
    string s3 = s2; //ͨ���������캯�� ����ʼ������s3
    string s4(10, 'a');

    cout << "s1:" << s1 << endl;
    cout << "s2:" << s2 << endl;
    cout << "s3:" << s3 << endl;
    cout << "s4:" << s4 << endl;
}

//string�� ����
void main22()
{
    string s1 = "abcdefg";

    //1 ���鷽ʽ
    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << " ";
    }
    cout << endl;

    //2 ������
    for (string::iterator it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    try
    {
        for (int i = 0; i < s1.length() + 3; i++)
        {
            cout << s1.at(i) << " ";  //�׳��쳣
        }
    }
    catch (...)
    {
        cout << "�����쳣\n";
    }

    cout << "at֮��" << endl;
    /*
    try
    {
        for (int i=0; i<s1.length() + 3; i++)
        {
            cout << s1[i] << " "; //���ִ��� ���������׳��쳣 ���������ж�
        }
    }
    catch ( ... )
    {
        cout << "�����쳣\n" ;
    }
    */

}

//�ַ�ָ���string��ת��
void main23()
{
    string s1 = "aaabbbb";

    //1 s1===>char *
    //printf("s1:%s \n", s1.c_str());

    //2 char *====>sting 


    //3 s1������ copy buf��
    //char buf1[128] = {0};
    //s1.copy(buf1, 3, 0);  //ע�� ֻ����copy3���ַ� ������C�����ַ���
    //cout << "buf1:" << buf1 << endl; 
}

//�ַ����� ����
void main24()
{
    string s1 = "aaa";
    string s2 = "bbb";
    s1 = s1 + s2;
    cout << "s1:" << s1 << endl;

    string s3 = "333";
    string s4 = "444";
    s3.append(s4);
    cout << "s3:" << s3 << endl;
}


//�ַ����Ĳ��Һ��滻
void main25()
{
    string s1 = "wbm hello wbm 111  wbm 222  wbm 333 ";
    //           ��
    //��һ�� ����wbm index

    int index = s1.find("wbm", 0); //λ���±� ��0��ʼ
    cout << "index: " << index << endl;

    //����1 ��wbm���ֵĴ��� ÿһ�γ��ֵ������±�
    int offindex = s1.find("wbm", 0);
    while (offindex != string::npos)
    {
        cout << "offindex:" << offindex << endl;
        offindex = offindex + 1;
        offindex = s1.find("wbm", offindex); //wang bao ming 
    }

    //����2  ��Сдwbm===>WBM

    string s3 = "aaa  bbb ccc";
    s3.replace(0, 3, "AAA");
    cout << "s3" << s3 << endl;

    offindex = s1.find("wbm", 0);
    while (offindex != string::npos)
    {
        cout << "offindex:" << offindex << endl;
        s1.replace(offindex, 3, "WBM");
        offindex = offindex + 1;
        offindex = s1.find("wbm", offindex); //
    }

    cout << "s1�滻��Ľ��: " << s1 << endl;

}


//�ضϣ�����ɾ�����Ͳ���
void main26()
{
    string s1 = "hello1 hello2 hello1";
    string::iterator it = find(s1.begin(), s1.end(), 'l');
    if (it != s1.end())
    {
        s1.erase(it);
    }
    cout << "s1ɾ��l�Ժ�Ľ��:" << s1 << endl;

    s1.erase(s1.begin(), s1.end());
    cout << "s1ȫ��ɾ��:" << s1 << endl;
    cout << "s1���� " << s1.length() << endl;

    string s2 = "BBB";

    s2.insert(0, "AAA"); // ͷ�巨
    s2.insert(s2.length(), "CCC");

    cout << s2 << endl;
}

void main27()
{
    string s1 = "AAAbbb";
    //1��������ڵ�ַ 2�������� 3Ԥ����ĺ�������
    transform(s1.begin(), s1.end(), s1.begin(), toupper);
    cout << "s1" << s1 << endl;

    string s2 = "AAAbbb";
    transform(s2.begin(), s2.end(), s2.begin(), tolower);
    cout << "s2:" << s2 << endl;

}


void main2222()
{
    //main21();
    //main22();
    //main23();
    //main24();
    //main25();
    //main26();
    main27();
    cout << "hello..." << endl;
    system("pause");
    return;
}


// ////////////////////

#include <iostream>
using namespace std;
#include "vector"

//����Ԫ�ص� ���Ӻ�ɾ��
void main31()
{
    vector<int> v1;

    cout << "length:" << v1.size() << endl;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    cout << "length:" << v1.size() << endl;

    cout << "ͷ��Ԫ��" << v1.front() << endl;


    //�޸� ͷ��Ԫ��
    //��������ֵ����ֵ Ӧ�÷���һ������
    v1.front() = 11;
    v1.back() = 55;

    while (v1.size() > 0)
    {
        cout << "β��Ԫ��" << v1.back(); //��ȡβ��Ԫ��
        v1.pop_back(); //ɾ��β��Ԫ��
    }
}

//vector�ĳ�ʼ��
void main32()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);

    vector<int> v2 = v1;  //�����ʼ��

    vector<int> v3(v1.begin(), v1.begin() + 2);
}

void printV(vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

//vector�ı��� ͨ������ķ�ʽ 
void main33()
{
    vector<int> v1(10);   //��ǰ���ڴ�׼����

    for (int i = 0; i < 10; i++)
    {
        v1[i] = i + 1;
    }

    //  for (int i=0; i<10; i++)
    //  {
    //      printf("%d ", v1[i]);
    //  }

    printV(v1);

}

//push_back��ǿ������
void main34()
{
    vector<int> v1(10);   //��ǰ���ڴ�׼����
    v1.push_back(100);
    v1.push_back(200);
    cout << "size: " << v1.size() << endl;
    printV(v1);
}


//1������ end()������ 
//   1  3   5
//   �� 
//            ��
//�� it == v1.end()��ʱ�� ˵����������Ѿ����������...
//end()��λ�� Ӧ���� 5�ĺ���

//2 ������������
/*
typedef iterator pointer;
typedef const_iterator const_pointer;
typedef _STD reverse_iterator<iterator> reverse_iterator;
typedef _STD reverse_iterator<const_iterator> const_reverse_iterator;
*/
void main35()
{
    vector<int> v1(10);
    for (int i = 0; i < 10; i++)
    {
        v1[i] = i + 1;
    }

    //�������
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }

    //�������
    for (vector<int>::reverse_iterator rit = v1.rbegin(); rit != v1.rend(); rit++)
    {
        cout << *rit << " ";
    }

}

//vector  ɾ��
void main36()
{
    vector<int> v1(10);
    for (int i = 0; i < 10; i++)
    {
        v1[i] = i + 1;
    }

    //����ɾ��
    v1.erase(v1.begin(), v1.begin() + 3);
    printV(v1);

    //����Ԫ�ص�λ�� ָ��λ��ɾ��
    v1.erase(v1.begin()); //��ͷ��ɾ��һ��Ԫ��
    printV(v1);

    cout << endl;

    //����Ԫ�ص�ֵ 
    v1[1] = 2;
    v1[3] = 2;
    printV(v1);

    for (vector<int>::iterator it = v1.begin(); it != v1.end();)
    {
        if (*it == 2)
        {
            it = v1.erase(it);  //�� ɾ����������ָ���Ԫ�ص�ʱ��,eraseɾ����������it�Զ����ƶ�
        }
        else
        {
            it++;
        }
    }
    printV(v1);

    cout << endl;
    v1.insert(v1.begin(), 100);
    v1.insert(v1.end(), 200);
    printV(v1);

}
void main333()
{
    //main31();
    //main32();
    //main33();
    //main34();
    //main35();
    main36();
    cout << "hello..." << endl;
    system("pause");
    return;
}


// //////////////////

#include <iostream>
using namespace std;
#include "deque"
#include "algorithm"


void printD(deque<int>& d)
{
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
}
void main41()
{
    deque<int> d1;
    d1.push_back(1);
    d1.push_back(3);
    d1.push_back(5);

    d1.push_front(-11);
    d1.push_front(-33);
    d1.push_front(-55);
    cout << endl;

    cout << "ͷ��Ԫ��:" << d1.front() << endl;
    cout << "β��Ԫ��:" << d1.back() << endl;
    printD(d1);

    d1.pop_front();
    d1.pop_back();
    printD(d1);
    cout << endl;

    //���� -33 �������±��ֵ
    deque<int>::iterator it = find(d1.begin(), d1.end(), -33);
    if (it != d1.end())
    {
        cout << "-33�����±���" << distance(d1.begin(), it) << endl;
    }
    else
    {
        cout << "û���ҵ�ֵΪ-33��Ԫ��" << endl;
    }
}
void main444()
{
    main41();
    cout << "hello..." << endl;
    system("pause");
    return;
}


// //////////////////////

#include <iostream>
using namespace std;
#include "stack"

//ջģ�� 
//ջ���㷨 �� �������͵ķ���
void main51()
{
    stack<int> s;

    //��ջ
    for (int i = 0; i < 10; i++)
    {
        s.push(i + 1);
    }
    cout << "ջ�Ĵ�С" << s.size() << endl;

    //��ջ
    while (!s.empty())
    {
        int tmp = s.top(); //��ȡջ��Ԫ��
        cout << tmp << " ";
        s.pop(); //����ջ��Ԫ�� 
    }
}

//teacher���
class Teacher
{
public:
    int     age;
    char    name[32];
public:
    void printT()
    {
        cout << "age:" << age << endl;
    }

};

void main52()
{
    Teacher t1, t2, t3;
    t1.age = 31;
    t2.age = 32;
    t3.age = 33;

    stack<Teacher> s;
    s.push(t1);
    s.push(t2);
    s.push(t3);

    while (!s.empty())
    {
        Teacher tmp = s.top();
        tmp.printT();
        s.pop();
    }
}

void main53()
{
    Teacher t1, t2, t3;
    t1.age = 31;
    t2.age = 32;
    t3.age = 33;
    stack<Teacher*> s;
    s.push(&t1);
    s.push(&t2);
    s.push(&t3);

    while (!s.empty())
    {
        Teacher* p = s.top();
        p->printT();
        s.pop();
    }
}

void main555()
{
    //main51();
    //main52();
    main53();
    cout << "hello..." << endl;
    system("pause");
    return;
}

// /////////////////

#include <iostream>
using namespace std;

#include <queue>


//�����л�����������
void main61()
{
    queue<int>  q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "��ͷԪ��:" << q.front() << endl;
    cout << "���еĴ�С" << q.size() << endl;
    while (!q.empty())
    {
        int tmp = q.front();
        cout << tmp << " ";
        q.pop();
    }
}

//���е��㷨 �� �������͵ķ���

//teacher���
class Teacher
{
public:
    int     age;
    char    name[32];
public:
    void printT()
    {
        cout << "age:" << age << endl;
    }
};

void main62()
{
    Teacher t1, t2, t3;
    t1.age = 31;
    t2.age = 32;
    t3.age = 33;
    queue<Teacher> q;
    q.push(t1);
    q.push(t2);
    q.push(t3);

    while (!q.empty())
    {
        Teacher tmp = q.front();
        tmp.printT();
        q.pop();
    }
}
void main63()
{
    Teacher t1, t2, t3;
    t1.age = 31;
    t2.age = 32;
    t3.age = 33;
    queue<Teacher*> q;
    q.push(&t1);
    q.push(&t2);
    q.push(&t3);

    while (!q.empty())
    {
        Teacher* tmp = q.front();
        tmp->printT();
        q.pop();
    }
}

void main666()
{
    //main61();
    //main62();
    main63();
    cout << "hello..." << endl;
    system("pause");
    return;
}

// ///////////////

#include <iostream>
using namespace std;
#include "list"


//list�Ļ�������
void main71()
{
    list<int> l;
    cout << "list�Ĵ�С:" << l.size() << endl;
    for (int i = 0; i < 10; i++)
    {
        l.push_back(i); //β������Ԫ�� β�巨
    }
    cout << "list�Ĵ�С:" << l.size() << endl;

    list<int>::iterator it = l.begin();

    while (it != l.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    //list�����������
    //0  1  2   3   4   5
//              ��
    it = l.begin();
    it++;
    it++;
    it++;
    //it = it + 5;  //��֧������ķ�������
    l.insert(it, 100); //����100����������ôλ��
    for (list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }

    //����1 �����Ľ��index ����Ǵ�0��λ�ÿ�ʼ
    //      ��3��λ�ò���Ԫ��, ��ԭ����3��λ�ñ��4��λ��  ԭ����4��λ�ñ��5��λ��

}

//list ɾ��
void main72()
{
    list<int> l;
    cout << "list�Ĵ�С:" << l.size() << endl;
    for (int i = 0; i < 10; i++)
    {
        l.push_back(i); //β������Ԫ�� β�巨
    }
    cout << "list�Ĵ�С:" << l.size() << endl;

    for (list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //0  1  2   3   4   5
    //          ��
    list<int>::iterator it1 = l.begin();
    list<int>::iterator it2 = l.begin();
    it2++;
    it2++;
    it2++;

    l.erase(it1, it2);

    for (list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    l.insert(l.begin(), 100);
    l.insert(l.begin(), 100);
    l.insert(l.begin(), 100);

    l.erase(l.begin()); //
    l.remove(100); //2
    for (list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}


void main777()
{
    //main71();
    main72();
    cout << "hello..." << endl;
    system("pause");
    return;
}

// /////////////


#include <iostream>
using namespace std;
#include "queue"

void main81()
{
    priority_queue<int> p1; //Ĭ���� ���ֵ���ȼ����� 
    //priority_queue<int, vector<int>, less<int> > p1; //�൱������д
    priority_queue<int, vector<int>, greater<int>> p2; //��Сֵ���ȼ�����

    p1.push(33);
    p1.push(11);
    p1.push(55);
    p1.push(22);
    cout << "���д�С" << p1.size() << endl;
    cout << "��ͷ" << p1.top() << endl;

    while (p1.size() > 0)
    {
        cout << p1.top() << " ";
        p1.pop();
    }
    cout << endl;

    cout << "���� ��Сֵ���ȼ�����" << endl;

    p2.push(33);
    p2.push(11);
    p2.push(55);
    p2.push(22);

    while (p2.size() > 0)
    {
        cout << p2.top() << " ";
        p2.pop();
    }
}
void main()
{
    main81();
    cout << "hello..." << endl;
    system("pause");
    return;
}
// /////////////

#include <iostream>
using namespace std;
#include "queue"

void main81()
{
    priority_queue<int> p1; //Ĭ������� �� ���ֵ���ȼ����� 
    priority_queue<int, vector<int>, less<int>> p2; //��ǰ����õ�Ԥ���庯��  ν��
    priority_queue<int, vector<int>, greater<int> >  p3; //��Сֵ���ȼ�����

    p1.push(33);
    p1.push(11);
    p1.push(55);
    p1.push(22);

    cout << "��ͷԪ��:" << p1.top() << endl;
    cout << "���еĴ�С:" << p1.size() << endl;

    while (p1.size() > 0)
    {
        cout << p1.top() << " ";
        p1.pop();
    }

    cout << "���� ��Сֵ���ȼ����� " << endl;

    p3.push(33);
    p3.push(11);
    p3.push(55);
    p3.push(22);

    cout << " ��Сֵ���ȼ����� ��ͷԪ��:" << p3.top() << endl;
    cout << " ��Сֵ���ȼ����� ���еĴ�С:" << p3.size() << endl;

    while (p3.size() > 0)
    {
        cout << p3.top() << " ";
        p3.pop();
    }

}

void main888()
{
    main81();
    cout << "hello..." << endl;
    system("pause");
    return;
}

// //////////////


#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "set"

//1 ���� ����(Ĭ�ϴ�С����) Ψһ (��ڶ����� �������ݽṹ�ı���) 
void main91()
{
    set<int> set1;
    for (int i = 0; i < 5; i++)
    {
        int tmp = rand();
        set1.insert(tmp);
    }
    set1.insert(100);
    set1.insert(100);
    set1.insert(100);

    //��ӡ���
    for (set<int>::iterator it = set1.begin(); it != set1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //ɾ������
    cout << "\nɾ������";
    while (!set1.empty())
    {
        set<int>::iterator it = set1.begin();
        printf("%d ", *it);
        set1.erase(set1.begin());
    }
}

//2 ���� ��С���� �Ӵ�С
void main92()
{
    set<int, greater<int>> set1;
    for (int i = 0; i < 5; i++)
    {
        int tmp = rand();
        set1.insert(tmp);
    }
    set1.insert(100);
    set1.insert(100);
    set1.insert(100);

    //��ӡ���
    for (set<int, greater<int>>::iterator it = set1.begin(); it != set1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //ɾ������
    cout << "\nɾ������";
    while (!set1.empty())
    {
        set<int, greater<int>>::iterator it = set1.begin();
        printf("%d ", *it);
        set1.erase(set1.begin());
    }
}

//3 �Զ����������� ����
//03 �º��� �������� ����() ���� ���бȽϴ�С
//��Ŀ��ѧ������ѧ�ţ��������ԣ���Ҫ��������뼸��ѧ������set�����У�
//ʹ�������е�ѧ����ѧ�ŵ���������
class Student
{
public:
    Student(char* name, int age)
    {
        strcpy(this->name, name);
        this->age = age;
    }
protected:
public:
    char name[64];
    int age;
};

//��������
struct StuFunctor
{
    bool operator()(const Student& left, const Student& right)
    {
        return (left.age < right.age);
    }
};

//
int main93()
{
    set<Student, StuFunctor> set1;
    Student s1("��1", 32);

    set1.insert(s1);
    set1.insert(Student("��2", 32));
    set1.insert(Student("��3", 53));
    set1.insert(Student("��4", 34));

    //��ӡ���
    for (set<Student, StuFunctor >::iterator it = set1.begin(); it != set1.end(); it++)
    {
        cout << (*it).name << " ";
    }
    system("pause");
    return 0;
}


//04��ʾ��set���ϲ��ҹ���
int main94()
{
    int     i = 0;
    set<int> set1;

    for (i = 1; i < 10; i++)
    {
        set1.insert(i);
    }
    //��ӡ���
    for (set<int>::iterator it = set1.begin(); it != set1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    set<int>::iterator it1 = set1.lower_bound(5); //���ڵ���5������
    set<int>::iterator it2 = set1.upper_bound(5); //����5�ĵ�����

    //ͨ������������Ԫ�صĲ���
    cout << "it1 " << *it1 << " " << "it2 " << *it2 << endl;

    //
    pair <set<int>::iterator, set<int>::iterator> pairIt = set1.equal_range(5);

    set<int>::iterator it3 = pairIt.first; //��ȡ��һ��
    set<int>::iterator it4 = pairIt.second; //��ȡ�ڶ���

    cout << "it3 " << *it3 << " " << "it4 " << *it4 << endl;
    system("pause");
    return 0;
}



void main()
{
    //main91();
    //main92();
    //main93();
    main94();
    cout << "hello..." << endl;
    system("pause");
    return;
}
// ////////////

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "set"

//1 ���� Ԫ��Ψһ �Զ�����(Ĭ������� �Ǵ�С����) ���ܰ���[]��ʽ����Ԫ�� 
// �����  

//setԪ�ص�����/����/ɾ����������
void main91()
{
    set<int>  set1;

    for (int i = 0; i < 5; i++)
    {
        int tmp = rand();
        set1.insert(tmp);
    }
    //����Ԫ�� �ظ���
    set1.insert(100);
    set1.insert(100);
    set1.insert(100);

    for (set<int>::iterator it = set1.begin(); it != set1.end(); it++)
    {
        cout << *it << " ";
    }

    //ɾ������ 
    while (!set1.empty())
    {
        set<int>::iterator it = set1.begin();
        cout << *it << " ";
        set1.erase(set1.begin());
    }
}

//2 �Ի������������� set���Զ������� 
void main92()
{
    set<int> set1;
    set<int, less<int>> set2;   //Ĭ������������� 

    set<int, greater<int>> set3;  //�Ӵ� �� С

    for (int i = 0; i < 5; i++)
    {
        int tmp = rand();
        set3.insert(tmp);
    }

    //�Ӵ� �� С
    for (set<int, greater<int>>::iterator it = set3.begin(); it != set3.end(); it++)
    {
        cout << *it << endl;
    }
}


class Student
{
public:
    Student(char* name, int age)
    {
        strcpy(this->name, name);
        this->age = age;
    }
public:
    char name[64];
    int     age;
};

// 
struct FuncStudent
{
    bool operator()(const Student& left, const Student& right)
    {
        if (left.age < right.age)  
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

//3 �Զ����������͵����� �º������÷�
void main93()
{
    Student s1("s1", 31);
    Student s2("s2", 22);
    Student s3("s3", 44);
    Student s4("s4", 11);
    Student s5("s5", 31);

    set<Student, FuncStudent> set1;
    set1.insert(s1);
    set1.insert(s2);
    set1.insert(s3);
    set1.insert(s4);
    set1.insert(s5); //

    //����
    for (set<Student, FuncStudent>::iterator it = set1.begin(); it != set1.end(); it++)
    {
        cout << it->age << "\t" << it->name << endl;
    }
}

//typedef pair<iterator, bool> _Pairib;
//4 ����ж� set1.insert�����ķ���ֵ
//Pair���÷� 
void main94()
{
    Student s1("s1", 31);
    Student s2("s2", 22);
    Student s3("s3", 44);
    Student s4("s4", 11);
    Student s5("s5", 31);

    set<Student, FuncStudent> set1;
    pair<set<Student, FuncStudent>::iterator, bool> pair1 = set1.insert(s1);
    if (pair1.second == true)
    {
        cout << "����s1�ɹ�" << endl;
    }
    else
    {
        cout << "����s1ʧ��" << endl;
    }

    set1.insert(s2);

    //���֪�� ���� �Ľ��
    pair<set<Student, FuncStudent>::iterator, bool> pair5 = set1.insert(s5); //�������31�� �ܲ���ɹ�  
    if (pair5.second == true)
    {
        cout << "����s1�ɹ�" << endl;
    }
    else
    {
        cout << "����s1ʧ��" << endl;
    }

    //����
    for (set<Student, FuncStudent>::iterator it = set1.begin(); it != set1.end(); it++)
    {
        cout << it->age << "\t" << it->name << endl;
    }
}


//find����  equal_range 
//���ؽ����һ��pair
void main95()
{
    set<int> set1;

    for (int i = 0; i < 10; i++)
    {
        set1.insert(i + 1);
    }

    //�Ӵ� �� С
    for (set<int>::iterator it = set1.begin(); it != set1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    set<int>::iterator it0 = set1.find(5);
    cout << "it0:" << *it0 << endl;

    int num1 = set1.count(5);
    cout << "num1:" << num1 << endl;

    set<int>::iterator it1 = set1.lower_bound(5); // ���ڵ���5��Ԫ�� �� ��������λ��
    cout << "it1:" << *it1 << endl;

    set<int>::iterator it2 = set1.lower_bound(5); // ����5��Ԫ�� �� ��������λ��
    cout << "it2:" << *it2 << endl;

    //
    //typedef pair<iterator, bool> _Pairib;
    //typedef pair<iterator, iterator> _Pairii;
    //typedef pair<const_iterator, const_iterator> _Paircc;
    //��5Ԫ��ɾ����
    set1.erase(5);
    pair<set<int>::iterator, set<int>::iterator>  mypair = set1.equal_range(5);
    set<int>::iterator it3 = mypair.first;
    cout << "it3:" << *it3 << endl;  //5  //6

    set<int>::iterator it4 = mypair.second;
    cout << "it4:" << *it4 << endl;  //6  //6

}

void main999()
{
    //main91();
    //main92();
    //main93();
    //main94();
    //main95();
    cout << "hello..." << endl;
    system("pause");
    return;
}

// //////////////

#include <iostream>
using namespace std;

#include "set"

void main1001()
{
    multiset<int> set1;
    int tmp = 0;

    printf("������multiset���ϵ�ֵ:");
    scanf("%d", &tmp);
    while (tmp != 0)
    {
        set1.insert(tmp);
        printf("������multiset���ϵ�ֵ:");
        scanf("%d", &tmp);
    }

    //����
    for (multiset<int>::iterator it = set1.begin(); it != set1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    while (!set1.empty())
    {
        multiset<int>::iterator it = set1.begin();
        cout << *it << " ";
        set1.erase(it);
    }
}

void main()
{
    main1001();
    cout << "hello..." << endl;
    system("pause");
    return;
}



// /////////////////



#include <iostream>
using namespace std;

#include "string"
#include <vector>
#include <list>
#include "set"
#include <algorithm>
#include "functional"

//�������� ��������()
template <typename T>
class ShowElemt
{
public:
    ShowElemt()
    {
        n = 0;
    }
    void operator()(T& t)
    {
        n++;
        //printN();
        cout << t << " ";
    }
    void printN()
    {
        cout << "n:" << n << endl;
    }
protected:
private:
    int n;
};


//����ģ��  ==����
template <typename T>
void FuncShowElemt(T& t)
{
    cout << t << endl;
}

//��ͨ����
void FuncShowElemt2(int& t)
{
    cout << t << " ";
}

//�������� ���� ;  �����������ͨ��������ͬ
//
void main01()
{
    int a = 10;
    ShowElemt<int> showElemt;
    showElemt(a); //���������()��ִ�� ����һ������ //�º���

    FuncShowElemt<int>(a);
    FuncShowElemt2(a);
}

//�������������������,��ͻ�ƺ����ĸ���,�ܱ��ֵ���״̬��Ϣ
//��������ĺô�
// for_each�㷨��, ������������������
// for_each�㷨��, �������󵱷���ֵ
void main02()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);

    for_each(v1.begin(), v1.end(), ShowElemt<int>()); //������������ �����º���
    cout << endl;
    for_each(v1.begin(), v1.end(), FuncShowElemt2); //ͨ���ص�����  ˭ʹ��for_each ˭ȥ��д�ص���������ڵ�ַ


    ShowElemt<int> show1;
    //�������� ����������
    /*
        template<class _InIt,
        class _Fn1> inline
            _Fn1 for_each(_InIt _First, _InIt _Last, _Fn1 _Func)
        {   // perform function for each element
            _DEBUG_RANGE(_First, _Last);
            _DEBUG_POINTER(_Func);
            return (_For_each(_Unchecked(_First), _Unchecked(_Last), _Func));
        }
    */
    //1 for_each�㷨�� ��������Ĵ��� ��Ԫ��ֵ���� ,�������ô���
    for_each(v1.begin(), v1.end(), show1);
    show1.printN();

    cout << "ͨ��for_each�㷨�ķ���ֵ�����õĴ���" << endl;
    show1 = for_each(v1.begin(), v1.end(), show1);
    show1.printN();

    //���� Ҫ��: ����� stl�㷨���ص�ֵ�ǵ����� ���� ν�ʣ��������� ��stl�㷨���ŵ���Ҫ��
}

template<typename T>
class IsDiv
{
public:
    IsDiv(const T& divisor)
    {
        this->divisor = divisor;
    }
    bool operator()(T& t)
    {
        return (t % divisor == 0);
    }

protected:
private:
    T divisor;
};

void main03()
{
    vector<int> v2;
    for (int i = 10; i < 33; i++)
    {
        v2.push_back(i);
    }
    int a = 4;
    IsDiv<int> myDiv(a);

    //find_if(v2.begin(), v2.end(), myDiv );

    /*
    template<class _InIt,
    class _Pr> inline
        _InIt find_if(_InIt _First, _InIt _Last, _Pr _Pred)
    {   // find first satisfying _Pred
        _DEBUG_RANGE(_First, _Last);
        _DEBUG_POINTER(_Pred);
        return (_Rechecked(_First,
            _Find_if(_Unchecked(_First), _Unchecked(_Last), _Pred)));
    }
    //find_if����ֵ��һ��������
    //Ҫ��: ����� stl�㷨���ص�ֵ�ǵ����� ���� ν�ʣ��������� ��stl�㷨���ŵ���Ҫ��
    */

    vector<int>::iterator it;
    it = find_if(v2.begin(), v2.end(), IsDiv<int>(a));
    if (it == v2.end())
    {
        cout << "������û�б�4������Ԫ��" << endl;
    }
    else
    {
        cout << "��һ���Ǳ�4������Ԫ����:" << *it << endl;
    }

}


//��Ԫ��������
template <typename T>
class SumAdd
{
public:
    T operator()(T t1, T t2)
    {
        return t1 + t2;
    }
};

void main04()
{
    //v1 v2 ==> v3
    vector<int> v1, v2;
    vector<int> v3;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);

    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);

    v3.resize(10);

    /*
    template<class _InIt1,
    class _InIt2,
    class _OutIt,
    class _Fn2> inline
        _OutIt transform(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _OutIt _Dest, _Fn2 _Func)
    {   // transform [_First1, _Last1) and [_First2, ...) with _Func
        _DEBUG_RANGE(_First1, _Last1);
        _DEBUG_POINTER(_Dest);
        _DEBUG_POINTER(_Func);
        if (_First1 != _Last1)
            return (_Transform2(_Unchecked(_First1), _Unchecked(_Last1),
            _First2, _Dest, _Func,
            _Is_checked(_Dest)));
        return (_Dest);
    }

    //transform ���������� �������Ŀ�ʼλ�� ���س���
    */

    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), SumAdd<int>());

    for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}


bool MyCompare(const int& a, const int& b)
{
    return a < b; //��С����
}

void main05()
{
    vector<int> v1(10);

    for (int i = 0; i < 10; i++)
    {
        int tmp = rand() % 100;
        v1[i] = tmp;
    }

    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for_each(v1.begin(), v1.end(), FuncShowElemt2);
    cout << endl;

    sort(v1.begin(), v1.end(), MyCompare);
    for_each(v1.begin(), v1.end(), FuncShowElemt2);
    cout << endl;
}

struct CompareNoCase
{
    bool operator()(const string& str1, const string& str2)
    {
        string str1_;
        str1_.resize(str1.size());
        transform(str1.begin(), str1.end(), str1_.begin(), tolower); //Ԥ���庯������

        string str2_;
        str2_.resize(str2.size());
        transform(str2.begin(), str2.end(), str2_.begin(), tolower); //Ԥ���庯������

        return (str1_ < str2_); // ��С�����������
    }
};
void  main06()
{
    set<string> set1;
    set1.insert("bbb");
    set1.insert("aaa");
    set1.insert("ccc");
    set<string>::iterator it = set1.find("aAa"); //find���� Ĭ�� ���ִ�Сд
    if (it == set1.end())
    {
        cout << " û�� ���ҵ� aaa " << endl;
    }
    else
    {
        cout << " ���ҵ� aaa " << endl;
    }

    set<string, CompareNoCase> set2;
    set2.insert("bbb");
    set2.insert("aaa");
    set2.insert("ccc");

    set<string, CompareNoCase>::iterator it2 = set2.find("aAa");
    if (it2 == set2.end())
    {
        cout << " û�� ���ҵ� aaa " << endl;
    }
    else
    {
        cout << " �����ִ�С�ĵĲ���  ���ҵ� aaa " << endl;
    }

}

void main1111()
{
    //main01(); //���������������
    //main02(); //��������ĺô� ������������������ ��������������ֵ

    //main03(); //һԪν��
    //main04(); //��Ԫ�������� �Ͷ�Ԫν��
    //main05(); //��Ԫ�������� �Ͷ�Ԫν��
    main06(); //��Ԫν����set�����е�Ӧ��
    cout << "hello..." << endl;
    system("pause");
    return;
}



// ////////////



2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
#include <iostream>
using namespace std;

#include "string"
#include <vector>
#include <list>
#include "set"
#include <algorithm>
#include "functional"


//plus<int> Ԥ����õĺ������� ��ʵ�ֲ�ͬ���͵����ݵ� + ����
//ʵ���� �������� ���㷨�ķ��� ===��ͨ������������ʵ�ֵġ�������

//˼������ô��֪�� plus<type> ����������
void main21()
{
    /*
    template<class _Ty>
    struct plus
        : public binary_function<_Ty, _Ty, _Ty>
    {   // functor for operator+
        _Ty operator()(const _Ty& _Left, const _Ty& _Right) const
        {   // apply operator+ to operands
            return (_Left + _Right);
        }
    };
    */
    plus<int> intAdd;
    int x = 10;
    int y = 20;
    int z = intAdd(x, y); // x + y
    cout << "z:" << z << endl;

    plus<string> stringAdd;

    string s1 = "aaa";
    string s2 = "bbb";
    string s3 = stringAdd(s1, s2);
    cout << "s3:" << s3 << endl;

    vector<string> v1;
    v1.push_back("bbb");
    v1.push_back("aaa");
    v1.push_back("ccc");
    v1.push_back("zzz");
    v1.push_back("ccc");
    v1.push_back("ccc");

    /*
    template<class _Ty>
    struct greater
        : public binary_function<_Ty, _Ty, bool>
    {   // functor for operator>
        bool operator()(const _Ty& _Left, const _Ty& _Right) const
        {   // apply operator> to operands
            return (_Left > _Right);
        }
    };
    */
    sort(v1.begin(), v1.end(), greater<string>());

    for (vector<string>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << endl;
    }

    //�� ccc ���ֵĸ���
    string sc = "ccc";

    //equal_to<string>() ���������� left��������������right��������sc
    //bind2nd���������� ����Ԥ���庯������ �� �ڶ����������а�
    int num = count_if(v1.begin(), v1.end(), bind2nd(equal_to<string>(), sc));
    cout << "num: " << num << endl;
}

class IsGreat
{
public:
    IsGreat(int i)
    {
        m_num = i;
    }
    bool operator()(int& num)
    {
        if (num > m_num)
        {
            return true;
        }
        return false;
    }
private:
    int m_num;
};

void main22()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i + 1);
    }
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    int num1 = count(v1.begin(), v1.end(), 3);
    cout << "num1:" << num1 << endl;

    //ͨ�� ν�� �����2 �ĸ���
    int num2 = count_if(v1.begin(), v1.end(), IsGreat(2));
    cout << "num2:" << num2 << endl;

    /*
    template<class _Ty>
    struct greater
        : public binary_function<_Ty, _Ty, bool>
    {   // functor for operator>
        bool operator()(const _Ty& _Left, const _Ty& _Right) const
        {   // apply operator> to operands
            return (_Left > _Right);
        }
    };
    */
    //ͨ�� Ԥ����ĺ������� �����2 �ĸ���
    //greater<int>() ���������� ���������������Ԫ�� ���Ҳ����̶���2 ��ͨ��bind2nd���ģ�
    int num3 = count_if(v1.begin(), v1.end(), bind2nd(greater<int>(), 2));
    cout << "num3:" << num3 << endl;

    //�� �����ĸ���
    int num4 = count_if(v1.begin(), v1.end(), bind2nd(modulus<int>(), 2));
    cout << "�����ĸ���num4:" << num4 << endl;

    //�� ż���ĸ��� ȡ����(negator)
    int num5 = count_if(v1.begin(), v1.end(), not1(bind2nd(modulus<int>(), 2)));
    cout << "ż���ĸ��� num5:" << num5 << endl;

}
void main2222()
{
    //main21();
    main22(); //�����������ۺϰ���
    cout << "hello..." << endl;
    system("pause");
    return;
}

// ///////////////////

#include <iostream>
using namespace std;

#include "string"
#include <vector>
#include <list>
#include "set"
#include <algorithm>
#include "functional"


//��Ԫ��������
template <typename T>
class SumAdd
{
public:
    T operator()(T t1, T t2)
    {
        return t1 + t2;
    }
};

int mysum(int& t1, int& t2)
{
    return t1 + t2;
}

void main34()
{
    //v1 v2 ==> v3
    vector<int> v1, v2;
    vector<int> v3;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);

    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);

    v3.resize(10);

    /*
        template<class _InIt1,
        class _InIt2,
        class _OutIt,
        class _Fn2> inline
            _OutIt transform(_InIt1 _First1, _InIt1 _Last1,
            _InIt2 _First2, _OutIt _Dest, _Fn2 _Func)
        {   // transform [_First1, _Last1) and [_First2, ...) with _Func
            _DEBUG_RANGE(_First1, _Last1);
            _DEBUG_POINTER(_Dest);
            _DEBUG_POINTER(_Func);
            if (_First1 != _Last1)
                return (_Transform2(_Unchecked(_First1), _Unchecked(_Last1),
                _First2, _Dest, _Func,
                _Is_checked(_Dest)));
            return (_Dest);
        }
    */


    //  transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), SumAdd<int>() );
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), mysum);

    for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void main3333()
{
    main34();
    cout << "hello..." << endl;
    system("pause");
    return;
}
// /////////////




2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
149
150
151
152
153
154
155
156
157
158
159
160
161
162
163
164
165
166
167
168
169
170
171
172
173
174
175
176
177
178
179
180
181
182
183
184
185
186
187
188
189
190
191
192
193
194
195
196
197
198
199
200
201
202
203
204
205
206
207
208
209
210
211
212
213
214
215
216
217
218
219
220
221
222
223
224
225
226
227
228
229
230
231
232
233
234
235
236
237
238
239
240
241
242
243
244
245
246
247
248
249
250
251
252
253
254
255
256
257
258
259
260
261
262
263
264
265
266
267
268
269
270
271
272
273
274
275
276
277
278
279
280
281
282
283
284
285
286
287
288
289
290
291
292
293
294
295
296
297
298
299
300
301
302
303
304
305
306
307
308
309
310
311
312
313
314
315
316
317
318
319
320
321
322
323
324
325
326
327
328
329
330
331
332
333
334
335
336
337
338
339
340
341
342
343
344
345
346
347
348
349
350
351
352
353
354
355
356
357
358
359
360
361
362
363
364
365
366
367
368
369
370
371
372
373
374
375
376
377
378
379
380
381
382
383
384
385
386
387
388
389
390
391
392
393
394
395
396
397
398
399
400
401
402
403
404
405
406
407
408
409
410
411
412
413
414
415
416
417
418
419
420
421
422
423
424
425
426
427
428
429
430
431
432
433
434
435
436
437
438
439
440
441
442
443
444
445
446
447
448
449
450
451
452
453
454
455
456
457
458
459
460
461
462
463
464
465
466
467
468
469
470
471
472
473
474
475
476
477
478
479
480
481
482
483
484
485
486
487
488
489
490
491
492
493
494
495
496
497
498
499
500
501
502
503
504
505
506
507
508
509
510
511
512
513
#include <iostream>
using namespace std;

#include "string"
#include <vector>
#include <list>
#include "set"
#include <algorithm>
#include "functional"
#include "iterator"  //�������������ͷ�ļ�
#include<numeric>


void printV(vector<int>& v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
}

void printList(list<int>& v)
{
    for (list<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
}

void showElem(int& n)
{
    cout << n << " ";
}

class CMyShow
{
public:
    CMyShow()
    {
        num = 0;
    }
    void operator()(int& n)
    {
        num++;
        cout << n << " ";
    }
    void printNum()
    {
        cout << "num:" << num << endl;
    }
protected:
private:
    int num;
};

void main41_foreach()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);

    printV(v1);
    cout << endl;

    /*
    template<class _InIt,
    class _Fn1> inline
        _Fn1 for_each(_InIt _First, _InIt _Last, _Fn1 _Func)
    {   // perform function for each element
        _DEBUG_RANGE(_First, _Last);
        _DEBUG_POINTER(_Func);
        return (_For_each(_Unchecked(_First), _Unchecked(_Last), _Func));
    } */

    //�������� �ص�������ڵ�ַ
    for_each(v1.begin(), v1.end(), showElem);
    cout << endl;

    for_each(v1.begin(), v1.end(), CMyShow());
    cout << endl;

    CMyShow mya;
    CMyShow my1 = for_each(v1.begin(), v1.end(), mya); //��my1��ʼ��
    mya.printNum();  //ma1��my1 ��������ͬ�Ķ���
    my1.printNum();

    my1 = for_each(v1.begin(), v1.end(), mya);  //��my1��ֵ
    my1.printNum();
}


int  increase(int i)
{
    return i + 100;
}

void main42_transform()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);

    printV(v1);
    cout << endl;

    //transform ʹ�ûص�����
    transform(v1.begin(), v1.end(), v1.begin(), increase);
    printV(v1);
    cout << endl;

    //transform ʹ�� Ԥ����ĺ�������
    transform(v1.begin(), v1.end(), v1.begin(), negate<int>());
    printV(v1);
    cout << endl;

    //transform ʹ�� ���������� �ͺ�������
    list<int> mylist;
    mylist.resize(v1.size());

    transform(v1.begin(), v1.end(), mylist.begin(), bind2nd(multiplies<int>(), 10));
    printList(mylist);
    cout << endl;

    //transform Ҳ���԰������� ֱ���������Ļ
    transform(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "), negate<int>());
    cout << endl;
}


//һ������£�for_each��ʹ�õĺ������󣬲��������ã�û�з���ֵ
//transform��ʹ�õĺ������󣬲���һ�㲻ʹ�����ã����ǻ��з���ֵ
int showElem2(int n)
{
    cout << n << " ";
    return n;
}

void main43_transform_pk_foreach()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);

    vector<int> v2 = v1;

    for_each(v1.begin(), v1.end(), showElem);


    //transform �� ���������Ҫ��
    /*
c:\program files\microsoft visual studio 10.0\vc\include\algorithm(1119):
    �μ������ڱ���ĺ��� ģ�� ʵ����
        ��_OutIt std::_Transform1<int*,_OutIt,
        void(__cdecl *)(int &)>(_InIt,_InIt,_OutIt,_Fn1,
        std::tr1::true_type)��������
1>          with
1>          [
1>              _OutIt=std::_Vector_iterator<std::_Vector_val<int,std::allocator<int>>>,
1>              _InIt=int *,
1>              _Fn1=void (__cdecl *)(int &)
1>          ]
    */

    /*
    template<class _InIt,
    class _OutIt,
    class _Fn1> inline
        _OutIt _Transform(_InIt _First, _InIt _Last,
        _OutIt _Dest, _Fn1 _Func)
    {   // transform [_First, _Last) with _Func
        for (; _First != _Last; ++_First, ++_Dest)
            *_Dest = _Func(*_First);  //������ Ϊʲô Ҫ�з���ֵ
        return (_Dest);
    }
    */
    transform(v2.begin(), v2.end(), v2.begin(), showElem2);
}

void main44_adjacent_find()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(5);

    vector<int>::iterator it = adjacent_find(v1.begin(), v1.end());
    if (it == v1.end())
    {
        cout << "û���ҵ� �ظ���Ԫ��" << endl;
    }
    else
    {
        cout << *it << endl;
    }
    int index = distance(v1.begin(), it);
    cout << index << endl;

}

// 0 1  2  3 ......n-1
//���ַ� 1K = 1024  10��  �ٶȿ�

void main45_binary_search()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(9);

    bool b = binary_search(v1.begin(), v1.end(), 7);
    if (b == true)
    {
        cout << "�ҵ���" << endl;
    }
    else
    {
        cout << "û����" << endl;
    }

}

void main46_count()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(7);
    v1.push_back(9);
    v1.push_back(7);

    int num = count(v1.begin(), v1.end(), 7);

    cout << num << endl;


}

bool GreatThree(int iNum)
{
    if (iNum > 3)
    {
        return true;
    }
    return false;
}
void main46_countif()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(7);
    v1.push_back(9);
    v1.push_back(7);

    int num = count_if(v1.begin(), v1.end(), GreatThree);
    cout << "num:" << num << endl;
}


void main47_find_findif()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(7);
    v1.push_back(9);
    v1.push_back(7);

    vector<int>::iterator it = find(v1.begin(), v1.end(), 5);
    cout << "*it:" << *it << endl;

    //��һ������3��λ��
    vector<int>::iterator it2 = find_if(v1.begin(), v1.end(), GreatThree);
    cout << "*it2:" << *it2 << endl;
}

void main_merge()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);

    vector<int> v3;
    v3.resize(v1.size() + v2.size());

    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    printV(v3);
}

class Student
{
public:
    Student(string name, int id)
    {
        m_name = name;
        m_id = id;
    }
    void printT()
    {
        cout << "name: " << m_name << " id " << m_id << endl;
    }
public:
    string  m_name;
    int     m_id;
};

bool CompareS(Student& s1, Student& s2)
{
    return (s1.m_id < s2.m_id);
}


void main_sort()
{
    Student s1("�ϴ�", 1);
    Student s2("�϶�", 2);
    Student s3("����", 3);
    Student s4("����", 4);
    vector<Student> v1;
    v1.push_back(s4);
    v1.push_back(s1);
    v1.push_back(s3);
    v1.push_back(s2);

    for (vector<Student>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        it->printT();
    }

    //sort �����Զ��庯������ �����Զ����������͵�����
    //�滻 �㷨��ͳһ�� (ʵ�ֵ��㷨���������͵ķ���) ===>�����ֶκ�������
    sort(v1.begin(), v1.end(), CompareS);

    for (vector<Student>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        it->printT();
    }

}

void main_random_shuffle()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);

    random_shuffle(v1.begin(), v1.end());
    printV(v1);

    string str = "abcdefg";
    random_shuffle(str.begin(), str.end());
    cout << "str: " << str << endl;
}

void main_reverse()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    reverse(v1.begin(), v1.end());
    printV(v1);
}

void main52_copy()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);

    vector<int> v2;
    v2.resize(v1.size());

    copy(v1.begin(), v1.end(), v2.begin());
    printV(v2);
}


bool great_equal_5(int& n)
{
    if (n >= 5)
    {
        return true;
    }
    return false;
}
void main53_replace_replaceif()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(3);
    replace(v1.begin(), v1.end(), 3, 8);

    // >=5
    replace_if(v1.begin(), v1.end(), great_equal_5, 1);

    printV(v1);

}

void main54_swap()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);


    swap(v1, v2);
    printV(v1);

}

void main55_accumulate()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    int tmp = accumulate(v1.begin(), v1.end(), 100);
    cout << tmp << endl;
}

void main56_fill()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);

    fill(v1.begin(), v1.end(), 8);
    printV(v1);

}

void main57_union()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);

    vector<int> v3;
    v3.resize(v1.size() + v2.size());


    set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    printV(v3);
}
void main()
{
    //main41_foreach();
    //main42_transform();
    // main43_transform_pk_foreach();
    //main44_adjacent_find();
    //main45_binary_search();
    //main46_count();
    //main46_countif();
    //main47_find_findif();

    //main_merge(); //48
    //main_sort();
    //main_random_shuffle();
    //main_reverse();//51

    //main52_copy();
    //main53_replace_replaceif();
//main54_swap();
    //main55_accumulate();
    //main56_fill();
    main57_union();
    cout << "hello..." << endl;
    system("pause");
    return;
}


// ///////////////////




2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
149
150
151
152
#include <iostream>
using namespace std;

#include "string"
#include <vector>
#include <list>
#include "set"
#include <algorithm>
#include "functional"
#include "iterator"  //�������������ͷ�ļ�
#include<numeric>
#include "map"
#include "deque"

class Speaker
{
public:
    string  m_name;
    int     m_score[3];
};

//����ѡ��
int GenSpeaker(map<int, Speaker>& mapSpeaker, vector<int>& v)
{
    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    random_shuffle(str.begin(), str.end());

    for (int i = 0; i < 24; i++)
    {
        Speaker tmp;
        tmp.m_name = "ѡ��";
        tmp.m_name = tmp.m_name + str[i];
        mapSpeaker.insert(pair<int, Speaker>(100 + i, tmp));
    }

    for (int i = 0; i < 24; i++)
    {
        v.push_back(100 + i); //�μӱ�������Ա
    }
    return 0;
}

//ѡ�ֳ�ǩ
int speech_contest_draw(vector<int>& v)
{
    random_shuffle(v.begin(), v.end());
    return 0;
}


//ѡ�ֱ���
int speech_contest(int index, vector<int>& v1, map<int, Speaker>& mapSpeaker, vector<int>& v2)
{
    //С��ı����÷� ��¼����;���ǰ���� ��3��
    multimap<int, int, greater<int>> multmapGroup; //С��ɼ�
    int tmpCount = 0;

    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        tmpCount++;
        //���
        {
            deque<int> dscore;
            for (int j = 0; j < 10; j++) //10����ί���
            {
                int score = 50 + rand() % 50;
                dscore.push_back(score);
            }
            sort(dscore.begin(), dscore.end());
            dscore.pop_back();
            dscore.pop_front(); //ȥ����ͷ� ��߷�

            //��ƽ����
            int scoresum = accumulate(dscore.begin(), dscore.end(), 0);
            int scoreavg = scoresum / dscore.size();
            mapSpeaker[*it].m_score[index] = scoreavg; //ѡ�ֵ÷� ����������
            multmapGroup.insert(pair<int, int>(scoreavg, *it));
        }

        //��������
        if (tmpCount % 6 == 0)
        {
            cout << "С��ı����ɼ�" << endl;
            for (multimap<int, int, greater<int>>::iterator mit = multmapGroup.begin(); mit != multmapGroup.end(); mit++)
            {
                //���  ����  �÷�
                cout << mit->second << "\t" << mapSpeaker[mit->second].m_name << "\t" << mit->first << endl;
            }

            //ǰ��������
            while (multmapGroup.size() > 3)
            {
                multimap<int, int, greater<int>>::iterator it1 = multmapGroup.begin();
                v2.push_back(it1->second); //��ǰ���� �ŵ�v2 �������� ��
                multmapGroup.erase(it1);
            }

            multmapGroup.clear(); //�����С�� �����ɼ�
        }

    }
    return 0;
};

//�鿴�������
int speech_contest_print(int index, vector<int>& v, map<int, Speaker>& mapSpeaker)
{
    printf("��%d�� ��������\n", index + 1);
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "�������: " << *it << "\t" << mapSpeaker[*it].m_name << "\t" << mapSpeaker[*it].m_score[index] << endl;
    }
    return 0;
};

void main()
{
    //���������
    map<int, Speaker> mapSpeaker; //�μӱ�����ѡ��
    vector<int>           v1; //��1�� �ݽ����� ����
    vector<int>           v2; //��2�� �ݽ����� ����
    vector<int>           v3; //��3�� �ݽ����� ����
    vector<int>           v4; //���ǰ���� �ݽ����� ����

    //����ѡ�� �õ���һ��ѡ�ֵı�������
    GenSpeaker(mapSpeaker, v1);

    //��1�� ѡ�ֳ�ǩ ѡ�ֱ��� �鿴�������
    cout << "\n\n\n�����,��ʼ��1�ֱ���" << endl;
    cin.get();
    speech_contest_draw(v1);
    speech_contest(0, v1, mapSpeaker, v2);
    speech_contest_print(0, v2, mapSpeaker);

    //��2�� ѡ�ֳ�ǩ ѡ�ֱ��� �鿴�������
    cout << "\n\n\n�����,��ʼ��2�ֱ���" << endl;
    cin.get();
    speech_contest_draw(v2);
    speech_contest(1, v2, mapSpeaker, v3);
    speech_contest_print(1, v3, mapSpeaker);

    //��3�� ѡ�ֳ�ǩ ѡ�ֱ��� �鿴�������
    cout << "\n\n\n�����,��ʼ��3�ֱ���" << endl;
    cin.get();
    speech_contest_draw(v3);
    speech_contest(2, v3, mapSpeaker, v4);
    speech_contest_print(2, v4, mapSpeaker);

    cout << "hello..." << endl;
    system("pause");
    return;
}

// //////////////////





