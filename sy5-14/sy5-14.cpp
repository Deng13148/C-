#include <iostream>
using namespace std;
class Car;//因为Boat类提前引用了Car类，故需前向引用说明
class Boat {
public:
	Boat(double newW){
		weight1 = newW;
	}//构造函数
	friend double getToalWeight(Boat &B, Car& C);//友元函数
private:
	double weight1;
};
class Car {
public:
	Car(double newW) {
		weight2 = newW;
	}
	friend double getToalWeight(Boat& B, Car& C);//友元函数
private:
	double weight2;
};
double getToalWeight(Boat &B,Car &C) {
	return (B.weight1 + C.weight2);
}
void main() {
	double boat, car;
	cout << "请输入Boat与Car的weight值：\n";
	cin >> boat >> car;
	Boat a(boat);
	Boat b = a;
	Car c(car);
	Car d = c;
	cout << getToalWeight(b, d) << endl;
}