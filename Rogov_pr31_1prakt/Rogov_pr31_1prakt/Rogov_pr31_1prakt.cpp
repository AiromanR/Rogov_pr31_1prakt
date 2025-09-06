// Rogov_pr31_1prakt.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    //Вводим число n
    long long n;
    std::cin >> n;
    long long temp = n;
    std::cout << n;
    
    long long count = 0;
    long long sum = 0;
    while (n>10) {
        count = 0;
        sum = 0;
        std::cout << "az";
        //Считаем количество цифр
        while (temp > 0) {
            temp = temp / 10;
            count++;
        }

        //Считаем сумму цифр
        for (int i = 0; i < count; i++) {
            sum += n % 10;
            n = n / 10;
        }
        std::cout << "\n";
        std::cout << sum;



        //Проверка на простое число
        if (sum <= 1) {
            break;
            std::cout << " - prostoe chislo";
        }
        else if (sum == 2) {
            std::cout << " - prostoe chislo";
            break;
        }
        else if (sum % 2 == 0) {
            std::cout << " - Ne prostoe chislo";
            continue;
        }
        else 
        {
            bool prost = true;
            for (int i = 3; i * i <= sum; i += 2) {
                if (sum % i == 0) {
                    prost = false;
                    std::cout << " - Ne prostoe chislo";
                    continue;
                }
            }
            if (prost) {
                std::cout << " - prostoe chislo";
                break;
            }
        }
        
        n = sum;
        temp = n;
    }
}