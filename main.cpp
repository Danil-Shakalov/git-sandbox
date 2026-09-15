// Выполнил: Шакалов Д., группа ПИ-51.
// Лабораторная работа № 1. Вариант 30.
// Свободное падение.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double g = 9.81;  // ускорение свободного падения, м/с^2

// Скорость падения через t секунд: v = g * t
double fallSpeed(double t) {
    return g * t;
}

// Высота падения за t секунд: h = g * t^2 / 2
double fallHeight(double t) {
    return g * t * t / 2.0;
}

// Время падения с высоты h: t = sqrt(2h / g)
double fallTime(double h) {
    if (h < 0) {
        cout << "Ошибка: высота не может быть отрицательной.\n";
        return -1;
    }
    return sqrt(2.0 * h / g);
}


int main() {
    int choice;
    double t, h;

    do {
        cout << "\n== Вариант 30: свободное падение ==\n";
        cout << "1. Скорость падения через время t\n";
        cout << "2. Высота падения за время t\n";
        cout << "3. Время падения с высоты h\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите время t (сек): ";
                cin >> t;
                if (t < 0){ cout << "Ошибка: время не может быть отрицательным.\n";}
                else { cout << fixed << setprecision(2);
		    cout << "Скорость = " << fallSpeed(t) << " м/с\n";}
                break;
	    case 2:
                cout << "Введите время t (сек): ";
                cin >> t;
                if (t < 0) {
                    cout << "Ошибка: время не может быть отрицательным.\n";
                } else {
                    cout << fixed << setprecision(2);
                    cout << "Высота = " << fallHeight(t) << " м\n";
                }
                break;
	    case 3:
                cout << "Введите высоту h (м): ";
                cin >> h;
                if (h < 0) {
                    cout << "Ошибка: высота не может быть отрицательной.\n";
                    break;
                }
                {
                    double result = fallTime(h);
                    if (result >= 0){
			cout << fixed << setprecision(2);
                        cout << "Время = " << result << " с\n";}
                }
                break;            
                case 0:
                cout << "Работа завершена.\n";
                break;
            default:
                cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);

    return 0;
}

