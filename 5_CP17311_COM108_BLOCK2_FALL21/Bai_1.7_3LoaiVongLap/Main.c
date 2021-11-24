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
	
	for (int i = 0; i < 1000; i++)
	{
		printf_s("Toi muon hoc lap trinh");
	}
	//Phần 1: Ví dụ In Ra 10 lần câu Tôi muốn học lập trình
	/*printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");
	printf_s("Toi muon hoc lap trinh");*/

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
		printf_s("Toi muon hoc lap trinh \n");
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
		printf_s("Toi muon hoc lap trinh \n");
		i++;
	}

	//Viết 1 chương trình tính tổng và hiệu 2 số có sử dụng Switch Case và vòng lặp.
	int a, b, input = 0;
	while (input!=3)
	{	
	
		printf_s("Chuong trinh tinh tong hieu FPOLY \n");
		printf_s("1. Tinh Tong  \n");
		printf_s("2. Tinh Hieu  \n");
		printf_s("3. Thoat  \n");
		printf_s("Moi ban chon chuc nang: ");
		scanf_s("%d", &input);
		printf_s("Moi ban nhap so a: ");
		scanf_s("%d", &a);
		printf_s("Moi ban nhap so b: ");
		scanf_s("%d", &b);
		switch (input)
		{
		case 1:
			printf_s("Tong 2 so %d + %d = %d \n", a, b, a + b);
			break;
		case 2:
			break;
		case 3:
			//Thoát
			printf("Hen gap lai lan sau");
			//return;
			break;
		default:
			break;
		}

		//Bảng cửu chương
		/*
		*	3 x 1 = 3
		*	3 x 2 = 6
		*	......
		*	3 x 9 = 27
		*/
		int bcc = 3;
		for (int i = 1; i < 10; i++)
		{
			printf("%d x %d = %d \n",bcc,i,bcc*i);
		}

		//Vòng lặp Do While: do + tab
		// do
		// {
		// 	 Thực hiện ít nhất 1 lần trong trường hợp điều kiện sai.
		// }
		// while (1);

		do
		{
			printf_s("Chao cac ban 1");
		}
		while (5<5);//Vẫn in ra 1 lần câu chào bạn
	}

}