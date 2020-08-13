#include <iostream>
using namespace std;
class Pet {
protected:
	int age;
	char *name;
public:
	//�麯����v-table(һ����һ��)���洢���� 
	/*virtual void Speak() { //��1��virtual�麯�� 
		cout << "speak" << endl;
	}*/
	virtual void Speak() = 0;//pure(=0) virtual function
	//���һ�����д��麯������ô�����Ϊ�����ࣨ����ʵ������ 
	/*
	1. reuse, upcasting
	2. ���죬�������ʵ�ָú��� 
	3. ���� 
	*/
};
/*
�麯�������������д��Ϊ�������û����ָ������������ĺ��� 
���麯�� ��������ʵ�֣����ӿڼ̳С� 
��ͨ������ ǿ��ʵ�֣����಻Ӧ����д 
*/

/*
��̬���ͣ�����������ʱ���õ����ͣ��ڱ����ڼ���ȷ����
��̬���ͣ�ͨ����ָһ��ָ�������Ŀǰ��ָ��������ͣ����������ھ����ģ�
��̬�󶨣��󶨵��Ǿ�̬���ͣ�����Ӧ�ĺ��������������ڶ���ľ�̬���ͣ������ڱ����ڣ�
��̬�󶨣��󶨵��Ƕ�̬���ͣ�����Ӧ�ĺ��������������ڶ���Ķ�̬���ͣ������������ڣ�
*/
 
class Cat : public Pet {
public:
	void Speak() { //virtual�Զ��̳� 
		cout << "miao" << endl;
	}
};

class Dog : public Pet {
public:
	void Speak() {
		cout << "wang" << endl;
	}
};
#include <memory.h>
void Needle(Pet& pet) { //��2��v-ptr����ֵ�ɹ��캯����ʽ��ɣ���ֵ��´�����죬�ʴ˴����봫����    
	                    //never pass by value �󣬲��ܻ�д������������� 
	//binding��:��������һ�ε��ã��뺯��������Ӧ�Ĺ���
	//early bindingǰ�󶨣�Ĭ�ϣ� 
	//late binding/runtime binding/dynamic binding
	/*Dog dog;
	memcpy(&pet, &dog, 4);*/
	pet.Speak();
}

class FlyObject { //�ӿڣ�û�����ݳ�Ա�ĳ����ࣨǿ����Ϊ���ԣ�
public:
	virtual void fly() = 0;//���� 
};

class Machine {
};
class Airplane : public Machine, public FlyObject {
public:
	void fly() {
	}
};
 
class Animal {
};
class Bird : public Animal, public FlyObject  {
public:
	void fly() {
	}
};

void Scan(FlyObject& flyer) {}


int main()
{
	//upcasting��������ת������̬��ǰ�� 
	//Cat cat;
	//Needle(cat);
	
	//cout << sizeof(Pet) << endl;
	//12Byte: +4Byte  virtual function����������޹�
	//��̬��ʵ�֣�ÿ����������ָ��v-ptrָ������麯����v-table 
	
	/*Cat c1, c2;
	int *p = (int *)&c1;
	cout << *p << endl;
	p = (int *)&c2;
	cout << *p << endl;*/
	
	//Pet p; //[Error] cannot declare variable 'p' to be of abstract type 'Pet', 
	               //because the following virtual functions are pure within 'Pet'
	//����
	//����������virtual���Σ���ֹ�����ͷ� 
	return 0;
}

