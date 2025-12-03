#include <iostream>
using namespace std;

int sumOfThree(int a, int b, int c) {
    return a + b + c;
}
int main() {
    int a, b, c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;
    int result = sumOfThree(a, b, c);
    cout << "Сумма: " << result << endl;
    return 0;
}
