#include <iostream>
#include <ctime>
#include <cmath>

int main() {
    int sum = 0;
    int xi;
    int yi;
    int points;

    srand(time(0)); // Инициализация генератора случайных чисел

    // Спрашиваем значения и считаем поинты
    for (int i = 1; i <= 5; i++) {
        std::cout << "Введите координаты выстрела: ";
        std::cin >> xi >> yi;
        xi = xi + (std::rand() % 11 - 5);
        yi = yi + (std::rand() % 11 - 5);
        std::cout << "Выстрел " << i << " = (" << xi << "," << yi << ")\n";

        double distance = std::sqrt(xi * xi + yi * yi);
        if (distance < 1) {
            points = 5;
        } else {
            points = 5 - std::floor(distance);
        }

        if (points >= 0) {
            std::cout << "Кол-во очков за этот выстрел - " << points;
            sum = sum + points;
        } else {
            std::cout << "Кол-во очков за этот выстрел - 0 ";
        }
    }

    // Смотрим лузер или красавчик
    std::cout << "\nСумма очков: " << sum << std::endl;
    if (sum < 10) {
        std::cout << "Лузер (лошара)";
    } else {
        std::cout << "Выиграл (красавчик)";
    }
}
