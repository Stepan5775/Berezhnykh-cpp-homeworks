#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Введите символ: ";
    cin >> ch;
    cout << "Символ: " << ch << endl;
    cout << "Код: " << (int)ch << endl;
    cout << "Код следующего символа: " << (int)(ch + 1) << endl;
    cout << "Следующий символ: " << (char)(ch + 1) << endl;
    return 0;
}
