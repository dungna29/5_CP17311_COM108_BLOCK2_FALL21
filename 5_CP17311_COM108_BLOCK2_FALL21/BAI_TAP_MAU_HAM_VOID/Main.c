#include <stdio.h>
/*
	 * Bài tập: Tạo cho thầy 1 Project mới để làm bài tập sau.
	 * Viết 1 chương trình có menu và vòng lặp. Bao gồm các bài sau:
	 * 1. Phép cộng 4 số (Sử dụng hàm không tham số)
	 * 2. Phép Nhân 5 số (Sử dụng hàm có 5 tham số truyền vào)
	 * 3. Tính hiệu các số nhập vào do người dùng chỉ định(Sử dụng hàm không tham số)
	 * 4. Kiểm tra số nhập vào có phải số chia hết cho 3(Sử dụng hàm có tham số.)
	 */
int kqPhepNhan,soNhan;
void menu();
void phepCong4So();
void phepNhan5So(int a);
void tinhHieuCacSoNhapVao();
void kiemTraSoChiaCho3();
int main()
{

}
void menu()
{
	int choice;
	printf_s("1. Cong 4 so");
	printf_s("2. Nhan 5 so");
	printf_s("3. Tinh hieu");
	printf_s("4. Kiem Tra Chia 3");
	printf_s("Moi ban chon chuc nang: ");
	scanf_s("%d", &choice);
	switch (choice)
	{
	case 1:
		phepCong4So();
		break;
	case 2:
		for (int i = 0; i < 5; i++)
		{
			printf_s("Nhap so thu %d: ",i);
			scanf_s("%d", &soNhan);
			phepNhan5So(soNhan);//Truyền vào số cần nhân sau mỗi lần chạy vòng lặp
		}
		printf_s("Ket Qua Phep nhan: %d", kqPhepNhan);
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		break;
	}
}
void phepCong4So()
{
	int a, b, c, d;
	printf_s("Nhap so thu 1: ");
	scanf_s("%d", &a);
	printf_s("Nhap so thu 2: ");
	scanf_s("%d", &b);
	printf_s("Nhap so thu 3: ");
	scanf_s("%d", &c);
	printf_s("Nhap so thu 4: ");
	scanf_s("%d", &d);
	printf_s("%d + %d + %d + %d = %d", a, b, c, d, a + b + c + d);
}
void phepNhan5So(int a)
{
	kqPhepNhan *= a;
}
void tinhHieuCacSoNhapVao(){
	int number,so, kq;
	printf_s("Ban muon nhap vao bao nhieu so: ");
	scanf_s("%d", &so);
	for (int i = 0; i < so; i++)
	{
		printf_s("Nhap so thu %d: ",i);
		scanf_s("%d", &number);
		kq -= number;
	}
	printf_s("Hieu cac so: %d", kq);
}