#include "Rectangle.h"
#include <iostream>

using namespace std;


//Rectangle::Rectangle(const Rectangle& source)
//{
//	cout << "Rectangle copied" << endl;
//	this->width = source.width;
//	this->height = source.height;
//	this->color = source.color;
//}

Rectangle::Rectangle(int width, int height) : width{width}, height{ height }
{
	objectsCount++;
	cout << "Constructing a Rectangle" << endl;
	setWidth(width);
	setHeight(height);
}

Rectangle::Rectangle(int width, int height, const string& color) : Rectangle(width, height)
{
	cout << "Constructing a rectangle with color" << endl;
	this->color = color;
}

//Rectangle::~Rectangle()
//{
//	cout << "Destructor called" << endl;
//}

void Rectangle::draw() const {
	cout << "Drawing a rectangle" << endl;
	cout << "Dimensions: " << width << ", " << height << endl;
}

int Rectangle::getArea() const
{
	return width * height;
}

int Rectangle::getWidth() const
{
	return width;
}

void Rectangle::setWidth(int width)
{
	if (width < 0)
		throw invalid_argument("The width cannot be negative");
	if (width > 100)
		throw out_of_range("The width cannot be greater than 100");
	this->width = width;
}

int Rectangle::getHeight() const
{
	return height;
}

void Rectangle::setHeight(int height)
{
	if (height < 0)
		throw invalid_argument("height");
	this->height = height;
}

int Rectangle::getObjectCount()
{
	return objectsCount++;
}

int Rectangle::objectsCount = 0;