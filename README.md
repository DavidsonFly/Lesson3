## Здесь предоставлены коды двух заданий по теме "классы".

# Задание 1. Калькулятор.
#include <iostream>
#include <string>

class Calculator
{
private:
	double num1;
	double num2;

public:

	double add()
	{
		return num1 + num2;
	}

	double multiply()
	{
		return num1 * num2;
	}

	double substract_1_2()
	{
		return num1 - num2;
	}

	double substract_2_1()
	{
		return num2 - num1;
	}

	double divide_1_2()
	{
		return num1 / num2;
	}

	double didvide_2_1()
	{
		return num2 / num1;
	}


	bool set_num1(double num1)
	{
		if (num1 != 0) {
			this->num1 = num1;
			return true;
		}
		else
		{
			return false;
		}
	}

	bool set_num2(double num2)
	{
		if (num2 != 0)
		{
			this->num2 = num2;
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	Calculator calc;

	while (true)
	{
		double input1, input2;
		std::cout << "Enter num1:" << std::endl;
		std::cin >> input1;
		if (!calc.set_num1(input1))
		{
			std::cout << "The value cannot be zero. Please enter non zero value" << std::endl;
			continue;
		}

		std::cout << "Enter num2:" << std::endl;
		std::cin >> input2;
		if (!calc.set_num2(input2))
		{
			std::cout << "The value cannot be zero. Please enter non zero value" << std::endl;
			continue;
		}

		std::cout << "num1 + num2 = :" << calc.add() << std::endl;
		std::cout << "num1 - num2 = :" << calc.substract_1_2() << std::endl;
		std::cout << "num2 - num1 = :" << calc.substract_2_1() << std::endl;
		std::cout << "num1 * num2 = :" << calc.multiply() << std::endl;

		if (input2 != 0)
		{
			std::cout << "num1/num2 = :" << calc.divide_1_2() << std::endl;
		}
		else {
			std::cout << "Cannot didvide by zero..." << std::endl;
		}

		if (input1 != 0)
		{
			std::cout << "num2/num1 = :" << calc.didvide_2_1() << std::endl;
		}
		else
		{
			std::cout << "Cannot didvide by zero..." << std::endl;
		}

		char choice;

		std::cout << "Could you continue? Please tab y/n..." << std::endl;
		std::cin >> choice;

		if (choice == 'y' || choice == 'Y')
		{
			continue;
		}
		else
		{
			break;
		}
		
	}

	return 0;
}
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
# Задание 2. Cчетчик.
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