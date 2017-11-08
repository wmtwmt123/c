#include<iostream.h>
void fun()
{
	int i,n=0,m;
	cin>>m;
	for(i=1;i<=m;i++)
	{
	
		if(i%7==0||i%11==0)
		{
			n++;
		    cout<<i<<"  ";
		}
	}
	cout<<"n="<<n<<endl;
}
void main()
{
	void fun();
	fun();
}