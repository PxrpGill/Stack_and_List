#pragma once
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void second_chain_show();

struct PNode {
	PNode* next;
	int value;

	PNode(int value_) : value(value_), next(nullptr) {} //конструктор
};

struct TStack {
	PNode* top;

	TStack() : top(nullptr) {}//конструктор

	//Проверка на пустоту стека
	bool StackIsEmpty() {
		if (top == nullptr)
			return true;

		else
			return false;
	}

	//Метод, который возвращает вершину стека
	int Peek() {
		return top->value;
	}

	//Добавление элемента
	void push_element(int value_) {
		PNode* element = new PNode(value_);
		element->next = top;
		element->value = value_;
		top = element;
	}

	//Вывод стека
	void print() {
		if (StackIsEmpty()) {
			cout << "Cтек пуст!" << endl;
			return;
		}

		PNode* element = top;
		
		while (element) {
			cout << element->value << " ";
			element = element->next;
		}
	}

	void pop_element_from_stack(int element_to_del) {
		if (top->value == element_to_del) {
			top = top->next;
		}

		PNode* slow = top;
		PNode* fast = top->next;
		while (fast && fast->value != element_to_del) {
			fast = fast->next;
			slow = slow->next;
		}

		if (!fast)
			return;

		slow->next = fast->next;
		delete fast;
	}
};
