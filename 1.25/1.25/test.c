#include <stdio.h>
//struct tag//��ǩ���������д�������������
//{
//	//��Ա
//	//member - list;
//}�ṹ�����;
//struct Stu
//{
//	char name[10];//����
//	int age;//����
//	char sex[10];//�Ա�
//	char id[10];//ѧ��
//}s;//����һ���ṹ�����s
//struct //��д��ǩ,�������������ṹ������
//{
//	int a;
//	int b;
//	char c;
//}x;
//struct
//{
//	char arr[10];
//	double f;
//}*p;
//typedef struct Node
//{
//	int data;
//	struct Node*next
//}Node;//���ṹ�� struct Node����������ΪNode
//struct Point
//{
//	int x;
//	int y;
//}p1;//�ṹ������ʱ�������
//struct Point p2;//������������ٽ��ж������
//struct Point p3 = { 10,20 };//���������ʱ�򣬳�ʼ������
////struct Stu//��������
////{
////	char name[10];
////	int age;
////	char sex[20];
////}s1;//������ʱ�������
////s1 = { "zhangsan",18,"nan" };//��ʼ��
////struct Stu s2 = { "xiao tao",20,"nan" };//���������ʱ���ʼ��
//struct Node
//{
//	int data;
//	struct Point p1;
//}n1 = { 1,{2,3} };//�ṹ��Ƕ�׳�ʼ��
//struct Node n2 = { 10,{15,20} };//�ṹ��Ƕ�׳�ʼ��
//int main()
//{
//
//	return 0;
//}
//��ϰ1
struct S1
{
	char c1;
	int i;
	char c2;
};
struct S
{
	char c1;
	int i;
};
int main()
{
	printf("%d\n", sizeof(struct S2));
	printf("%d\n", sizeof(struct S1));
	return 0;
}

