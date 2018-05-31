typedef struct toadodiem vitridiem;
/* 	Để tránh việc viết lặp lại nhiều "strut toadodiem" nhiều lần,
	khi viết khai báo một biến nào đó thuộc type struc toadodiem,
	tao dùng cấu trúc trên, với
	1. typedef: sẽ chỉ ra cho máy tính biết rằng chúng ta đang đặt một tên thay thế cho cấu trúc.
	2. struct toadodiem: đây là tên của cấu trúc mà bạn sẽ đặt tên thay thế với typedef.
	3. vitridiem: đây chính là tên mà bạn đặt để thay thế cho cấu trúc struct toadodiem. 
		Bạn có thể đặt một tên bất kỳ mà bạn thích, tôi đặt là toadodiem để cho các bạn thấy rằng khi
		dùng typedef, bạn sẽ tạo ra một cụm từ thay thế cho cấu trúc với chức năng tương đương.

	Rõ ràng điều này có nghĩa là khi bạn viết cụm từ vitridiem
	thì nó sẽ thay thế cho toàn bộ cấu trúc struct toadodiem. 
	Bằng cách này, bạn sẽ không phải đặt cụm struct toadodiem mỗi khi khai báo biến tự tạo của mình nữa
*/
struct toadodiem {
	int x;
	int y;
};

typedef struct {
	char ten[100];
	char ho[100];
	char diachi[100];

	int tuoi;
	int gioitinh; //1 = nam, 0 = nu
}taikhoan;