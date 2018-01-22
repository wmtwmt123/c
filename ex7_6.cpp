# include<iostream.h>
# include<string>
# define N 100
# define M 100
void process(char *, char *, char *, int);
void main()
{
	int a;
	char s1[N], s2[M], s[M+N];
	gets(s1);
	gets(s2);
	cin>>a;
	process(s1, s2, s, a);
	cout<<s<<endl;
}
void process(char *s1, char *s2, char *s, int a)
{
	int i, j = 0, m = a;
	for(i = 0; *(s1+m-1) != '\0'; i++)
	{
		if(i > a-1)
		{
			if(*(s2+j) != '\0')
			{
				for(j = 0; *(s2+j) != '\0'; j++)
				{
					*(s+i) = *(s2+j);
					i++;
				}
				i--;
			}
			else
			{
				*(s+i) = *(s1+m);
				m++;
			}
		}
		else
		{
			*(s+i) = *(s1+i);
		}
	}
	*(s+i) = *(s1+m);
}
/*
运行结果：
12345678
abcdefgh
5
12345abcdefgh678
Press any key to continue
*/