////编写一个函数insert，用来向动态链表插入一个结点
//#include<iostream>
//using namespace std;
//#define NULL0;
//struct student {
//	long num;
//	float score;
//	struct student* next;
//};
//int n;
//student* insert(student* head, student* stud)
//{
//	student *p0, * p1, * p2;
//	p1 = head;
//	p0 = stud;
//	if (head == NULL)
//	{
//		head = p0;
//		p0->next = NULL;
//	}
//	else
//	{
//		while ((p0->num > p1->num) && (p1->next != NULL))
//		{
//			p2 = p1;
//			p1 = p1->next;
//		}
//		if (p0->num <= p1->num)
//		{
//			if (head == p1)
//				head = p0;
//			else
//				p2->next = p0;
//			p0->next = p1;
//		}
//		else
//		{
//			p1->next = p0;
//			p0->next = NULL;
//		}
//	}
//	n = n + 1;
//	return(head);
//}