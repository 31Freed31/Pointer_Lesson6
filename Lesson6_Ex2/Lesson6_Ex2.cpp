#include <iostream>
using namespace std;


void reverse(int* arr)
{
    int it = 9;
    for (int i = 0; i < it; i++)
    {
        int temp = arr[i];
        arr[i] = arr[it];
        arr[it] = temp;
        it--;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

}

int main() {
    setlocale(LC_CTYPE, "rus");

    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    reverse(arr);
}