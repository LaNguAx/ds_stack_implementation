#pragma once
class StackElement
{
	int m_value = -1;
	int m_index = -1;

public: 
	StackElement(int value, int index);
	
	StackElement(StackElement& otherElement);
	~StackElement() {};

	void setValue(int value);
	int getValue() const;
	void setIndex(int index);
	int getIndex() const { return m_index; };

};
