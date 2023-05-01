#include "Stack1.2.h"

void second_massive_show() {
	cout << "Сплошное представление стека." <<
		"Заполнить стек и описать функции StackIsEmpty() и Peek()" << endl << endl;
	Stack my_stack;
	string input = "";
	int tmp = 0;

	cout << "Ввод элементов (для завершения ввода введите '.':" << endl;

	//Ввод элементов и добавление их в стек через метод add_element
	while (input != ".") {
		cin >> input;

		if (input != ".") {
			tmp = stoi(input);
			my_stack.add_element(tmp);
		}

		else
			break;
	}
	if (my_stack.StackIsEmpty())
		cout << "Стек пуст!" << endl;

	else {
		cout << "Получен стек: ";
		my_stack.reverse_massive();
		my_stack.print();

		int peek = my_stack.Peek();
		cout << endl << "Значение вершины стека: " << peek;
		cout << endl << endl;

		cout << "Какой элемент удалить?: ";
		int element_to_del;
		cin >> element_to_del;

		cout << endl;
		my_stack.pop_element_from_stack(element_to_del);
		cout << "Получен стек: ";
		my_stack.print();

		peek = my_stack.Peek();
		cout << endl << "Значение вершины стека: " << peek;
		cout << endl << endl;


	}
}