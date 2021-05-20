#include <iostream>
using namespace std;
const double PI = 3.1415926535;
class Shape {
public:
	double feature(double x, double y) { 
		const double s[2] = {x,y};
		cout << "调用Shape的矩形特征，其中s[2]=" << s[2] << endl;
		return s[2]; 
	};
	double feature(double r) { 
		cout << "调用Shape的圆形特征，其中r=" << r << endl;
		return r; 
	};
private:

};
class Rectangle :public Shape {
public:
	double GetArea();
private:
	double x, y;
};
class Square :public Rectangle {
public:
	void show() {
		cout << "调用了Squre：测试" << endl;
	};
private:

};
class Circle :public Shape {
public:
	double GetArea();
private:
	double r;
};
double Rectangle::GetArea() {
	double s= feature(x,y);
	cout << "调用Rectangle，其中s=" << s << endl;
	return s;
}
double Circle::GetArea() {
	cout << "调用Circle，其中面积：" << PI * feature(r) * feature(r) << endl;
	return PI*feature(r)*feature(r);
}
int main() {
	Shape shape1;
	Rectangle rectangle1;
	Circle circle1;
	Square square1;
	shape1.feature(2, 2);
	shape1.feature(3);
	rectangle1.GetArea();
	circle1.GetArea();
	square1.show();
	return 0;
}