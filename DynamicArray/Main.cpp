//#pragma once
#include "DynamicArray.h"
#include <iostream>



DynamicArray GetObj() //������� �� ��������
{
	DynamicArray obj(3);
	obj.Input();

	return obj;
}
int main()
{
	DynamicArray a(5); // constructor 1 param
	a.Input();
	a.Output();
	DynamicArray b = a; // copy constructor
	b.Output();

	DynamicArray rezult = GetObj();


	system("pause");
}