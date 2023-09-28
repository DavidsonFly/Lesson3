// Counter.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Counter
{
private:
    int value;

public:
    
    Counter():value(1){}
   
    Counter(int initialValue):value(initialValue){}
   

    void increment()
    {
        value++;
    }
    void decrement()
    {
        value--;
    }

    int getValue()
    {
        return value;
    }
};

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int initialValue;

    std::cout << "Если хотите установить первоначальное значение числа, нажмите 'y' или 'Y' для продолжения" << std::endl;
    char choice;
    std::cin >> choice;
    Counter counter;
    if (choice == 'y' || choice == 'Y')
    {
        std::cout << "Введите число:" << std::endl;
        std::cin >> initialValue;
        counter = Counter(initialValue);
    }
    

    while (true)
    {
        std::cout << "Введите одну из команд: (+/-/=/x):" << std::endl;
        char command;
        std::cin >> command;

        switch (command)
        {
        case '+':
            counter.increment();
            break;
        case '-':
            counter.decrement();
        case '=':
            std::cout << "Текущее значение:" << " " << counter.getValue() << std::endl;
            continue;
        case 'x':
            return 0;
        default:
            std::cout << "Введена неправильная команда. Введите пожалуйста(+/-/=/x):" << std::endl;
        }
    }

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
