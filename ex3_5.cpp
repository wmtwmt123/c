# include <iostream.h>
	# include <math.h>
	
	void main()
	{
	float a, b, c;
	float area, s;
	cout<<"请输入三边的值a, b, c:";
	cin>>a>>b>>c;
	s = (a + b + c)/2;
	area = sqrt(s * (s - a)*(s - b)*(s - c));
	cout<<"三角形面积S="<<area<<endl;
	}
	/*
	运行结果：
	请输入三边的值a, b, c: 6 8 10
	三角形面积S=24
	Press any key to continue
	*/
