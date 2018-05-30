#ifndef _ARRAY_H
#define _ARRAY_H

void hienthi (int array1 [], int size_array, char *name);

//Tạo một function tongArray để tính tổng các giá trị chứa trong nó (sử dụng return để trả về giá trị).
int sum_array (int array2 [], int size_array);

// Tạo một function trungBinhArray để tính trung bình các giá trị chứa trong nó.
double average_array (int array3 [], int size_array);

// Tạo một function copyArray để chép nội dung array này sang một array khác.
void copy_array (int array4 [], int array5 [], int size_array);

/* Viết một function maximumArray có nhiệm vụ so sánh tất cả các giá trị chứa bên trong array với
giaTriMax. Nếu có giá trị lớn hơn biến số giaTriMax đưa vào, nó sẽ chuyển thành 0 */
void maximun_array (int array6 [], int size_array,  int valueMax);

// Hãy viết một function sapXepArray sắp xếp lại các giá trị bên trong theo thứ tự tăng dần.
void arrange_incremental_array (int array7 [], int size_array);

#endif