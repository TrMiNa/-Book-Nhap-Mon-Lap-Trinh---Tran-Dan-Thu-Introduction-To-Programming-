#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <string>
using namespace std;
int main()
{
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    wcout << L"Tiếng Việt có dấu" << endl;
    wchar_t test[1024] = { 0 };
    wcout << L"Hãy nhập vào một chuỗi ký tự:" << endl;
    wcin >> test;
    wcout << L"Chuỗi ký tự mà bạn vừa mới nhập:" << endl;
    wcout << test;
    return 0;
}
// https://daynhauhoc.com/t/cach-nhap-va-xuat-tieng-viet-co-dau-trong-c/32412/14
// https://daynhauhoc.com/t/gap-loi-font-tieng-viet-tren-console/106035/7