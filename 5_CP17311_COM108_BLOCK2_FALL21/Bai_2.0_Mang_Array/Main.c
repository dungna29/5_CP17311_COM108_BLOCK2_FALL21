#include <stdio.h>
/*
 *  Mảng - ARRAY
 *	1. Mảng dùng để lưu trữ 1 tập giá trị có cùng kiểu dữ liệu
 *	2. Mảng trong lập trình là mảng tĩnh không co giãn
 *	3. Để truy xuất và gán phần tử trong mảng cần biết index và index luôn bắt đầu từ 0
 */
int main()
{
	//Khai báo biến lưu trữ 1 giá trị
	int a = 5;
	a = 99;

	//Phần 1: Cách dùng và khởi tạo
	// <kiểu dữ liệu> <arr + tên mảng>[] = {giá trị 1,giá trị 2...}; 
	// <kiểu dữ liệu> <arr + tên mảng>[kích thước mảng số nguyên];

	int arrNumbers[] = { 99,12,33 };//Khởi tạo 1 mảng số nguyên có sẵn 3 giá trị ban đầu.
	int arrYears[4];//Khởi tạo 1 mảng số nguyên có kích thước là 4 phần tử.
	//Các bạn có thể tạo ra các mảng có các kiểu dữ liệu khác nhau

	//Phần 2: Truy xuất và gán giá trị thông qua index
	//arrYears = 2021; Lỗi vì không xác định được lưu vào đâu
	arrYears[0] = 2021;//[0] = Index 0
	arrYears[1] = 2022;
	arrYears[2] = 2023;
	arrYears[3] = 2024;
	arrYears[0] = 1999;//Ghi đè lại giá trị

	//Truy xuất giá trị trong mảng gán vào đâu thì lấy ra vậy
	printf_s("Index 0 = %d \n", arrYears[0]);
	printf_s("Index 1 = %d \n", arrYears[1]);
	printf_s("Index 2 = %d \n", arrYears[2]);
	printf_s("Index 3 = %d \n", arrYears[3]);

	printf_s("======================\n");
	//Cách để in tất cả các phần tử trong mảng ra màn hình dùng vòng lặp
	//Index thì không âm
	for (int i = 0; i < 4; ++i)
	{
		printf_s("Index 0 = %d \n", arrYears[i]);
	}
	/*
	 * Bài 1: Khai báo 1 mảng số nguyên gồm các phần tử sau
	 * int arrNumberFpoly[] = {88,7,9,6,5,8};	 *
	 *  - In số 5 ra màn hình bằng câu printf.
	 *  - In tất cả các phần tử có ở trong mảng ra màn hình
	 *  - In tất cả các giá trị chẵn ra màn hình.
	 *
	 *	Bài 2: Cho người dùng nhập vào 1 mảng số nguyên và in tổng dãy số người dùng đã nhập ra màn hình.
	 *
	 *	18h Chữa 1 vài bài
	 *
	 */
	//Bài 1: 
	int arrNumberFpoly[] = { 88,7,9,6,5,8 };
	printf_s("%d \n", arrNumberFpoly[4]);
	for (int i = 0; i < 6; ++i)
	{
		printf_s("%d ", arrNumberFpoly[i]);
	}
	printf_s("\n");
	for (int i = 0; i < 6; ++i)
	{
		if (arrNumberFpoly[i]%2==0)
		{
			printf_s("%d ", arrNumberFpoly[i]);
		}
	}
	printf_s("\n");
	//Bài 2:
	int arrNumberBai2[200];
	int soLuong,tong;
	printf_s("Ban muon bao nhieu: ");
	scanf_s("%d", &soLuong);
	for (int i = 0; i < soLuong; ++i)
	{
		printf_s("Moi ban nhap vao lan thu %d: ", i);
		scanf_s("%d", &arrNumberBai2[i]);
	}
	for (int i = 0; i < soLuong; ++i)
	{
		printf_s("%d ", arrNumberBai2[i]);
		tong += arrNumberBai2[i];
	}
	printf_s("\n");
	printf_s("Tong = %d", tong);
}