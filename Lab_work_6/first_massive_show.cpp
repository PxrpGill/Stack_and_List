#include "List1.2.h"

void first_massive_show() {
	cout << "Сплошное представление списка." << endl <<
		"Найти среднее значение списка и удалить элементы, которые меньше среднего значения" << endl << endl;

	List_ my_massive;
	string input = "";
	int tmp = 0;

	cout << "Ввод элементов (для завершения ввода введите '.':" << endl;

	//Ввод элементов и добавление их в список через метод add_element
	while (input != ".") {
		cin >> input;

		if (input != ".") {
			tmp = stoi(input);
			my_massive.add_element(tmp);
		}

		else
			break;
	}

	if (my_massive.is_empty())
		cout << "Список пуст!";

	else {
		cout << "Получился список: ";
		my_massive.print();

		cout << endl;
		float average = my_massive.get_average();
		cout << "Среднее число списка: " << average;

		my_massive.delete_elements(average);
		cout << endl;
		cout << "Получим обработанный список: ";
		my_massive.print();
	}
}