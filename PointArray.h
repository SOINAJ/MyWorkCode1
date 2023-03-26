#pragma once
#include"БъЭЗ.h"

class PointArray {
public:
	PointArray();
	PointArray(std::list<Point> datas);
	~PointArray();
	std::list<Point> getValue();
protected:
	std::list<Point> datas;
};

PointArray::PointArray() {

}
PointArray::~PointArray() {

}
PointArray::PointArray(std::list<Point> datas) {
	this->datas = datas;
}

std::list<Point> PointArray::getValue() {
	return this->datas;
}