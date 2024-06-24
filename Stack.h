#pragma once
#include <iostream>
#include "StackElement.h"

class Stack {

	StackElement** m_array = nullptr;
	int m_size = 0;

public: 

	Stack() {};
	// cctor not needed..
	~Stack() {};

	void push(StackElement& element);
	bool pop();
	bool isEmpty() const;
	StackElement* top() const;
};

