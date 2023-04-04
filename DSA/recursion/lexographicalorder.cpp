#include <iostream>
using namespace std;

void printLexicographicalOrder(int num, int N) {
    if(num > N)
        return;
    cout << num << " ";
    printLexicographicalOrder(num * 10, N);
    if(num % 10 != 9)
        printLexicographicalOrder(num + 1, N);
}

int main() {
    int N;
    cin >> N;
	cout << 0 << " ";
    printLexicographicalOrder(1, N);
    return 0;
}
