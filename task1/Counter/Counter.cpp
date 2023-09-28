// Counter.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
