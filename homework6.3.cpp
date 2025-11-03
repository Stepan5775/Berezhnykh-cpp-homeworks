#include <iostream>
#include <string>  
using namespace std;

int main() {
    string input;
    cout << "Введите строку: ";
    getline(cin, input);  
    cout << "Длина строки: " << input.length() << endl;
    return 0;
}
