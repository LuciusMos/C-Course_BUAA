#include <iostream> //stdio
using namespace std;
//function:
//1.overloading����/���أ�ͬ����������ͬ�����������͡�˳�򣩲��� 
void Print(int i)
{
	cout << i << endl; 
}
void Print(const char* str) //���������������� 
{
	cout << str << endl;
}
//2.default parameterĬ�ϲ���
//������body,definition
//2.5ͷ�ļ�����������������a.c  a.h�� ����Ĭ�ϲ����������뺯������ֻ�ܶ���һ�� 
//void fun(int a, int b=20, int c=10);
void fun(int a, int b=20, int c=10)//�����߲�����cʱĬ��cΪ10
{                                  //Ĭ�ϵĲ��������ں�� 
	cout << a << " " << b << " " << c << endl;
}//127.0.0.1 ����IP��ַ
//3.ռλ�� 
void fun2(int)//��������û�����֣�int��ռλ��������������ʱ���봫�� 
{
	//����Ŀ�������overloading���������ֲ�ͬ���� 
}
//C����֪ʶ
//1.function callback����ָ��  https://blog.csdn.net/str999_cn/article/details/78591369
//2.ָ��pointer   .malloc
//3.����array
//4.�ṹ��struct
//5.��macro
//���ࣺ�ٳ����꣺����������magic number  
#define PI 3.14
#define STU_COUNT 100
//�ں����꣺С����Ƶ�����ã����ú�����Ҫ�����ֳ��ָ��ֳ���
#define ADD(a,b) (a+b)
//�ۿ��ƺ꣺����
#define REMOTE_VER
//6.ͷ�ļ� 
#include "AHeader.h"//���ܻᱻ�ظ�����
#include "AHeader.h" 
int main(int argc, char* argv[])
{
	//overloading
	Print(1);
	Print("hello");
	//default parameter
	fun(1,2,3);
	fun(1,2);
	fun(1,20,3);//ֻ�봫�����1 3��������Ҫ������2 
	fun2(1);//���봫��һ��int 
#ifdef REMOTE_VER
	cout << "connect oracle" << endl;//���ƺ� 
#else
	cout << "connect mysql" <<endl;
#endif	
	return 0;
}
//���ɿ�ִ���ļ�������+���ӣ�ERR���Ҳ���/���ˣ� 
//extern "C" void c_fun(); �����������˺���ΪC���� 
