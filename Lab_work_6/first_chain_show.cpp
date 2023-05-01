#include "List1.1.h"

void first_chain_show() {
	cout << "Задание 1.1:" << endl << "Цепная реализация списка." << endl
		<< "Найти среднее значение списка и удалить элементы, которые меньше среднего значения" << endl;
	cout << "Ввод элементов (для завершения ввода введите '.':" << endl;
	List my_list;
	string input = "";
	float element;

	//Ввод элементов списка и передача их в метод push_back
	while (input != ".") {
		cin >> input;

		if (input != ".") {
			element = stoi(input);
			my_list.push_back(element);
		}

		else
			break;
	}
	
	if (my_list.is_empty())
		cout << "Список пуст!" << endl;

	else {
		cout << "Получен список: ";
		my_list.print();

		cout << endl;

		float average = my_list.get_average_value();
		cout << "Среднее значение списка: " << average << endl;

		my_list.pop_element_from_list(average);
		my_list.print();
	}
}