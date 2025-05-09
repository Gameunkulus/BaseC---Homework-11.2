
#include <iostream>;
#include <string>;
#include <Windows.h>;
#include "../ByeLib/LeavePers.h";

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string name;
    cout << "Введите имя: ";
    cin >> name;
    Leaver pers;
    pers.leave(name);

}
