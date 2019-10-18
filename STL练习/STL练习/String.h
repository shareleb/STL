#pragma once
#include<string.h>
#include<stdlib.h>
#define DIR  16
class String
{
	char * m_data;
	size_t m_capacity;
	size_t m_size;
public:
	String(const char *str = "") :m_capacity(DIR)
	{
		if (nullptr == str)
		{
			m_size = 0;
		}
		else
		{
			m_size = strlen(str);
		}
		capacity(m_size);
		m_data = new char[m_capacity];
		strncpy(m_data, str, m_size);


	}
	String(const  String& s)
	{
		this->m_capacity = s.m_capacity;
		this->m_size = s.m_size;
		this->m_data = new char[m_capacity];
	}
	void capacity(size_t size)
	{
		if (size >m_capacity)
		{
			m_capacity = (size / DIR + 1)*DIR;
		}
	}

};


