#include "StackElement.h"

StackElement::StackElement(int value, int index) {
	m_value = value;
	this->setIndex(index);
}

StackElement::StackElement(StackElement& otherElement) {

		this->setValue(otherElement.getValue());
};

void StackElement::setValue(int value) { m_value = value; };

int StackElement::getValue() const { return m_value; };

void StackElement::setIndex(int index) { m_index = index; };