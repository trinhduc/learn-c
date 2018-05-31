#include <iostream>
#include "my_own_type_of_variable.h"

using namespace std;

void taoToadodiem(vitridiem *poiterdiemB)
{
	poiterdiemB->x = 24;
	poiterdiemB->y = 8; // nếu ghi 08 thì chương trình sẽ báo lỗi không biên dịch được ????

	cout << "Toa do x diem B voi pointer: " << (*poiterdiemB).x << endl;
	cout << "Toa do y diem B voi pointer: " << (*poiterdiemB).y << endl;
}