#include <stdio.h>
/*
* Hàm không trả về - void
*	1. Không tham số
*	2. Có tham số
* Cách sử dụng:
*	1. Tên hàm phải có nghĩa
*	2. Tên hàm luôn có động từ đứng trước:
*		Ví dụ: tinhTong(),layDsSinhVien, getLstSinhVien.....
  Công thức:
  <Kiểu hàm> <Tên hàm> (<Các tham số truyền vào>)
  {
		//Body code
  }
*/
int a, b, choice;//Biến toàn cục có thể sử dụng bên ngoài phương thức
void menu()//Hàm không có tham số truyền vào
{
	printf_s("Chuong trinh TONG - HIEU 2 SO \n");
	printf_s("1. Tinh Tong \n");
	printf_s("2. Tinh Hieu \n");
	printf_s("3. Phep Nhan \n");
	printf_s("Moi ban chon chuc nang: ");
}
void nhap2So()
{
	printf("Nhap a: ");
	scanf_s("%d", &a);
	printf("Nhap b: ");
	scanf_s("%d", &b);
}
/*
 * Đối với hàm có tham số:
 *	- Có thể truyền nhiều kiểu dữ liệu
 *	- Khi sử dụng phải truyền đủ tham số
 */
void phepNhan2So(int a1, int b1)//Hàm không trả về nhưng có tham số
{
	printf_s("%d x %d = %d", a1, b1, a1 * b1);
}
/*
 * Tham số của hàm có thể là nhiều tham số có những kiểu dữ liệu khác nhau phục vụ bài toán.
 */
void funtion1(int c, double a, char c1,float d1)
{

}
/*
 * Thông thường chúng ta nên khai báo hàm ở phía trên
 */
void hamChucNang1();//Khai báo hàm chứ chưa hề code, việc khai báo này giúp để main gần phía trên hơn và dễ quản lý code hơn.
void hamChucNang2(int a, int b, int c);
int main()
{

	//int a, b, choice;//Biến cục bộ là biến chỉ được sử dụng ở bên trong 1 hàm
	menu();//Để gọi hàm phải biết tên hàm và có dấu ();
	scanf_s("%d", &choice);
	switch (choice)
	{
	case 1:
		nhap2So();
		printf_s("%d + %d = %d", a, b, a + b);
		break;
	case 2:
		nhap2So();
		printf_s("%d - %d = %d", a, b, a - b);
		break;
	case 3:
		nhap2So();
		phepNhan2So(a, b);//Khi gọi đến hàm có tham số truyền đúng thư tự thì mới sử dụng được.
		break;
	default:
		printf_s("Chuc nang ban chon khong ton tai");
		break;
	}
	/*
	 * Bài tập: Tạo cho thầy 1 Project mới để làm bài tập sau.
	 * Viết 1 chương trình có menu và vòng lặp. Bao gồm các bài sau: 
	 * 1. Phép cộng 4 số (Sử dụng hàm không tham số)
	 * 2. Phép Nhân 5 số (Sử dụng hàm có 5 tham số truyền vào)
	 * 3. Tính hiệu các số nhập vào do người dùng chỉ định(Sử dụng hàm không tham số)
	 * 4. Kiểm tra số nhập vào có phải số chia hết cho 3(Sử dụng hàm có tham số.)
	 */
}
void hamChucNang1()
{
	//Triển khai code sau khi đã khai báo ở trên.
}
void hamChucNang2(int a, int b, int c)
{
	//Triển khai code sau khi đã khai báo ở trên.
}
