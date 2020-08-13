#include <iostream>
using namespace std;
/*
ָ��Ĵ���
1.fly pointer (=NULL   ������ָ��if(p == NULL) return)
2.�ظ�delete/free 
3.bitwise copy (e.g. memcpy��ȷ������Ϊָ��ͬһ�ռ����������)
4.return address of local variable
5.memory leak
*/ 
//pass by value vs. pass by address(pointer reference)
void fun1(int i)
{
	i++;
}
void fun2(int *i)
{
	(*i)++;
}
void fun3(int &i) //java: everything is a reference
{
	i++;
}

class Test
{
	int i;
	int *j;
public:
	Test(int a,int b);
	//copy constructer
	//��������ֵʱ��Ҳ���ÿ�������
	//bitwise copy/ǳ����(Ĭ��) vs. logical copy/��� 
	Test(Test &t);//�Լ�д����������ã� 
	~Test();
};//����Ҫ��; 
Test::Test(int a,int b)
{
	i = a;
	j = new int(b);
}
Test::Test(Test &t)//�����copy value, not address 
{
	this->i = t.i;
	this->j = new int(*t.j);//*t.j:*(t.j)
}
Test::~Test()
{
	delete j;
}

int main()
{
	//reference  ������һ����ȫ��ָ��
	int i = 10;
	int j = 20;
	int *p;
	p = &i;
	p = &j;
	
	int &r = i;//&:���÷� ��һ����int������ 
	r++;//����Ϊr��i����һ�� 
	cout << i << endl;//i = 11
	r = j;//i = 20
	cout <<  i << endl;
	//�����������ȫ�����⣺1.Ұָ�� 2.ָ��ָ�����ݿɱ�
	
	int m = 10;
	fun1(m);
	cout << m << endl;//m = 10
	fun2(&m); 
	cout << m << endl;//m = 11
	fun3(m);
	cout << m << endl;//m = 12 
	
	Test t1(1,2);
	Test t2(t1);//�������� copy constructer 
	//t2������ 
	return 0;
	if (p != NULL) free(p); 
}

