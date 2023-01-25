#include <stdio.h>
//struct tag//标签，可以随便写，但最好有意义
//{
//	//成员
//	//member - list;
//}结构体变量;
//struct Stu
//{
//	char name[10];//姓名
//	int age;//年龄
//	char sex[10];//性别
//	char id[10];//学号
//}s;//创建一个结构体变量s
//struct //不写标签,这种属于匿名结构体类型
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
//}Node;//将结构体 struct Node类型重命名为Node
//struct Point
//{
//	int x;
//	int y;
//}p1;//结构体声明时定义变量
//struct Point p2;//或者声明完后，再进行定义变量
//struct Point p3 = { 10,20 };//定义变量的时候，初始化变量
////struct Stu//类型声明
////{
////	char name[10];
////	int age;
////	char sex[20];
////}s1;//声明的时候定义变量
////s1 = { "zhangsan",18,"nan" };//初始化
////struct Stu s2 = { "xiao tao",20,"nan" };//定义变量的时候初始化
//struct Node
//{
//	int data;
//	struct Point p1;
//}n1 = { 1,{2,3} };//结构体嵌套初始化
//struct Node n2 = { 10,{15,20} };//结构体嵌套初始化
//int main()
//{
//
//	return 0;
//}
//练习1
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

