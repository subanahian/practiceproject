#include <iostream>
using namespace std;

void printSpaces(int count) {
    if (count == 0) return;
    cout << " ";
    printSpaces(count - 1);
}
void printStars(int count) {
    if (count == 0) return;
    cout << "*";
    printStars(count - 1);
}
void printPyramid(int current, int N) {
    if (current == N) return; 

    int spaces = current;
    int stars = 2 * (N - current) - 1;

    printSpaces(spaces);
    printStars(stars);    
    cout << endl;

    printPyramid(current + 1, N);
}
int main() {
    int N;
    cin >> N;
    printPyramid(0, N); 
    return 0;
}
