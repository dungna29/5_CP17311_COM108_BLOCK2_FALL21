#include <stdio.h>
//Ctrl + s
/*
 * Switch Case: sw + tab
 *	switch (choice) - Tham số truyền vào
	{
	case '1': Các trường hợp
		break; Dùng để ngắt Case đang thực thi nếu không có sẽ chạy xuống break gần nhất
	case '2':
		break;
	case '3':
		break;
	case '4':
		break;
	default:
		Khi không thỏa mãn case nào thì sẽ xuống Default
		break;
	}
 */
int main()
{
	/*
	 * Bài tập: Xây dựng 1 cái menu bằng Else if
	 *
		/====Menu Fpoly===/
		1. Ăn phở
		2. Ăn cơm
		3. Ăn cháo
		4. Ăn bún
		Khi chi chọn món ăn sẽ in ra câu:
		Bạn chờ <món ăn đó> trong 5 phút nhé.
	 */
	char choice;
	printf_s("/====Menu Fpoly===/ \n");
	printf_s("1. An Pho \n");
	printf_s("2. An Com \n");
	printf_s("3. An Chao \n");
	printf_s("4. An Bun \n");
	printf_s("Moi ban chon mon: ");
	scanf_s("%c", &choice);
	//Sw + tab
	switch (choice)
	{
	case '1':
		//Thực thi một hành động nào đó
		printf_s("Ban voi long cho 5 phut");
		break;
	case '2':
		printf_s("Ban voi long cho 5 phut");
		break;
	case '3':
		printf_s("Ban voi long cho 5 phut");
		break;
	case '4':
		printf_s("Ban voi long cho 5 phut");
		break;
	default:
		break;
	}
















	//Cách sử dụng Sử dụng If else để giúp khi người ta chọn món sẽ hiển thị ra bạn chờ trong 5 phút nhé.
	// if (choice == '1')
	// {
	// 	printf_s("Ban voi long cho 5 phut");
	// }else if (choice == '2')
	// {
	// 	printf_s("Ban voi long cho 5 phut");
	// }else if (choice == '3')
	// {
	// 	printf_s("Ban voi long cho 5 phut");
	// }else if (choice == '4')
	// {
	// 	printf_s("Ban voi long cho 5 phut");
	// }else
	// {
	// 	printf_s("Chung toi khong phuc vu mon day");
	// }
}