#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice;
    cout << "1 — Ручной ввод\n2 — Готовый массив\nВыберите: ";
    cin >> choice;
    if (choice == 1) {
        cout << "Размер массива: ";
        cin >> n;
        cout << "Элементы: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    } else {
         arr[0] = 3; arr[1] = 1; arr[2] = 4; arr[3] = 2;
        arr[4] = 5;
        n = 5;
        cout << "Использован тестовый массив\n";
    }
    cout << "\nИсходный массив:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;