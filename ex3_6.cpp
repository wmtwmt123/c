# include <iostream.h>

void main()
{
	float r, pi, area, c;
	int k;
	pi = 3.1415926;
	cout<<"计算圆的面积请输入1"<<endl<<"计算圆的周长请输入2"<<endl<<"计算圆的面积和周长请输入3"<<endl;
	cin>>k;
	cout<<"请输入圆的半径："<<endl;
	cin>>r;
	area = r * r * pi;
	c = 2 * r * pi;
	switch (k)
	{
		case 1: cout<<"圆的面积S = "<<area<<endl;
			break;
		case 2: cout<<"圆的周长C = "<<c<<endl;
			break;
		default: cout<<"圆的面积S = "<<area<<"圆的周长C = "<<c<<endl;
	}
}
/*
运行结果：
计算圆的面积请输入1
计算圆的周长请输入2
计算圆的面积和周长请输入3
3
请输入圆的半径：
6
圆的面积S = 113.097圆的周长C = 37.6991
Press any key to continue
*/