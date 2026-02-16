

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

int main()
{
	cout << "==Калькулятор v1.0" << endl;
	cout << "Доступные операции: +,-" << endl;

	int a, b;
	char op;

	cout << "Введите выражение (например 5 + 3): ";
	cin >> a >> op >> b;

	if (op == '+')
	{
		cout << "Результат: " << add(a, b) << endl;

	}
	else if (op == '-')
	{
		cout << "Результат: " << subtract(a, b) << endl;
	}
	else if (op == '^')
	{
		cout << "Результат: " << pow(a,b) << endl;
	}
	else if (op == '%')
	{
		cout << "Результат: " << a % b << endl;
	}
	else
	{
		cout << "Ошибка" << endl;
	}
	return 0;

}

