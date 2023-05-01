#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <algorithm>

using namespace std;

void second_massive_show();

struct Stack {
	int size;
	int* massive;

	Stack() { size = 0; massive = NULL; }//�����������
	~Stack() { //����������, ����� ��� ���� ����� ���������� ������ ��� ������, ����� ���������� ������ ������
		if (massive) delete massive;
	}

	//����� ��� ���������� �������� � ����
	void add_element(int element) {
		int* tmp = new int[size + 1];
		memcpy(tmp, massive, size * sizeof(int));
		tmp[size++] = element;
		delete[] massive;
		massive = tmp;
	}

	//����� �����
	void print() {
		for (int i = 0; i < size; i++)
			cout << massive[i] << " ";
	}

	//�������������� �������
	void reverse_massive() {
		reverse(massive, massive + size);
	}

	//�����, ������� ���������� ������� �����
	int Peek() {
		return massive[0];
	}

	//�������� �� ������� �����
	bool StackIsEmpty() {
		if (size == 0)
			return true;
		else
			return false;
	}

	//�������� �������� �� �����
	void pop_element_from_stack(int element_to_del) {
		int count_of_nice_elements = 0;

		for (int i = 0; i < size; i++)
			if (massive[i] != element_to_del)
				count_of_nice_elements++;

		int* tmp_mas = new int[count_of_nice_elements];
		int i = 0;
		int j = 0;
		int flag = count_of_nice_elements;

		while (flag > 0) {
			if (massive[i] != element_to_del) {
				tmp_mas[j] = massive[i];
				j++;
				flag -= 1;
			}
			i++;
		}
		delete[] massive;
		size = count_of_nice_elements;
		massive = tmp_mas;
	}
};