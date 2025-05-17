#include <iostream>
using namespace std;

bool isVowel(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int countVowels(string s, int index) {
    if (index == s.length()) {
        return 0;
    }
    if (isVowel(s[index])) {
        return 1 + countVowels(s, index + 1); 
    } else {
        return countVowels(s, index + 1); 
    }
}
int main() {
    string S;
    getline(cin, S); 

    int result = countVowels(S, 0);
    cout << result << endl; 
    return 0;
}
