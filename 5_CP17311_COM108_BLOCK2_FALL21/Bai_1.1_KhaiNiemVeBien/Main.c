#include <stdio.h>
/*
 * BÀI 1.1 KHÁI NIỆM VỀ BIẾN
 * 1. Biến dùng để lữu trữ giá trị trong lập trình
 * 2. Biến được lưu vào RAM máy tính khi chương trình bắt đầu chạy và sẽ mất đi khi dừng chương trình
 * 3. Biến cần phải có kiểu dữ liệu ví dụ: int, float, char......
 */
int main()
{ /*
	 * Phần 1: Công thức khai báo biến
	 * + <Kiểu dữ liệu> <Tên biến>;//Cách khai báo 1
	 * + <Kiểu dữ liệu> <Tên biến 1>,<Tên biến 2>,<Tên biến 3>;//Khai báo nhiều biến có cùng kiểu dữ liệu
	 * + <Kiểu dữ liệu> <Tên biến> =(toán tử gán) <giá trị>;
	 *
	 * <Kiểu dữ liệu>: Dùng để định nghĩa kiểu dữ liệu cho giá giá trị cần lưu trữ.
	 */
	//Ví dụ:
	int a;//Khai báo 1 biến a có kiểu dữ liệu là số nguyên và không khởi tạo giá trị ban đầu
	a = 1;//Gán giá trị cho biến a thông qua toán tử =
	
	//Lưu ý: Khi gán giá trị cho biến phải gán giá trị tương ứng với kiểu dữ liệu
	int b = 5;//Khai báo 1 biến b có kiểu dữ liệu là số nguyên và có khởi tạo giá trị ban đầu

	int c1, c2, c3, c4 = 8;//khai báo nhiều biến có cùng kiểu dữ liệu trên 1 dòng code
	

	/*
	 * Phần 2: Đặt tên biến
	 * - Tên biến đặt dễ hiểu và đúng nghĩa
	 * - Tên biến hạn chế đặt bằng tiếng việt khi đi làm về sau
	 * - Không đặt tên biến gây hiểu nhầm.
	 * Gồm 3 cách đặt tên biến với 2 từ trở lên
	 * - C1: normal: sinhvien - thông thường tên biến sẽ đặt kiểu nomarl
	 * - C2: CamelCase: SinhVien
	 * - C3: Under_Score: sinh_Vien
	 * Trong lập trình tên biến phân biệt bằng chữ hoa và chữ thường, không sử dụng từ khóa và số, dấu gạch ngang để đặt tên.
	 */
	 /*
	   * Phần 3: Các kiểu dữ liệu trong lập trình
	   * Số nguyên: short,long, int
	   * Số thực: float,double
	   * Ký tự: char (Chỉ có thể lưu trữ được 1 ký tự)
	   * Chuỗi: String (Ngôn ngữ C không có String)
	   * Logic: Boolean trả ra True hoặc False nhưng trong C sẽ trả ra 0 và 1
	   */
	//1. Kiểu số nguyên
	short s= 1;
	//2. Ký tự: Chỉ có thể lưu trữ được 1 giá trị
	char c = '5';
	char cc3 = 'a';
	
	
}