#include "Stack.h"

void Stack::push(StackElement& element) {

	StackElement** temp = new StackElement * [m_size + 1];
	temp[m_size] = new StackElement(element);
	temp[m_size]->setIndex(element.getIndex());

	// copy to temp
	for (int i = 0; i < m_size; i++) {
		temp[i] = new StackElement(*m_array[i]);
		temp[i]->setIndex(m_array[i]->getIndex());
	}
	// delete m_Array
	for (int i = 0; i < m_size; i++)
		delete m_array[i];
	delete[] m_array;
	m_array = nullptr;

	m_array = temp;
	++m_size;
}

bool Stack::pop() {

	if (this->isEmpty()) return false;
	

	StackElement** temp = new StackElement * [m_size - 1];

	for (int i = 0; i < m_size - 1; i++) {
		temp[i] = new StackElement(*m_array[i]);
		temp[i]->setIndex(m_array[i]->getIndex());
	}

	for (int i = 0; i < m_size; i++)
		delete m_array[i];
	delete[] m_array;

	m_array = temp;
	--m_size;
}

bool Stack::isEmpty() const {
	if (m_size == 0) return true;
	else
		return false;
}

StackElement* Stack::top() const {
	
	if (this->isEmpty()) return NULL;
	else 
		return this->m_array[m_size - 1];
}