#include <iostream>
#include "array.h"

using namespace std;

int main()
{
	int array [6] = {1, 5, 6, 2, 4, 8};
	char ArrayCore [] = "ArrayCore";
	// char *ArrayC  = ArrayCore;

	int array_copy [6] = {0};
	char ArrayCopy [] = "ArrayCopy";
	// char *ArrayCy = ArrayCopy;

	int sum = 0;
	double average_value = 0;

	int giatriMax = 0;

	// Hien thi array
	hienthi(array, 6, ArrayCore);
	cout << "================================" << endl;
	hienthi(array_copy, 6, ArrayCopy);


	// Tong cac phan tu trong array
	sum = sum_array(array, 6);
	cout << "Tong cac gia tri trong array = " << sum << endl;

	// average value in array
	average_value = average_array (array, 6);
	cout << "Trung binh cong cac phan tu trong array = " << average_value << endl;

	// Copy du lieu mang array vao mang array_copy
	copy_array (array, array_copy, 6);

	cout << "Moi ban nhap vao gia tri Max: ";
	cin >> giatriMax;
	maximun_array (array, 6, giatriMax);

	arrange_incremental_array (array, 6);


	return 0;
}
