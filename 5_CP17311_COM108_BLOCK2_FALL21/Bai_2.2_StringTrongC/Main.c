#include <stdio.h>
/*
 * Chuỗi trong C nó là 1 mảng ký tự
 * Java -String, C# - string (chuỗi)
 */
int main()
{
	//Chu Van Tuan = Chuỗi = Tập hợp của nhiều ký tự = Mảng(ARRAY)

	char arr[] = {'D','U','N','G'};
	//Khai báo 1 mảng kiểu char
	char name[100];//Mảng tên tối đa 50 ký tự
	printf_s("Moi ban nhap ten: ");
	gets_s(name, 50);//Đi thi nên dùng cái này
	//scanf_s("%s", name, 50);
	//fgets(name, 50, stdin);
	//scanf_s("%[^\n]", name, 50);//Sử dụng regex
	printf_s("Chao ban %s", name);
}