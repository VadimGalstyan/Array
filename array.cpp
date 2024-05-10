#include "array.h"

Array::Array(const int& size) : m_size(size)
{
    m_arr = new int[m_size];
    for (size_t i = 0; i < m_size; ++i)
    {
        m_arr[i] = rand() % 10;
    }
    
}

Array::~Array()
{
    if (m_size != 0)
    {
        delete[] m_arr;
    }
    
}

Array::Array(const Array& obj)
{
     m_size = obj.m_size;
     m_arr = new int[m_size];

     for (size_t i = 0; i < m_size; ++i)
     {
        m_arr[i] = obj.m_arr[i];
     }
     
}

Array& Array::operator=(const Array& obj)
{
    if (this != &obj)
    {
        if (m_size != 0)
        {
            delete m_arr;
        }

        m_size = obj.m_size;
        m_arr = new int[m_size];

        for (size_t i = 0; i < m_size; ++i)
        {
            m_arr[i] = obj.m_arr[i];
        }
              
    }

    return *this;
}

int& Array::operator[](const int& index)
{
    if (index >= 0 && index < m_size)
    {
        return (m_arr[index]);
    }
}

int Array::operator[](const int& index) const
{
    if (index >= 0 && index < m_size)
    {
        return m_arr[index];
    }
}

std::istream& operator>>(std::istream& in,Array& obj)
{
    if (obj.m_size == 0)
    {
        in >> obj.m_size;
        obj.m_arr = new int[obj.m_size];
    }

    for (size_t i = 0; i < obj.m_size; ++i)
    {
            in >> obj.m_arr[i];
    }

    return in;
}

std::ostream& operator<<(std::ostream& out,const Array& obj)
{
    if (obj.m_size != 0)
    {
        for (size_t i = 0; i < obj.m_size; ++i)
        {
            out<< obj.m_arr[i]<<" ";
        }
    }
    return out;
}