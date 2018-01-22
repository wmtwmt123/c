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
	int i, max, min, m, n;
	max = min = *p;
	m = n =0;
	for(i = 0; i < N; i++)
	{
		if(*(p + i) > max)
		{
			max = *(p + i);
			m = i;
		}
		if(*(p + i) < min)
		{
			min = *(p + i);
			n = i;
		}
	}
	*(p + m) = min;
	*(p + n) = max;
}
/*
运行结果：
1 2 3 4 5 6 7 8 9 10
 10  2  3  4  5  6  7  8  9  1
Press any key to continue
*/