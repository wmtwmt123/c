# include <iostream.h>

void main()
{
	int a, b, m, n;
	cout<<"����������a, b:"<<endl;
	cin>>a>>b;
	m = a / b;
	n = a % b;

	if (n ==0)
	{
		cout<<a<<'/'<<b<<'='<<m<<endl;
	}
	else
	{
		cout<<a<<'/'<<b<<'='<<m<<"��"<<n<<endl;
	}
}
/*
���н����
����������a, b:
18 6
18/6=3
Press any key to continue
*/