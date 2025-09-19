#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    std::cout << "Введите число n: ";
    std::cin >> n;

    std::cout << "Обратная последовательность: ";
    std::cout << n;

    int current = n;
    bool foundPrime = false;

    while (!foundPrime) {
        //разделяем на числа и складываем
        int temp = current;
        int digitSum = 0;
        while (temp > 0) {
            digitSum += temp % 10;
            temp /= 10;
        }

        //если текущее число равно предыдущему, то последовательность зациклилась и простого числа не существует
        if (current == digitSum) {
            std::cout << ", " << std::endl << "Простое число не найдено";
            break;
        }
        current = digitSum;

        std::cout << ", " << current;

        //проверка на простое число
        if (current <= 1) {
            foundPrime = false;
        }
        else if (current == 2) {
            foundPrime = true;
        }
        else if (current % 2 == 0) {
            foundPrime = false;
        }
        else {
            foundPrime = true;
            for (int i = 3; i*i <= current; i += 2) {
                if (current % i == 0) {
                    foundPrime = false;
                    break;
                }
            }
        }
    }
}
