# include <iostream.h>
	# include <math.h>
	
	void main()
	{
	float a, b, c;
	float area, s;
	cout<<"���������ߵ�ֵa, b, c:";
	cin>>a>>b>>c;
	s = (a + b + c)/2;
	area = sqrt(s * (s - a)*(s - b)*(s - c));
	cout<<"���������S="<<area<<endl;
	}
	/*
	���н����
	���������ߵ�ֵa, b, c: 6 8 10
	���������S=24
	Press any key to continue
	*/
