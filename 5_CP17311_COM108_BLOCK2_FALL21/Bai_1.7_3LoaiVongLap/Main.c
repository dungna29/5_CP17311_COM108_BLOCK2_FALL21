#include <stdio.h>
/*
 *  3 Loại vòng lặp: for, while, do...while dùng để lặp lại 1 đoạn code nào đó để thực 1 hành động.
 *	Từ khóa: + break: dùng để ngắt vòng lặp
 *			 + continue: bỏ qua đoạn code phía sau và tiến hành lặp sang vàng vòng lặp mới tiếp theo
 *
 *	1.Công thức để dụng 3 vòng lặp thành thạo
 *				+ Điểm bắt đầu chạy
 *				+ Điều kiện để vòng lặp chạy
 *				+ Bước nhẩy
 */

int main()
{
	//Phần 1: Ví dụ In Ra 10 lần câu Tôi muốn học lập trình
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");

	//Phần 2: Sử dụng vòng lặp để giải quyết bài toán trên khi cần lặp lại 1 hành động.
	//Vòng lặp for: for + tab
	/*
	for (int i = 0; i < length; i++)
	{
		//Các hành động
	}
	int i = 0: Điểm bắt đầu chạy
	i < length: Điều kiện để ngắt vòng lặp.
	i++: Bước nhẩy để đạt đến điều kiện ngắt vòng lặp

	Lưu ý: Vòng lặp chỉ chạy khi điều kiện đúng.
	 */

	for (int i = 0; i < 10; i++)
	{
		printf_s("Toi muon hoc lap trinh");
	}

	//Vòng lặp While true: wh + tab
	// while (5>5) Điều kiện để chạy vòng lặp
	// {
	// 		Thực hiện hành động nào đó lặp lại
	//		Vòng lặp chỉ chạy khi điều kiện đúng.
	// }
	int i = 0;
	while (i < 10)
	{
		printf_s("Toi muon hoc lap trinh");
		i++;
	}

	//Viết 1 chương trình tính tổng và hiệu 2 số có sử dụng Switch Case và vòng lặp.
	while (1)
	{
		int a, b, input;
		printf_s("Moi ban nhap so a: ");
		scanf_s("%d", &a);
		printf_s("Moi ban nhap so b: ");
		scanf_s("%d", &b);
		printf_s("Chuong trinh tinh tong hieu FPOLY \n");
		printf_s("1. Tinh Tong  \n");
		printf_s("2. Tinh Hieu  \n");
		printf_s("3. Thoat  \n");
		printf_s("Moi ban chon chuc nang: ");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf_s("Tong 2 so %d + %d = %d \n", a, b, a + b);
			break;
		case 2:
			break;
		case 3:
			break;
		default:
			break;
		}

	}

}