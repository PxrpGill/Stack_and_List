#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>

using namespace std;

void first_massive_show();

struct List_ {
	int size;
	int* array;
	List_() { size = 0; array = NULL; }//�����������
	~List_() {//����������, ����� ��� ���� ����� ���������� ������ ��� ������, ����� ���������� ������ ������
		if (array) delete array;
	}

	//���������� �������� � ������
	void add_element(int element) {
		int* tmp = new int[size + 1];
		memcpy(tmp, array, size * sizeof(int));
		tmp[size++] = element;
		delete[] array;
		array = tmp;
	}

	//�������� ������ �� �������
	bool is_empty() {
		if (size == 0)
			return true;

		else
			return false;
	}

	//����� ������
	void print() {
		for (int i = 0; i < size; i++)
			cout << array[i] << " ";
	}

	//�����, ������� ���������� ������� ��������
	float get_average() {
		float summ = 0;
		for (int i = 0; i < size; i++)
			summ += array[i];

		float average = summ / float(size);
		return average;
	}

	//�������� ��������
	void delete_elements(float average) {
		int size_nice_elements = 0;

		for (int i = 0; i < size; i++) {
			if (array[i] >= average) 
				size_nice_elements++;
		}

		int* tmp_mas = new int[size_nice_elements];
		int i = 0;
		int j = 0;
		int flag = size_nice_elements;
		while (flag > 0) {
			if (array[i] >= average) {
				tmp_mas[j] = array[i];
				j++;
				flag -= 1;
			}
			i++;
		}
		delete[] array;
		size = size_nice_elements;
		array = tmp_mas;
	}
};