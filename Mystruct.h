#pragma once
#include"БъЭЗ.h"

class Mystruct {
public:
	Mystruct();
	Mystruct(std::list<PointArray> datas);
	~Mystruct();
	std::list<PointArray> getValue();

protected:
	double min;
	std::list<PointArray> datas;
};

Mystruct::Mystruct() {

}
Mystruct::~Mystruct() {

}
Mystruct::Mystruct(std::list<PointArray> datas) {
	this->datas = datas;
}

std::list<PointArray> Mystruct::getValue() {
	return this->datas;
}