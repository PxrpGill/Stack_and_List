#include "List1.2.h"

void first_massive_show() {
	cout << "�������� ������������� ������." << endl <<
		"����� ������� �������� ������ � ������� ��������, ������� ������ �������� ��������" << endl << endl;

	List_ my_massive;
	string input = "";
	int tmp = 0;

	cout << "���� ��������� (��� ���������� ����� ������� '.':" << endl;

	//���� ��������� � ���������� �� � ������ ����� ����� add_element
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
		cout << "������ ����!";

	else {
		cout << "��������� ������: ";
		my_massive.print();

		cout << endl;
		float average = my_massive.get_average();
		cout << "������� ����� ������: " << average;

		my_massive.delete_elements(average);
		cout << endl;
		cout << "������� ������������ ������: ";
		my_massive.print();
	}
}