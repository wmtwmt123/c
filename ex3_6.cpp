# include <iostream.h>

void main()
{
	float r, pi, area, c;
	int k;
	pi = 3.1415926;
	cout<<"����Բ�����������1"<<endl<<"����Բ���ܳ�������2"<<endl<<"����Բ��������ܳ�������3"<<endl;
	cin>>k;
	cout<<"������Բ�İ뾶��"<<endl;
	cin>>r;
	area = r * r * pi;
	c = 2 * r * pi;
	switch (k)
	{
		case 1: cout<<"Բ�����S = "<<area<<endl;
			break;
		case 2: cout<<"Բ���ܳ�C = "<<c<<endl;
			break;
		default: cout<<"Բ�����S = "<<area<<"Բ���ܳ�C = "<<c<<endl;
	}
}
/*
���н����
����Բ�����������1
����Բ���ܳ�������2
����Բ��������ܳ�������3
3
������Բ�İ뾶��
6
Բ�����S = 113.097Բ���ܳ�C = 37.6991
Press any key to continue
*/