#include <stdio.h>
/// <summary>
/// NHẬP DỮ LIỆU TỪ BÀN PHÍM
/// scanf_s("%d",&<biến để hứng giá trị>);- Xác định muốn hứng giá trị có kiểu dữ liệu gì?
/// Vẫn có tương tự như printf
/// %d, %s, %f, %c, %lf
/// </summary>
/// <returns></returns>
int main()
{
	//Bài 1: Viết 1 chương trình nhập vào năm sinh và in ra.
	
	//Bước 1: Xác định bài toán cần bao nhiêu biến
	int ns;//Khởi tạo
	//Bước 2: Chỉ dẫn cho người dùng nhập vào in ra
	printf_s("Moi ban nhap nam sinh: ");
	scanf_s("%d", &ns);//Gán giá trị cho biến.
	printf_s("Ban vua nhap vao ns la: %d \n", ns);
	

	//Hãy in thêm tuổi của người nhập
	printf_s("Tuoi cua ban la: %d \n", 2021-ns);

	/*
	 * Bài tập trên lớp:
	 *Bài 1: Viết 1 chương trình nhập số nhà bọn em đang ở và in ra màn hình.
	 *
	 *Bài 2: Khai báo 1 biến tên là ViTien = 10000, Sau đó viết 1 chương trình nhập vào số tiền muốn rút. Sau khi rút báo lại số tiền còn trong ví.
	 */
	double viTien = 10000, sotienRut;
	printf_s("Ban co %.1lf va muon rut bao tien: ",viTien);
	scanf_s("%lf", &sotienRut);
	printf_s("Chung mung ban rut tien thanh cong TK ban con %.1lf", viTien - sotienRut);
}