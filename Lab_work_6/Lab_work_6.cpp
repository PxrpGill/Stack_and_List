#include "List1.1.h"
#include "List1.2.h"
#include "Stack1.1.h"
#include "Stack1.2.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Список заданий: " << endl << endl;

	cout << "1. Цепная реализация списка." << endl <<
		"Найти среднее значение списка и удалить элементы, которые меньше среднего значения" << endl << endl;

	cout << "2. Сплошное представление списка." << endl <<
		"Найти среднее значение списка и удалить элементы, которые меньше среднего значения" << endl << endl;

	cout << "3. Цепная реализация стека." << endl <<
		"Заполнить стек и описать функции StackIsEmpty() и Peek()" << endl << endl;

	cout << "4. Сплошное представление стека." <<
		"Заполнить стек и описать функции StackIsEmpty() и Peek()" << endl << endl;

	cout << endl;

	cout << "Введите номер задания: ";

	int choice = 0;
	cin >> choice;

	if(choice == 1)
		first_chain_show();

	else if(choice == 2)
		first_massive_show();

	else if(choice == 3)
		second_chain_show();

	else if (choice == 4)
		second_massive_show();

	else {
		cout << "Неизвестный символ!" << endl << endl;
		main();
	}

}