#include <iostream>
#include <cstring>
using namespace std;

bool substr(const char* a, const char* b)
{
    if (strstr(a, b) != 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    setlocale(LC_CTYPE, "rus");

    const char* a = "Hello world";
    const char* b = "wor";
    const char* c = "banana";

    cout << boolalpha;

    cout << substr(a, b) << " " << substr(a, c);
}