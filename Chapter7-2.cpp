#include <iostream>
using namespace std;
class Pet
{
protected: // ����ɷ��ʣ�����Ϊ˽�� 
	int age;
	char *name;
public:
	Pet(int aage, char *aname)
	{
		this->age = aage;
		this->name = aname;
	}
	void Speak() {
		cout << "speak" << endl;
	}
};

class Cat : public Pet//����Ĭ��˽�У���û��public��Ϊ˽�м̳У�ά���﷨�����ԣ������๫�к����������л��Ϊ˽�� 
{
	int type;
public:
	Cat(int aage, char *aname, int atype) : Pet(aage, aname), type(atype)//���๹�죬��Ա���� 
	//����˵����Ѱ�Ҹ���Ĭ�Ϲ��� 
	{
		this->type = atype;
	}
	void Speak() { //redefination
		Pet::Speak(); //JAVA: super.Speak();
		cout << "miao" << endl;
	}
};

class Test{
public:
	int i;
	int j;
public:
	Test(int a) : j(a), i(j) //ִ��˳��Ϊ��������˳�� 
	{
	}
};

class Base1{
public:
	void f() {
	}
	void h() {
	}
};
class Base2{
public:
	void h() {
	}
	void f() {
	}
};
/*class Derived : public Base1, public Base2 { //���ؼ̳� 
};*/ 
class Derived : public Base1 { //��ܶ��ؼ̳� 
	Base2 b2;
public:
	void h() {
		b2.h();
	}
};

int main()
{
	/*Cat c(1, "dudu", 3);
	c.Speak();*/
	/*Test t(3);
	cout << t.i << " " << t.j << endl;*/
	Derived d;
	d.f();
	d.h();
	return 0;
}

