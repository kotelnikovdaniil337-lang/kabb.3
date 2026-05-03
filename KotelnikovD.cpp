#include <iostream>
using namespace std;

int main() {
    int n;
    double a[100], b[100], s = 0;
    cout << "Размерность: ";
    cin >> n;
    cout << "Введите " << n << " координат первого вектора: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << "Введите " << n << " координат второго вектора: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    if (cin.fail()) {
        cout << "Ошибка ввода!" << endl;
        return 1;
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + a[i] * b[i];
    }
}

