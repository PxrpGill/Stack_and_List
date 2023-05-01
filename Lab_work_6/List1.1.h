#pragma once
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void first_chain_show();

struct Node {
	int value;
	Node* next;

	Node(int value_) : value(value_), next(nullptr){} //конструктор
};

struct List {
	Node* first;
	Node* last;

	List() : first(nullptr), last(nullptr){} //конструктор

	//Метод, который проверяет на пустоту списка
	bool is_empty() {
		if (first == nullptr)
			return true;

		return false;
	}

	//Метод, который добавляет значение пользователя в конец списка
	void push_back(int value_) {
		Node* element = new Node(value_);

		if (is_empty()) {
			first = element;
			last = element;
			return;
			//cout << "Последний и первый элемент = " << element << endl;
		}

		last->next = element;
		last = element;
	}
	
	//Метод для вывода списка
	void print() {
		if (is_empty()) {
			cout << "Список пуст!" << endl;
			return;
		}

		Node* element = first;

		//пока element не станет пустым, будет выводится его значение
		while (element) {
			cout << element->value << " ";
			element = element->next;
		}
		cout << endl;
	}

	//Метод, который возвращает среднее значение
	float get_average_value() {
		float summ = 0;
		float count_element = 0;
		Node* element = first;

		while (element) {
			summ += element->value;
			count_element++;
			element = element->next;
		}

		float average = summ / count_element;
		return average;
	}

	//Удаление последнего элемента
	void remove_last_element() {
		if (is_empty())
			return;

		if (first == last)
			remove_first_element();
		
		Node* element = first;
		while (element->next != last)
			element = element->next;

		element->next = nullptr;
		delete last;
		last = element;
	}

	//Удаление первого элемента
	void remove_first_element() {
		if (is_empty())
			return;

		Node* element = first;
		first = element->next;
		delete element;
	}

	//Удаление элемента из списка
	void pop_element_from_list(float average) {
		if (is_empty())
			return;

		if (first->value < average)
			remove_first_element();


		else if (last->value < average)
			remove_last_element();

		Node* slow = first;
		Node* fast = first->next;
		while (fast && fast->value >= average) {
			fast = fast->next;
			slow = slow->next;
		}

		if (!fast) 
			return;

		slow->next = fast->next;
		delete fast;

		Node* element = first;
		int flag = 0;
		while (element) {
			if (element->value < average)
				flag = 1;
			element = element->next;
		}

		if (flag == 1)
			pop_element_from_list(average);

		else
			return;
	}
};
