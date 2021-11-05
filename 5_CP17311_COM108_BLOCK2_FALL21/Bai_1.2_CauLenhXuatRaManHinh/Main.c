#include <stdio.h>
/*
 * Câu lệnh printf(); giúp in ra màn hình
 */
 /*
	  * Phần 1: Cách sử dụng
	  * printf("Chuỗi giá trị");// Dùng để in 1 giá trị ra màn hình
	  * printf("%d",<giá trị>);// In giá trị của biến ra màn hình
	  * %d- Số nguyên %f- số thực %s- String %c- ký tự %lf - double
	  */
int main()
{
	//1. Ví dụ:
	printf_s("Toi muon tro thanh lap trinh vien gioi \n");//\n xuống dòng
	int namHienTai = 2021, namRaTruong = 2023;
	printf_s("Toi dang hoc mon C tai nam %d \n", namHienTai);
	printf_s("Tu nam %d den nam %d toi se ra truong", namHienTai, namRaTruong);

	//Chạy chương trình: Ctrl + F5
	/*
	 * Bài 1: Viết 1 chương trình khai báo 3 năm sinh
	 * sau đó in 3 năm sinh ra màn hình theo công thức sau:
	 * Nam Sinh 1: 1999
	 * Nam Sinh 2: 2000
	 * Nam Sinh 3: 2001
	 *
	 * Bài 2: Viết 1 chương trình in điểm môn C ra màn hình
	 * theo công thức sau
	 * Diem C cua ban la: 8.6
	 *
	 * Bài 3: Viết 1 chương trình in 1 ký tự bất kì ra màn hình
	 *
	 */
	//Bài 1:
	printf_s("=========Bai 1=========== \n");
	int year1 = 1999, year2 = 2000, year3 = 2003;
	printf_s("Nam sinh 1: %d \n",year1);
	printf_s("Nam sinh 2: %d \n",year2);
	printf_s("Nam sinh 3: %d \n",year3);
	//Bài 2:
	double diemC = 9.8;
	printf_s("Toi muon diem mon C la %.1lf \n", diemC);
	//Bài 3:
	char c = 'a';
	printf_s("Ky tu ma toi thich %c \n", c);


}