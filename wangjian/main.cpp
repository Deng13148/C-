#include <iostream>
using namespace std;
const double PI = 3.1415926535;
class base {
public:
	virtual double area() { return 0; };
};
class sanjiaoxing:public base{
public:
	sanjiaoxing(double di=0, double gao=0):a(di),b(gao) {};
	virtual double area() { return a * b / 2; };
private:
	double a, b;
};
class zhengfangxing:public base{
public:
	zhengfangxing(double a=0):a(a) {};
	virtual double area() { return a * a; };
private:
	double a;
};
class yuanxing:public base{
public:
	yuanxing(double r=0):r(r) {};
	virtual double area() { return PI * r * r; };
private:
	double r;
};
int main() {
	base *b;
	sanjiaoxing s(2, 2);
	zhengfangxing z(3);
	yuanxing y(4);
	b = &s;
	cout << "三角形面积：" << b->area() << endl;
	b = &z;
	cout << "正方形面积：" << b->area() << endl;
	b = &y;
	cout << "圆形面积：" << b->area() << endl;
	return 0;
}