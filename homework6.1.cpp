#include <iostream>
#include <cstdlib>  
#include <ctime> 

using namespace std;
int main() {
    const int SIZE = 5;
    int arr[SIZE];
    int sum = 0;
    srand(time(0));
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 10 + 1; 
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << endl << "Сумма элементов: " << sum << endl;
    return 0;
}
