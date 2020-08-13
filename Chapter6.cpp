#include <iostream>
using namespace std;
// design pattern ���ģʽ 
class Scheduler {
	Scheduler() {} // private
	static Scheduler *self;
public:
	static Scheduler *get_instance();
};
Scheduler * Scheduler::self = NULL;//û��static 
Scheduler * Scheduler::get_instance() {
	if (self == NULL) 
		self = new Scheduler();
	return self;
}

//��������� 
class Account {
	char *name;
	int id;
	//...
	int balance;
public:
	Account(int money);
	int get_balance();
	void Save(int money);
	Account operator+(int money); //operator-overloading
};
Account::Account(int money) {
	this->balance = money;
}
int Account::get_balance() {
	return this->balance;
}
void Account::Save(int money) {
	this->balance += money;
}
Account Account::operator+(int money) {
	this->balance += money;
	return *this;
}

// const
class Test {
	int i;
public:
	void set_i(int ai) { // inline function�������� 
		i = ai;
	}
	int get_i() const { // ������������� 
		return i;
	}
}; 

int main()
{
	const Test t = *new Test();
	//t.set_i(1);
	cout << t.get_i() << endl; // ��get_iû��const��ᱨ��
	
	/*
	//Account a = *new Account();
	Account a(100);
	//Account a;
	//a = a + 100;
	//a += 100;
	a.Save(100);
	cout << a.get_balance();
	return 0;*/
}
/*
C++: new delete (operators)
C: malloc free (lib functions: stdlib)
new/malloc:
1.Ԥ�Ȳ�֪�ռ��С
2.��Ϊ������������  e.g. this->ac = new AutoAC();
new = malloc + constructor
delete = destructor + free
*/ 
/*
��װ
new-delete
opertaor overloading
const (const int *p�����������)
static
copy-constructor reference
constructor(default constructor)-destructor
this.
private/public
from struct to class
*/ 

