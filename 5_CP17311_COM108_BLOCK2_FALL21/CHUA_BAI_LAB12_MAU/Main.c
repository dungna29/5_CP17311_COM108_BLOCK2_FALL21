#include <stdio.h>
int main()
{
	int khoang1, khoang2;
	int input;//Khai báo 1 biến số nguyên
	while (1)//1 = true
	{
		printf_s("Menu \n");
		printf_s("1. Full Bang Cuu Chuong \n");
		printf_s("2. Khoang bang cuu chuong \n");
		printf_s("3. Cong 1 day so nguyen \n");
		printf_s("4. Nhap 1 day diem C sau do in Trung Binh \n");
		printf_s("5. Nhap 1 so le den khi dung thi thoi \n");
		printf_s("6. Thoat \n");
		printf_s("Moi ban chon chuc nang: ");
		scanf_s("%d", &input);//Lấy giá trị do người dùng nhập vào
		switch (input)
		{
		case 1:
			for (int i = 1; i <= 10; i++)// i x
			{
				for (int j = 1; j <= 10; j++)//i x j = i*j;
				{
					printf_s("%d x %d = %d \n", i, j, i * j);
				}
			}
			break;
		case 2:
			printf_s("Moi ban nhap khoang 1: ");
			scanf_s("%d", &khoang1);
			printf_s("Moi ban nhap khoang 2: ");
			scanf_s("%d", &khoang2);
			if (khoang1 > khoang2)//Thuật toán hoán vị
			{
				int temp = khoang1;
				khoang1 = khoang2;
				khoang2 = temp;
			}
			for (int i = khoang1; i <= khoang2; i++)// i LÀ VÒNG BẢNG CỬU CHƯƠNG
			{
				for (int j = 1; j <= 10; j++)//J LÀ VÒNG 1 ĐẾN 10
				{
					printf_s("%d x %d = %d \n", i, j, i * j);
				}
			}
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		default:
			break;
		}

	}
}