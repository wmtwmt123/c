# include<iostream.h>
# define N 10
void process(int *);
void main()
{
	int a[N], i;
	for(i = 0; i < N; i++)
	{
		cin>>a[i];
	}
	process(a);
	for(i = 0; i < N; i++)
	{
		cout<<' '<<a[i]<<' ';
	}
	cout<<endl;
}
void process(int *p)
{
	int i, j = N - 1, t;
	for(i = 0; i < N/2; i++)
	{
		if(j >= N/2)
		{
			t = *(p + i);
			*(p + i) = *(p + j);
			*(p + j) = t;
		}
		j--;
	}
}
/*
运行结果：
1 2 3 4 5 6 7 8 9 10
 10  9  8  7  6  5  4  3  2  1
Press any key to continue
*/