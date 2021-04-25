#include <iostream>
#include <string>
using namespace std;
class Dog
{
public:
	void setDog(string new_name = "default", int new_age = 1, int new_weight = 1);
	void showDog();
private:
	int age, weight;
	string name;
};
void Dog::setDog(string new_name, int new_age, int new_weight)
{
	name = new_name;
	age = new_age;
	weight = new_weight;
};
void Dog::showDog()
{
	cout << "这只狗的名字为：" << name << endl;
	cout << "这只狗的年龄为：" << age << "岁" << endl;
	cout << "这只狗的体重为：" << weight << "千克" << endl;
};

int main()
{
	Dog mydog1;
	mydog1.setDog("Tom", 7, 35);
	mydog1.showDog();
	Dog mydog2;
	mydog2.setDog("Jack", 5, 20);
	mydog2.showDog();
}
