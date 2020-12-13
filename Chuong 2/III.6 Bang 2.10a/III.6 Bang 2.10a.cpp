// Bang 2.10a Kieu chuoi trong C va trong C++
#include <iostream>
#include <io.h>		// De dung ham _setmode()
#include <fcntl.h>	// De dung ham _setmode()

using namespace std;

int main()
{
	string ascii_Str = "This is a lazy fox";
	wstring unicode_Str = L"Chương trình máy tính";
	// Chế độ xuất ra chữ Unicode, _O_WTEXT hay _O_U16TEXT
	int oldMode = _setmode(_fileno(stdout), _O_WTEXT);
	//-------------------------------------------------------------------
	wcout << L"Unicode Mode: 2-byte characters\n";
	wcout << L"		- Thử in tiếng Việt\n";
	wcout << L"		- " << unicode_Str.c_str() << endl << endl;
	_setmode(_fileno(stdout), oldMode); // Trở lại ACSII _O_TEXT 
	//-------------------------------------------------------------------
	cout << "ACSII mode: 1-byte characters\n";
	cout << "		- In tieng Viet khong dau\n";
	cout << "		- " << ascii_Str.c_str() << endl << endl;

	system("pause");
	return 0;
}