//example program
#include <iostream>
using namespace std;

void pont(int num) {
    int *ptr = &num;
    *ptr = *ptr * 2;
    cout << *ptr << endl;
}

int main() {
    int num1;

    cout << "informe um valor: " << endl;
    cin >> num1;

    pont(num1);
    return 0;
}
