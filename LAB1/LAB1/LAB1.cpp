#include <iostream>
using namespace std;
int main()
{   
    int a;
    setlocale(0, "Russian");
    cout << "Hello World!\n";
    cout << "Привет, мир\n";
    cout << "Введите число\n";
    cin >> a;
    cout << "Вы ввели " << a << endl;
    cout << a << "^2 = " << a * a;
}