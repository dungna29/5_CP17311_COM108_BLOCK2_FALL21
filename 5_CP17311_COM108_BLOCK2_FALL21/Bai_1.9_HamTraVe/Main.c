#include <stdio.h>
/*
* Hàm trả về - trả về các giá trị
*	1. Không tham số
*	2. Có tham số
* Cách sử dụng:
*	1. Tên hàm phải có nghĩa
*	2. Tên hàm luôn có động từ đứng trước:
*		Ví dụ: tinhTong(),layDsSinhVien, getLstSinhVien.....
*
  Công thức:
  <Kiểu dữ liệu trả về> <Tên hàm> (<Các tham số truyền vào>)
  {
		//Body code
		return <Đúng Kiểu dữ liệu của hàm>;//Luôn nằm ở cuối cùng
  }
*/
//Khai báo hàm không triển khai trước main
int phepTru(int a, int b);
int phepTru2();
int main()
{
	//Cách gọi hàm trả về: Cần phải biết tên hàm trả về 1 giá trị có kiểu dữ liệu là gì.
	phepTru(10, 5);//Không thấy in ra màn hình bởi cả 1 hàm là 1 giá trị muốn in ra thì phải dùng câu lệnh in ra màn hình
	printf_s("%d", phepTru(20, 5)+2000);

	printf_s("Hieu cua 2 so la: %d", phepTru2());
}
int phepTru(int a, int b)
{
	return a - b;//Là 2 số nguyên trừ cho nhau và phải trả ra 1 giá trị nguyên.
}

int phepTru2()
{
	int a, b;
	printf("Nhap a: ");
	scanf_s("%d", &a);
	printf("Nhap b: ");
	scanf_s("%d", &b);
	return a - b;
}
char method1()
{
	return 'a';
}
double method2()
{
	return 8.6;
}