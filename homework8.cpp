#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите строку: ";
    getline(cin, word);  
    bool isIsogram = true;  
    for (size_t i = 0; i < word.length(); i++) {
        if (word[i] == ' ') continue; 
        for (size_t j = i + 1; j < word.length(); j++) {
            if (word[j] == ' ') continue; 
            if (word[i] == word[j]) {
                isIsogram = false;  
                break;
            }
        }
        if (!isIsogram) break; 
    }
    if (isIsogram) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }        
    return 0;
}
