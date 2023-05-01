#include "Stack1.2.h"

void second_massive_show() {
	cout << "�������� ������������� �����." <<
		"��������� ���� � ������� ������� StackIsEmpty() � Peek()" << endl << endl;
	Stack my_stack;
	string input = "";
	int tmp = 0;

	cout << "���� ��������� (��� ���������� ����� ������� '.':" << endl;

	//���� ��������� � ���������� �� � ���� ����� ����� add_element
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
		cout << "���� ����!" << endl;

	else {
		cout << "������� ����: ";
		my_stack.reverse_massive();
		my_stack.print();

		int peek = my_stack.Peek();
		cout << endl << "�������� ������� �����: " << peek;
		cout << endl << endl;

		cout << "����� ������� �������?: ";
		int element_to_del;
		cin >> element_to_del;

		cout << endl;
		my_stack.pop_element_from_stack(element_to_del);
		cout << "������� ����: ";
		my_stack.print();

		peek = my_stack.Peek();
		cout << endl << "�������� ������� �����: " << peek;
		cout << endl << endl;


	}
}