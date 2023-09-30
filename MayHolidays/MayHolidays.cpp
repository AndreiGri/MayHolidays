#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");

    cout << endl;
    int day = 1;

    cout << " Для определения выходной день в мае или нет введите нужное Вам число: ";
    cin >> day;

    if (day < 1 || day>31) {
        cout << " Такого числа в месяце не бывает!!!" << endl;
    }
    else {
        if ((day >= 1 && day <= 5) || (day >= 8 && day <= 10) || (day % 7 == 0)) {
            cout << " " << day << " мая выходной день!" << endl;
        }
        else {
            cout << " " << day << " мая не является выходным днём!" << endl;
        }
    }

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}