#include <iostream>
#include <cmath>
using namespace std;
class Point{
private:
	double x;
	double y;
public:
	Point(){}
	Point(double a, double b):x(a),y(b){}
	void show(){
		cout<<"此点的横坐标为："<<x<<endl;
		cout<<"此点的纵坐标为："<<y<<endl; 
	}
	double GX(){
		return x;
	}
	double GY(){
		return y;
	}
};
class Tri:public Point{
private:
	Point A1;
	Point A2;
	Point A3;
public:
	Tri(Point x1,Point x2,Point x3):A1(x1),A2(x2),A3(x3){}
	double square(){//行列式进行计算 
		double a=A1.GX()*A2.GY()+A3.GX()*A1.GY()+A2.GX()*A3.GY()-A3.GX()*A2.GY()-A1.GX()*A3.GY()-A2.GX()*A1.GY();
		return abs(a/2);
	}
//	void Show(){
//		A1.show();
//		A2.show();
//		A3.show();
//	}
};//每个三角形 


// 输入函数的重载 
int main (){
	double a,b;
		cout<<"请输入第1个点的横坐标和纵坐标"<<endl;
		cin>>a>>b;
		Point A(a,b);
		cout<<"请输入第2个点的横坐标和纵坐标"<<endl;
		cin>>a>>b;
		Point B(a,b);
		cout<<"请输入第3个点的横坐标和纵坐标"<<endl;
		cin>>a>>b;
		Point C(a,b);
		cout<<"请输入第4个点的横坐标和纵坐标"<<endl;
		cin>>a>>b;
		Point D(a,b);
		Tri X1(A,B,D);
		Tri X2(A,D,C);
		Tri X3(D,B,C);
		Tri Y(A,B,C);
		cout<<X1.square()<<endl;
		cout<<X2.square()<<endl;
		cout<<X3.square()<<endl;
		cout<<Y.square()<<endl;
		if (X1.square()+X2.square()+X3.square()==Y.square())
			cout<<"点在三角形内部"<<endl;
		else cout<<"点在三角形外部"<<endl;
	return 0; 
} 
