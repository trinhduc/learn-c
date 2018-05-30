#include <iostream>
#include "array.h"

using namespace std;

void hienthi (int array1 [], int size_array, char *name)
{
	int i = 0;
	for (i = 0; i < size_array; i++)
	{
		cout << "Value " << name << "[" << i << "] = ";
		cout << array1[i] << endl;
	}
}

int sum_array (int array2 [], int size_array)
{
	int sum = 0, i = 0;
	for (i = 0; i < size_array; i++)
	{
		sum = sum + array2[i];
	}

	return sum;
}

double average_array (int array3 [], int size_array)
{
	double sum = 0;
	for (int i = 0; i < size_array; i++)
	{
		sum = sum + array3 [i];
	}

	return (double(sum/size_array));
}

void copy_array (int array4 [], int array5 [], int size_array)
{
	for(int i =0; i < size_array; i++)
	{
		array5 [i] = array4 [i];
		cout << "After copy, array_copy [" << i << "] " << "have value: " << array5[i] << endl;
	}

}

void maximun_array (int array6 [], int size_array,  int valueMax)
{
	for (int i = 0; i < size_array; i++)
	{
		if(array6[i] > valueMax)
		{
			array6[i] = 0;
		}

		cout << "After compare, array [" << i << "] " << array6[i] << endl;
	}
}

void arrange_incremental_array (int array7 [], int size_array)
{
	int array_temp [6] = {0};
	int MIN = array7[0];

	for (int i = 0; i < size_array; i++)
	{
		if (MIN > array7[i])
		{
			MIN = array7[i];
		}

		array_temp [i] = MIN;	
	}

	for (int i = 0; i < size_array; i++)
	{
		cout << "Incrementtal Array [" << i << "] " << array_temp [i] << endl;
	}
}
