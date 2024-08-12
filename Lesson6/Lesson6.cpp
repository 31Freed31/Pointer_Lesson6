#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *b;
    *b = *a;
    *a = temp;

}

int main() {
    setlocale(LC_CTYPE, "rus");

    int a = 20;
    int b = 10;

    cout << "a = " << a << " b = " << b << endl;

    swap(&a, &b);

    cout << "a = " << a << " b = " << b;
}