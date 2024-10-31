#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int * ptr; // указатель на динам. массив
	int size;  // размер массива 
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); // copy constructor
	~DynamicArray();

	void Input();// rand
	void Output() const;// вывод на консоль
	int * GetPointer() const;
	int GetSize() const;



    // Перегрузка +
    DynamicArray operator+(int n) const 
    {
        DynamicArray temp = *this;
        return temp;
    }

    // Перегрузка -
    DynamicArray operator-(int n) const 
    {
        DynamicArray temp = *this;
        return temp;
    }

    // Перегрузка *
    DynamicArray operator*(int n) const 
    {
        DynamicArray temp = *this;
        return temp;
    }

    // Перегрузка -
    DynamicArray operator-(const DynamicArray& other) const 
    {
        DynamicArray temp = *this;
        return temp;
    }

    // Перегрузка +
    DynamicArray operator+(const DynamicArray& other) const 
    {
        DynamicArray temp = *this;
        return temp;
    }

    // Перегрузка ++
    DynamicArray& operator++() 
    {
        return *this;
    }

    // Перегрузка --
    DynamicArray& operator--() 
    {
        return *this;
    }



};

