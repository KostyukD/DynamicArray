#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int * ptr; // ��������� �� �����. ������
	int size;  // ������ ������� 
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); // copy constructor
	~DynamicArray();

	void Input();// rand
	void Output() const;// ����� �� �������
	int * GetPointer() const;
	int GetSize() const;



    // ���������� +
    DynamicArray operator+(int n) const 
    {
        DynamicArray temp = *this;
        return temp;
    }

    // ���������� -
    DynamicArray operator-(int n) const 
    {
        DynamicArray temp = *this;
        return temp;
    }

    // ���������� *
    DynamicArray operator*(int n) const 
    {
        DynamicArray temp = *this;
        return temp;
    }

    // ���������� -
    DynamicArray operator-(const DynamicArray& other) const 
    {
        DynamicArray temp = *this;
        return temp;
    }

    // ���������� +
    DynamicArray operator+(const DynamicArray& other) const 
    {
        DynamicArray temp = *this;
        return temp;
    }

    // ���������� ++
    DynamicArray& operator++() 
    {
        return *this;
    }

    // ���������� --
    DynamicArray& operator--() 
    {
        return *this;
    }



};

