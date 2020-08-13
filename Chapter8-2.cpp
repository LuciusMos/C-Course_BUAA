#include <iostream>
using namespace std;
//template
//reuse
template <class T>
class Stack {
	T pool[100];
	int top;
public:
	Stack() : top(0) {}
	void Push(T i) {
		//isfull
		pool[top++] = i;
	}
	T Pop() {
		//isempty
		return pool[--top];
	}
}; 
#include <vector>
#include <list>
#include <iterator> 
//1. ��������
//2. ��̬���� 
int main()
{
	/*
	Stack<int> s;
	for (int i = 0;i < 10;i++) {
		s.Push(i);
	}
	for (int i = 0;i < 10;i++) {
		cout << s.Pop() << endl;
	}*/
	
	
	vector<int> vi;
	for (int i = 0;i < 10000;i++) {
		vi.push_back(i);//���������� >10000�Σ������ռ�洢���ռ䲻��ʱ�����¿ռ䲢������ 
	}
	//cout << vi[3001] << endl;//��������� []��αװΪ���� 
	vector<int>::iterator it = vi.begin();
	while (it < vi.end()) { //����++ *��αװΪָ�� 
		cout << *it << endl;
		it++;
	}
	
	/*
	list<int> vi;
	for (int i = 0;i < 10000;i++) {
		vi.push_back(i);//push_back��ֵ������������ 10000�� 
	}
	list<int>::iterator it = vi.begin();
	while (it != vi.end()) { //����++ *��αװΪָ�� 
		cout << *it << endl;
		it++;
	}*/
	return 0;
}
//����ģʽ�������ͣ�
//�۲���ģʽ����Ϊ�ͣ� 
