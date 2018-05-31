#include <iostream>

#include "my_own_type_of_variable.h"

using namespace std;

int main (int argc, char *argv[])
{
	vitridiem diemA;
	taikhoan khachhang;

	diemA.x = 16;
	diemA.y = 05;

	cout << "Toa do x cua diem A la: " << diemA.x << endl;
	cout << "Toa do y cua diem A la: " << diemA.y << endl;
	cout << endl;
	
	cout << "Moi nhap ten: ";
	cin >> khachhang.ten;
	cout << "Ho cua ban: ";
	cin >> khachhang.ho;

	cout << "Họ tên đầy đủ của khách hàng là: " << khachhang.ho << " " << khachhang.ten << endl;
	return 0;
}