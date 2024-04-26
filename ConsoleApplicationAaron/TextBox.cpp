#include "TextBox.h"

TextBox::TextBox(const string& value) : value{value}
{
}

string TextBox::getValue()
{
	return value;
}

void TextBox::setValue(const string& value)
{
	this->value = value;
}