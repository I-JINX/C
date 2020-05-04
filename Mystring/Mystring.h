#pragma once
#include "iostream"
using namespace std;
#include "string"
class Mystring
{
friend ostream& operator<<(ostream& out, Mystring& s);
friend istream& operator>>(istream& in, Mystring& s);
public:
	Mystring();
	Mystring(const char* p);
	Mystring(const Mystring &s);
	~Mystring();

public:
	Mystring& operator=(const char* p);
	Mystring& operator=(const Mystring& s);
public:
	char& operator[](int index);

public: 
	bool operator==(const char* p) const;
	bool operator==(const Mystring& s) const;
	bool operator!=(const char* p) const;
	bool operator!=(const Mystring& s) const;

public:
	int operator<(const char* p);
	int operator>(const char* p);
	int operator<(const Mystring& s);
	int operator>(const Mystring& s);

public:
	char* c_str()
	{
		return m_p;
	}
	const char* c_str2()
	{
		return m_p;
	}
	int length()
	{
		return m_len;
	}
private:
	int m_len;
	char* m_p;
};

