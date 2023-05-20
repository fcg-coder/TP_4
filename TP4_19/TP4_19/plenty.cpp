//
//  plenty.cpp
//  TP4
//
//  Created by mak on 15.05.2023.
//

#include "plenty.hpp"
#include <iostream>
using namespace std;




template <typename T> 
list <T>::list(T num)
{
	struct Node* temp = new Node;
	head = tail = temp;
	temp->data = num;
	size = 1;
}


template <typename T>
list <T>::list()
{
	head = tail = NULL;
	size = 0;
}


template <typename T>
list <T> ::~list()
{
	Node* tp;
	while (size != 0)
	{
		tp = head->next;
		delete head;
		head = tp;
		size -= 1;
	}
}
template <typename T>
bool list<T>::is_empty()
{
	return head == NULL;
}

template <typename T>
void list<T>::out()
{
	struct Node* temp = head;
	int i = size;
	while (i != 0)
	{
		std::cout << temp->data << "\t";
		temp = temp->next;
		i -= 1;
	}
	std::cout << "\n";
}

template <typename T>
void list <T>::push(const T& num)
{
	struct Node* temp = new Node;
	size += 1;
	temp->data = num;
	if (head != NULL)
	{
		temp->next = head;
		head = temp;
	}
	else
	{
		temp->next = NULL;
		head = tail = temp;
	}
}
template <typename T>
void list <T>::pop()
{
	if (head != NULL)
	{
		Node* temp = head->next;
		delete head;
		head = temp;
		size -= 1;
	}
}



//ПЕРЕГРУЗКА МЕТОДОВ


	/*
	* Перегрузить оператор = для присваивания
двух стеков друг другу, +для сложения двух стеков, == для сравнения двух стеков, -
для вычитания стеков.
*/
