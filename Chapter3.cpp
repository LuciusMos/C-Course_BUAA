#include <iostream>
using namespace std;
//��װ 
//constructor,destructor,copy constructor 
class Student
{
	int age;
	char* name;
	//...
public:
	Student (int aage,char* aname);//constructor���캯�� ����ֵ
	int get_age() {
		return this->age;
	} 
};

Student::Student(int aage,char* aname)
{
	this->age = aage;
	this->name = aname;
}

class Test
{
	int i;
	int *j;
	//����һ�������ݳ�Ա
	//���ݳ�Ա�п��ܰ����Ǳ�Ȼ���� 
public:
	//Type1 
	Test(int ai);
	Test(int ai,int aj);
	//Type2
	//Test(int ai,int aj=0);
	//-Which is better? -The first one!
	//performance
	void clean();
	~Test();//destructor����������ֻ����һ�����������أ� 
	//���������ڶ�������ʱ��������ڴ� 
	//��������new����һ��Ҫ������������
	//������û��new��Ҳ������Ҫ���������� 
};
Test::Test(int ai)
{
	this->i = ai;//ֻ����һ�����ʱ����� ԭ��deleteҰָ��ʱ�������� Ĭ�Ϲ���Test()Ҳ����Ҫ��j��ֵΪNULL 
	this->j = NULL; 
}
Test::Test(int ai,int aj)
{
	i = ai;
	j = new int(aj);//int's constructor
	//int i = 10;
	//int i(10);
}
void Test::clean()
{
	delete j;
}
Test::~Test()
{
	delete j;
}

class Test2
{
	int i;
	int j;
public:
	Test2();
	Test2(int a1);
	Test2(int a1,int a2);
};

class StudyGroup
{
	Student s1;//С���к���ѧ����value 
	Student *s2;//С���к���ѧ����Handle��ѧ�����Ǳ�Ȼ��ɲ��� 
	//�����㣺��ʡ�ռ� sizeof(Student) vs. 4B 
};

int main()
{
	Student s(10,"zhang");
	//cout << s.get_age() << endl;
	Test2 t4();//this is a function declaration!
	Test r1(1,2);//�ֲ�����r1��stack��8B������4Bָ��heap��4B��int
	Test *p = new Test(1,2);//p in stack��8B & 4B in heap  p->i p->*j j->aj 
	delete p;//����i,*j,(j->aj) 
	return 0;
}
/*
���������
��̬ ����   e.g.������  ��С���ɱ�
Runtime��stack�ֲ����� heap��̬�������  (globalȫ�ֱ�����) 
Student q;//stack
Student* p = new Student;//heap
*/
/*
������������ַ�����
1. ��ջ�ϴ�������Objects on the Stack)
   ClassName ObjName1��
   ClassName ObjName2(parameter01) // But never ObjName() 
2. �ڶ��ϴ�������Objects on the Heap��
   ClassName *obj1 = new ClassName();
   ClassName *obj2 = new ClassName(parameter);
   delete obj1;
   delete obj2;
*/
