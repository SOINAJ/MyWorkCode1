//#include<iostream>
//#include<list>
#include"标头.h"
using namespace std;

bool compo(Point& i, Point& j) {
	return i.getValue() > j.getValue();
}

static const int g_ask_mm = 3;


int main() {

	Point p1(1.1);
	Point p2(2.2);
	Point p3(3.3);
	Point p4(4.4);
	Point p5(5.5);
	Point p6(6.6);
	Point p7(7.7);
	Point p8(8.8);
	Point p9(9.9);
	list<Point> list1;
	list<Point> list2;
	list<Point> list3;
	list1.push_back(p1);
	list1.push_back(p3);
	list1.push_back(p2);
	list2.push_back(p6);
	list2.push_back(p4);
	list2.push_back(p5);
	list3.push_back(p8);
	list3.push_back(p9);
	list3.push_back(p7);
	PointArray point1(list1);
	PointArray point2(list2);
	PointArray point3(list3);
	list<PointArray> point;
	point.push_back(point1);
	point.push_back(point2);
	point.push_back(point3);

	Mystruct my(point);

	//list<PointArray>::iterator v = my.getValue().begin();

	//list<PointArray>::iterator v;
	//list<Point> p11 = {11.0};
	//list<Point> point123 = v->getValue();
	//point123.push_back(p1);
	//v->getValue().push_back(point1);
	//cout << typeid(p11).name() << " :\n " << typeid(v->getValue()).name() << endl;
	//list<list<int>>l1;             //定义外层list 
	//list<int>row;                  //定义内层list
	//list<int>::iterator p1;        //定义迭代器 用于遍历内层元素 
	//list<list<int>>::iterator p2;  //定义迭代器 用于遍历外层元素 
	//cout << "请输入行数：";
	//int n;   //行数 

	//for (p2 = l1.begin(); p2 != l1.end(); p2++) {
	//	list<int> ls = *p2;
	//	//内层迭代器 遍历list<int> row
	//	for (p1 = ls.begin(); p1 != ls.end(); p1++) {
	//		cout << *p1 << " ";
	//	}
	//	cout << endl;
	//}


	/*while (v != my.getValue().end()) {
		

		cout << "value is : " << v << endl;
		v++;
	}*/

	return 0;
}

//list<PointArray> sort_list(list<PointArray> datas);



//bool cmp(int x, int y) {
//	return x  > y ;
//}

//struct Point {
//	Point(double x){
//		this->x = x;
//	}
//	double getValue() {
//		return this->x;
//	}
//	double x;
//};
//
//struct PointArray
//{
//	std::list<Point> datas;
//};
//
//struct MyStruct
//{
//	double min;
//	std::list<PointArray> datas;
//};



//int main() {
//	int A[8] = { 1,2,3,4,8,7,6,5 };
//	list<Point> list1;
//	//list1.push_back(Point(2.2));
//	list1.push_back(Point(1.1));
//	list1.push_back(Point(2.2));
//	list1.push_back(Point(3.3));
//	list1.push_back(Point(4.0));
//	list1.push_back(Point(8.0));
//	list1.push_back(Point(7.0));
//	list1.push_back(Point(6.0));
//	list1.push_back(Point(5.0));
//
//	for (Point ato : list1)
//	{
//		cout << ato.getValue() << " : ";
//	}
//	cout << endl;
//
//	list1.sort(compo);
//	
//
//	for (Point ato : list1)
//	{
//		cout << ato.getValue() << " : ";
//	}
//	cout << endl;
//	
//	return 0;
//}
//int num[10] = { 65,59,96,13,21,80,72,33,44,99 };
//sort(num, num + 10,cmp);
//for (int i = 0; i < 10; i++) {
//	cout << num[i] << " ";
//}//输出结果：59 99 96 65 44 13 33 72 21 80

//list<PointArray> sort_list(list<PointArray> datas) {
//	for (int i = 0; i < datas.size() - 1; i++)
//	{
//		for (int j = i + 1; j < datas.size() - 1; j++)
//		{
//			//PointArray* pointarr = datas.get_allocator();
//		}
//	}
//	return datas;
//}


//struct Point {
//	double x;
//};
//
//struct PointArray {
//	std::list<Point>datas;
//};
//
//struct MyStruct {
//	std::list<PointArray>datas;
//	double min, max;
//};

