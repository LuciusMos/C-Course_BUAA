#include <iostream>
using namespace std;
#include <cstdio> /*<stdio.h>*/
//static, const
/*
static: ����������� 
1. static local variable: ��ֵ
2. static global function: �����ļ�����ʹ�� 
3. static data member: �����ڴ� 
4. static function memeber: Class::Fun
*/ 
/* 
extern int global;//ȫ�ֱ��������ڱ���ļ�A�У������ڳ���A���ļ�������
extern void fun1();*/
//link����Ҫ���Ҳ������ض���
/*
const:
*/ 
/*
public protected private:
�����������ʹ�����еĳ�Ա,ֻ��ֱ��ʹ��public���͵�,protected��private���ǲ��ܷ��ʵ�,��������ʹ�ö���,����������ȫ��ͬ��.
�����ڻ������������,����ֱ�ӷ��ʼ̳ж�����protected��Ա,���ǲ��ܷ���private���Ƶĳ�Ա.��������������,���Է��ʻ���̳ж�����public
��proected�������͵ĳ�Ա.��public����������,�̳ж����ĳ�Ա����Ȩ�޲���.protected������,public��protected�����protected,private����
��,���еļ̳���������private��.
*/ 
void fun3(int i)
{
	i++;
}
class Test
{
public:
	static int i;//���ڱ���ȫ������ 
	int j;
public:
	Test(/*int ai, */int aj);
	~Test();
	static void a_fun();
};
int Test::i = 10;//����ȫ�ֱ��� 
/*
static void Test::a_fun()
{
	return;
}*/
Test::Test(int aj)
{
	//this->i = ai;
	this->j = aj;
	cout << "born" << endl;
}
Test::~Test()
{
	cout << "destroy" << endl;
}
void fun()
{
	/*
	static int i = 0;
	//��̬�ֲ�����������ջ�������ᱻ�ͷţ����Ǻ������޷����� 
	i++;
	cout << i <<endl;
	*/
	//static Test t;	
}

int g_i;
//����A�ļ���д�˺���void fun1()�����A�ļ�֮����ļ��޷����ô˺���fun1() 
/*
������ͨ�ţ�
1. ��������
2. ͬһ��Ĳ�ͬ������function member, data member
3. ͬһ��Ĳ�ͬ����t1, t1
4. global variable 
*/ 
void fun4(const Test *t)//ָ����ָ��Ķ����ǳ��� 
{
	
} 
//#include <h1.h>
//#include <h2.h>
int main()
{
	/*
	for (int i = 0;i < 3;i++) {
		fun();
	}*/
	
	/*
	static int s_i;
	cout << &g_i << endl;
	cout << &s_i << endl;*/
	//��̬������ֻ�ڱ�����ɷ��ʵ�ȫ�ֱ��� 
	/*
	Test t1(2);
	Test t2(4);*/
	/*
	T1::ABC a;//namespace T1
	T2::ABC b;//namespace T2 */
	int m = 10;
	fun3(m);
	cout << m << endl;
	return 0;
}

