#include <iostream>
#include <time.h>

using namespace std;

const int MAX = 100, MIN = 0;

/* Chuong trinh don gian nhat, chi thuc hien chuong trinh den khi nao du doan dung moi thoi.
	Va game co the choi mot minh.
*/

int main()
{
	bool ketqua = false;
	int so_bi_mat = 0, so_nhap_vao = 0;
	srand(time(NULL));
	so_bi_mat=(rand()%(MAX-MIN+1)) + MIN;
	cout << "Chuong trinh doan so bi mat bat dau" << endl;
	while(!ketqua)
	{
		cout << "Nhap so ban du doan: ";
		cin >> so_nhap_vao;
		if(so_nhap_vao > so_bi_mat)
		{
			cout << "Lon hon" << endl;
		}
		if (so_nhap_vao < so_bi_mat)
		{
			cout << "Be hon" << endl;
		}
		if (so_nhap_vao == so_bi_mat)
		{
			cout << "Chuc mung!!! Ban da tim ra duoc so bi mat cua ngay hom nay" << endl;
			ketqua = true;
		}
	}
}

/* Cac y thuong khac:
1. Tạo một bộ đếm "số lần đoán". Bộ đếm này sẽ là một biến số tăng dần mỗi khi vòng lặp
được lặp lại. VD: Khi người chơi tìm ra đáp án, sẽ thông báo "Chuc mung ! Ban da tim
duoc so bi mat trong 8 lan doan !!!"
Khi người chơi tìm ra đáp án, chương trình dừng lại. Tại sao ta không hỏi người chơi có
muốn chơi một ván khác không? Nếu bạn thực hiện điều này, chúng ta cần một vòng lặp
bao lấy gần như toàn bộ chương trình, hễ người chơi không muốn dừng thì trò chơi vẫn
được thực hiện lại. Tôi khuyên bạn hãy tạo một biến số dạng Boolean tieptucGame khởi
tạo với giá trị 1. Nếu người chơi muốn dừng lại, hãy cho biến số giá trị 0 để chương trình
dừng lại.

2. Thêm vào mode chơi cho 2 người ! Cần chú ý là người chơi cần chọn giữa mode dành cho
một người hay mode dành cho 2 người ! Bạn phải thêm vào một Menu ở đầu chương trình
yêu cầu người chơi lựa chọn mode mong muốn. Sự khác nhau giữa 2 mode chơi là cách
tạo soBiMat, trường hợp sử dụng rand() như ta vừa thấy, trường hợp sử dụng scanf.
Tạo ra nhiều cấp độ khó khác nhau cho người chơi lựa chọn. Bắt đầu, tạo một Menu yêu
cầu người chơi lựa chọn. Ví dụ:
 1 = từ 1 đến 100.
 2 = từ 1 đến 1000.
 3 = từ 1 đến 10000.	