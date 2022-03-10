#include <iostream>

using namespace std;

int fib(int n){
    int x = 0, y = 1, z, r = 0;
    if (n == 1) return 0;
    else if (n == 2) return 1;
    else {
        cout << 0 << endl << 1 << endl;
        for (int i = 2; i < n; ++i){
            z = x + y;
            r = z;
            cout << r << endl;
            x = y;
            y = z;
        }
        return r;
    }
}

int main()
{
    int n;
    cout << "Hello World" << endl;
    cout << "Введите n для вычисление n-го числа Фиббоначчи. n = ";
    cin >> n;
    fib(n);
    return 0;
}