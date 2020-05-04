#include "Mystring.h"
Mystring::Mystring()
{
	m_len = 0;
	m_p = new char(m_len + 1);
	strcpy(m_p, "");
}
Mystring::Mystring(const char* p)
{
	if (p == NULL)
	{
		m_len = 0;
		m_p = new char(m_len + 1);
		strcpy(m_p, "");
	}
	else
	{
		m_len = strlen(p);
		m_p = new char(m_len + 1);
		strcpy(m_p, p);
	}

}
Mystring::Mystring(const Mystring& s)
{
	m_len = s.m_len;
	m_p = new char(m_len + 1);
	strcpy(m_p, s.m_p);
}
Mystring::~Mystring()
{
	if (m_p == NULL)
	{
		delete[] m_p;
		m_p = NULL;
		m_len = 0;
	}
}
Mystring& Mystring::operator=(const char* p)
{
	if (m_p != NULL)
	{
		delete[] m_p;
		m_len = 0;
	}
	if (p == NULL)
	{
		m_len = 0;
		m_p = new char(m_len + 1);
		strcpy(m_p, "");
	}
	else
	{
		m_len = strlen(p);
		m_p = new char(m_len + 1);
		strcpy(m_p, p);
	}
	return *this;
}
Mystring& Mystring::operator=(const Mystring& s)
{
	if (m_p != NULL)
	{
		delete[] m_p;
		m_len = 0;
	}
	
		m_len = s.m_len;
		m_p = new char(m_len + 1);
		strcpy(m_p,s.m_p);
			
	return *this;
}

char& Mystring::operator[](int index)
{
	return m_p[index];
}

ostream& operator<<(ostream& out, Mystring& s)
{
	out << s.m_p;
	return out;
}


//if (s2 == "s222222")
bool Mystring::operator==(const char* p) const
{
	if (p == NULL)
	{
		if (m_len == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (m_len == strlen(p))
		{
			return !strcmp(m_p, p);
		}
		else
		{
			return false;
		}
	}
}

bool Mystring::operator!=(const char* p) const
{
	return !(*this == p);
}


bool Mystring::operator==(const Mystring& s)  const
{
	if (m_len != s.m_len)
	{
		return false;
	}
	return !strcmp(m_p, s.m_p);
}

bool Mystring::operator!=(const Mystring& s) const
{
	return !(*this == s);
}


//if (s3 < "bbbb")
int Mystring::operator<(const char* p)
{
	return strcmp(this->m_p, p);
}

int Mystring::operator>(const char* p)
{
	return strcmp(p, this->m_p);
}

int Mystring::operator<(const Mystring& s)
{
	return strcmp(this->m_p, s.m_p);
}

int Mystring::operator>(const Mystring& s)
{
	return  strcmp(s.m_p, m_p);
}