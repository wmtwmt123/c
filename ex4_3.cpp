# include<iostream.h>

void main()
{ 
	int i;
	cin>>i;
	cout<<i;
	while(i != 1)
	{
		cout<<"->";
		if(i % 2)
		{
			i = i * 3 + 1;
		}
		else
		{
			i = i / 2;
		}
		cout<<i;
	}
	cout<<endl;
}
/*
运行结果：
11
11->34->17->52->26->13->40->20->10->5->16->8->4->2->1
Press any key to continue
*/
