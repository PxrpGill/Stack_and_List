#include "Stack1.1.h"

void second_chain_show() {
	cout << "������� 2.1:" << endl << "������ ���������� �����." << endl
		<< "��������� ���� � ������� ������� StackIsEmpty() � Peek()" << endl << endl;
	cout << "���� ��������� (��� ���������� ����� ������� '.':" << endl;
	TStack my_stack;

	string input = "";
	int element;

	//���� ��������� � ���������� �� � ���� ����� ����� push_element
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
		cout << "���� ����!" << endl;

	else {
		cout << endl << "������� ����: ";
		my_stack.print();

		cout << endl << endl;

		cout << "�������� ����� �������� ������� �� ���������: ";
		int peek_top = my_stack.Peek();
		cout << peek_top;

		cout << endl << endl;

		cout << "����� ������� �������?: ";
		int element_to_del;
		cin >> element_to_del;
		cout << endl;

		my_stack.pop_element_from_stack(element_to_del);
		cout << endl;
		my_stack.print();
		cout << endl;
		cout << "�������� ����� �������� ������� �� ���������: ";
		peek_top = my_stack.Peek();
		cout << peek_top;
	}
}