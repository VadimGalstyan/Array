#ifndef __ARRAY__
#define __ARRAY__

#include <iostream>

class Array
{
public:
Array(const int& size);
~Array();
Array(const Array&);
Array& operator=(const Array&);
int& operator[](const int&);
int operator[](const int& index) const;

friend std::istream& operator>>(std::istream&,Array&);
friend std::ostream& operator<<(std::ostream&,const Array&);

private:
int m_size = 0;
int* m_arr = nullptr;
};


#endif //__ARRAY__