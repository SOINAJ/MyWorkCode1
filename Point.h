#pragma once
#include"БъЭЗ.h"

class Point {
public:
	Point();
	Point(double x);
	~Point();
	double getValue();
protected:
	double x;
};

Point::Point(double x) {
	this->x = x;
	//cout << "Point x = : " << this->x << endl;
}

Point::~Point() {

}
Point::Point() {

}

double Point::getValue() {
	return this->x;
}