#include <iostream>
using namespace std;
//class OO
//1.everything is an object
//2.��װ���̳С���̬ 
//access control���ʿ��� 
class Student//��װ 
{
	//attribute���� 
private://��ʡ�ԣ�Ĭ��Ϊprivate  structĬ��Ϊpublic 
	int age; 
	char* name;
	//...
	//method action
public:
	void init(char* a_name,int a_age);//������ռruntime memory 
	int get_age();
};//���򣨻����룩���ص��ڴ��У�ֻ������runtime memory�������ڴ� 
//never pass by value
/*
void init_student(int age, char* name, Student* s) //�Զ������ʹ���ָ�� 
{
	s->name = name;
	s->age = age;
}
*/
void Student::init(char* a_name,int a_age) //:: = �� 
{
    this->name = a_name;
	this->age = a_age;	
}
int Student::get_age()
{
	cout<< this <<endl;
	return age;
	//return this->age; 
}
#pragma pack(1)//�� 1�ֽڶ���
struct Test
{
	double d;
	int i;
	char c1;
	char c2;
};
int main(int argc, char* argv[])
{
	Student s1,s2;
	//init_student(20, "zhang", &s);
	s1.init("zhang",20);
	s2.init("wang",22);
	//cout<<s.name<<endl;
	//cout<<sizeof(Student)<<endl;//Ĭ�ϰ������(int 4Byte,char 1Byte) 
	cout<<&s1<<endl;
	cout<<s1.get_age()<<endl;
	cout<<&s2<<endl;
	cout<<s2.get_age()<<endl;//����Ĭ��thisָ�룬�൱�ڴ���Student* s 
	
	//ָ��Ĵ��ڵ��¿����޸Ķ����˽�б��� 
	Student s;
	s1.init("li",20);
	int *p = (int*)&s;
	*p = 30;
	cout<<s.get_age()<<endl;
	return 0;
}

