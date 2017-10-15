# include<iostream.h>

void main()
{ 
	int i;
	for(i = 1; i <= 99; i++)
	{
		if(i * i >= 100)
		{
			if((i * i) % 100 == i)
			{
				cout<<i<<endl;
			}
		}
		else
		{
			if((i * i) % 10 == i)
			{
				cout<<i<<endl;
			}
		}
	}
}
/*
运行结果：
1
5
6
25
76
Press any key to continue
*/