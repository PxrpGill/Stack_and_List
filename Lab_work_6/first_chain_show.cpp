#include "List1.1.h"

void first_chain_show() {
	cout << "������� 1.1:" << endl << "������ ���������� ������." << endl
		<< "����� ������� �������� ������ � ������� ��������, ������� ������ �������� ��������" << endl;
	cout << "���� ��������� (��� ���������� ����� ������� '.':" << endl;
	List my_list;
	string input = "";
	float element;

	//���� ��������� ������ � �������� �� � ����� push_back
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
		cout << "������ ����!" << endl;

	else {
		cout << "������� ������: ";
		my_list.print();

		cout << endl;

		float average = my_list.get_average_value();
		cout << "������� �������� ������: " << average << endl;

		my_list.pop_element_from_list(average);
		my_list.print();
	}
}