//exemp program
#include <iostream>
using namespace std;

void incrementar(int *p) {
    *p = *p + 1;
    cout << "O valor apos a incrementacao é " << *p << endl;
}

int main() {
    int num1;
    cout << "Informe um valor: " << endl;
    cin >> num1;

    incrementar(&num1);
    return 0;
}
