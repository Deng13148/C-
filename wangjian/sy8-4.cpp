#include<iostream>
using namespace std;
class Counter {
public:
	Counter() {};
	Counter(int m) :i(m) {};
	Counter operator+(const Counter &a)const;
	void show() { cout << i << endl; };
private:
	int i = 0;
};
Counter Counter::operator+(const Counter &a)const {
	return Counter(i + a.i);
};
int main() {
	Counter a(1), b(2), c;
	c = a + b;
	c.show();
	return 0;
}