//��10��ѧ����ÿ��ѧ�������ݰ���ѧ�š�������3�ſεĳɼ����Ӽ�������10��ѧ�������ݣ���ӡ�����ſγ���ƽ���ɼ����Լ���߷ֵ�ѧ��������
//����ѧ�š�������3�ųɼ���ƽ����
#include<iostream>
#include<iomanip>
const int n = 10;
struct student {
	char num[6];
	char name[8];
	int score[3];
	float avr;
}stu[n];
using namespace std;
int main()
{
	int i, j, max, maxi, sum;
	float average;
	for (i = 0; i < n; i++)
	{
		cout << "�������" << i + 1 << "��ѧ������Ϣ" << endl;
		cout << "ѧ�ţ�";
		cin >> stu[i].num;
		cout << "������";
		cin >> stu[i].name;
		for (j = 0; j < 3; j++)
		{
			cout << "��" << j + 1 << "�ſγ̳ɼ���";
			cin >> stu[i].score[j];
		}
		cout<<endl;
	}
	average = 0;
	max = 0;
	maxi = 0;
	for (i = 0; i < n; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
			sum = sum + stu[i].score[j];
		stu[i].avr = sum / 3.0;
		average = average + stu[i].avr;
		if (sum > max)
		{
			max = sum;
			maxi = i;
		}
	}
	average = average / n;
	cout << "ѧ��:       ����       ����1       ����2       ����3       ƽ����" << endl;
	for (i = 0; i < n; i++)
	{
		cout<< stu[i].num << "  " << setw(10) << stu[i].name << "         ";
		for (j = 0; j < 3; j++)
			cout << setw(3) << stu[i].score[j] << "         ";
			cout << stu[i].avr << endl;
	}
	cout << "��ƽ����Ϊ��" << average << endl;
	cout << "�ɼ���һ��Ϊ��" << stu[maxi].name << ",�ܷ�Ϊ��" << max << endl;
	return 0;
}
