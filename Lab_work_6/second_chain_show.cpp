#include "Stack1.1.h"

void second_chain_show() {
	cout << "Задание 2.1:" << endl << "Цепная реализация стека." << endl
		<< "Заполнить стек и описать функции StackIsEmpty() и Peek()" << endl << endl;
	cout << "Ввод элементов (для завершения ввода введите '.':" << endl;
	TStack my_stack;

	string input = "";
	int element;

	//Ввод элементов и добавление их в стек через метод push_element
	while (input != ".") {
		cin >> input;

		if (input != ".") {
			element = stoi(input);
			my_stack.push_element(element);
		}

		else
			break;
	}

	if (my_stack.StackIsEmpty())
		cout << "Стек пуст!" << endl;

	else {
		cout << endl << "Получен стек: ";
		my_stack.print();

		cout << endl << endl;

		cout << "Вершиной стека является элемент со значением: ";
		int peek_top = my_stack.Peek();
		cout << peek_top;

		cout << endl << endl;

		cout << "Какой элемент удалить?: ";
		int element_to_del;
		cin >> element_to_del;
		cout << endl;

		my_stack.pop_element_from_stack(element_to_del);
		cout << endl;
		my_stack.print();
		cout << endl;
		cout << "Вершиной стека является элемент со значением: ";
		peek_top = my_stack.Peek();
		cout << peek_top;
	}
}