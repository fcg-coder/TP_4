//
//  plenty.hpp
//  TP4
//
//  Created by mak on 15.05.2023.
//


/*

Задание 2
Создать параметризованный стек.Начальный размер стека вводится с клавиатуры,
заполняется случайными значениями.Перегрузить оператор = для присваивания
двух стеков друг другу, +для сложения двух стеков, == для сравнения двух стеков, -
для вычитания стеков.


*/



#ifndef plenty_hpp
#define plenty_hpp

#include <iostream>
using namespace std;

template <typename T>
class list
{
public:
	list();
	~list();
	explicit list(T num);
	void push(const T& num);
	void pop();
	
	bool is_empty();
	void out();
	
	/*
	* Перегрузить оператор = для присваивания
двух стеков друг другу, +для сложения двух стеков, == для сравнения двух стеков, -
для вычитания стеков.
*/
	void operator==(const list& L) const;
	void operator+(list<T>& other);
	void operator-(list<T>& other);
	void operator=(list<T>& other);

private:
	struct Node
	{
		T data;
		struct Node* next, * prev;
	};
	struct Node* head, * tail, * prev, * temp;
	int size;
};


#endif /* plenty_hpp */
