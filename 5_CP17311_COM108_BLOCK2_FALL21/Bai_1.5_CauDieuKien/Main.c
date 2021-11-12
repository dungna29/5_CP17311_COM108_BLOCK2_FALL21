#include <stdio.h>
/*
 * Câu điều kiện: If, If Else, Else If
 */
int main()
{
	/*
	 * Phần 1: If + tab
	 *
	if (1)//1 = true
	{//Mở
		//Thực thi 1 hành động hoặc nhiều hành động khi thỏa mãn điều kiện của IF. If luôn đúng.
	}//Đóng
	 */

	//Ví dụ 1: VIết 1 chương trình nhập điểm thi môn C và thông báo học lại hoặc qua môn.

	//Bước 1: Xác định số lượng biến sẽ sử dụng.
	double diemC;
	//Bước 2: Lấy giá trị do người dùng nhập vào
	printf_s("Moi ban nhap diem C: ");
	scanf_s("%lf", &diemC);//Gán giá trị vào biến
	//Bước 3: Xử lý nghiệp vụ
	// if (diemC >= 5)
	// {
	// 	printf_s("Chung mung qua mon");
	// 	return;
	// }
	// printf_s("Chuc mung ban mat 759k");

	//Phần 2: Else = thì (Else xảy ra khi không thỏa mãn IF)
	// if (1)
	// {
	// 	
	// }else
	// {
	// 	//Thực thi khi không thỏa mãn IF
	// }
	if (diemC >=5)
	{
		printf_s("Chuc mung qua mon");
	}else
	{
		printf_s("Chuc mung ban mat 759k");
	}

	//Phần 3: Else If dùng để tạo ra nhiều điều kiện hơn
	/*
	 * Ví dụ Else If: 1 Block 3 môn
	 */
	int soMonQua = 1;
	if (soMonQua >=3)
	{
		printf_s("Thuong cho 1 chiec Iphone 13 Pro Max");
	}else if (soMonQua>=2)
	{
		printf_s("Thuong cho 1 chiec Iphone 11 Pro Max");
	}else if (soMonQua>=1)
	{
		printf_s("Thuong cho 1 chiec dien thoai cuc gach");
	}else
	{
		printf_s("Thuong cho khong can di hoc nua");
	}
	/*
	 * Bài tập: Viết 1 chương trình cho phép nhập năm sinh tính ra tuổi của người nhập. Sau đó in thêm trên màn hình với các điều kiện sau:
	 *	1. Tuổi < 18 = Trẻ con
	 *	2. Tuổi >=18 và <25 = Thanh Niên cần đi học
	 *	3. Tuổi >=25 và <30 = Lo cho sự nghiệp
	 *	4. Trường hợp còn lại = Co gang kiem nhieu tien.
	 */
	int ns, tuoi;
	printf_s("Moi ban nhap ns: ");
	scanf_s("%d", &ns);
	tuoi = 2021 - ns;
	printf_s("Tuoi ban nhap vao: %d ", tuoi);
	if (tuoi >= 0 && tuoi <18)//Theo khoảng
	{
		printf_s("Tre con");
	}else if (tuoi >=18 && tuoi<25)
	{
		printf_s("Thanh nien can di hoc");
	}else if (tuoi >=25 && tuoi<30)
	{
		printf_s("Lo cho su nghiep");
	}else
	{
		printf_s("Ban vui long nhap lai nam sinh");
	}
	/*
	 * Bài tập 2: Viết 1 chương trình nhập điểm trung bình môn C: tính ra xếp loại như sau:
	 *  9 -> 10 = Xuất sắc
	 *	8 -> 9 = Giỏi
	 *	6 -> 7 = Khá
	 *	5 -> 6 = TB
	 *	0 -> 5 = Học lại
	 */
	double diemThiC;
	printf_s("Moi nhap diem thi C: ");
	scanf_s("%lf", &diemThiC);
	if (diemThiC>=9 && diemThiC <=10)
	{
		printf_s("Sieu nhan");
	}else if (diemThiC >= 8 && diemThiC < 9)
	{
		printf_s("Gioi");
	}else if (diemThiC >= 6 && diemThiC < 7)
	{
		printf_s("Kha");
	}else if (diemThiC >= 5 && diemThiC < 6)
	{
		printf_s("TB");
	}else
	{
		printf_s("Ban da mat 759K");
	}
}