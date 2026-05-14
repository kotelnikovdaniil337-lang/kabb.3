#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice;

    // [ ] Выбор способа ввода массива: ручной или готовый (тестовый)
    cout << "1 — Ручной ввод\n2 — Готовый массив\nВыберите: ";
    cin >> choice;
    if (choice == 1) {
        // [ ] Ручное заполнение массива
        cout << "Размер массива: ";
        cin >> n;
        cout << "Элементы: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    } else {
