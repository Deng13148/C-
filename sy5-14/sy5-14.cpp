#include <iostream>
using namespace std;
class Car;//��ΪBoat����ǰ������Car�࣬����ǰ������˵��
class Boat {
public:
	Boat(double newW){
		weight1 = newW;
	}//���캯��
	friend double getToalWeight(Boat &B, Car& C);//��Ԫ����
private:
	double weight1;
};
class Car {
public:
	Car(double newW) {
		weight2 = newW;
	}
	friend double getToalWeight(Boat& B, Car& C);//��Ԫ����
private:
	double weight2;
};
double getToalWeight(Boat &B,Car &C) {
	return (B.weight1 + C.weight2);
}
void main() {
	double boat, car;
	cout << "������Boat��Car��weightֵ��\n";
	cin >> boat >> car;
	Boat a(boat);
	Boat b = a;
	Car c(car);
	Car d = c;
	cout << getToalWeight(b, d) << endl;
}