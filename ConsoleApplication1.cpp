

#include <iostream>
using namespace std;
int add(int a, int b)
{
	return a + b;
}
int subtract(int a, int b)
{
	return a - b;
}
int umnozenie(int a, int b)
{
	return a * b;
}

int main()
{
	setlocale(LC_ALL, "RU");

	cout << "==Калькулятор v1.2" << endl;

	cout << "Доступные операции: +,-" << endl;

	int a, b;
	char op;

	cout << "Введите выражение";
	cin >> a >> op >> b;

	if (op == '+')
	{
		cout << "Результат: " << add(a, b) << endl;

	}
	else if (op == '-')
	{
		cout << "Результат: " << subtract(a, b) << endl;
	}
	else if (op == '-')
	{
		cout << "Результат: " << umnozenie(a, b) << endl;
	}
	else
	{
		cout << "Ошибка" << endl;
	}
	return 0;

}

