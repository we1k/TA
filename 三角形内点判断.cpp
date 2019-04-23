#include <iostream>
using namespace std;
class Point{
private:
	double x;
	double y;
public:
	Point(double a, double b):x(a),y(b){};
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
	double s;
public:
	Tri(Point &x1,Point &x2,Point &x3):A1(x1),A2(x2),A3(x3){}
	double square(){//行列式进行计算 
		double a=A1.GX()*A2.GY()+A2.GX()*A1.GY()+A2.GX()*A3.GY()-A3.GX()*A2.GY()-A2.GX()*A1.GY();
		return a/2;
	}
};//每个三角形 


// 输入函数的重载 
int main (){
	return 0; 
} 
