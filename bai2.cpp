//#include <iostream>
//#include <cmath>
//using namespace std;
//
//
//double f(double x) {
//    if (x <= 2) {
//        return sqrt(pow(M_E,(2*x+1))+1) + 7 ;
//    } else {
//        return (pow(x,5) + 5 * pow(x, 3) + x + 1);
//    } 
//}
//
//int main() {
//    double x, y;
//
//    cout << "Nhap gia tri x: ";
//    cin >> x;
//    cout << "Nhap gia tri y: ";
//    cin >> y;
//
//    double fx = f(x);
//    double fy = f(y);
//
//    double result = pow((fx + fy), 2);
//    cout << "(f(x) + f(y))^2 = " << result << endl;
//
//    cout << "Cac cap <x, f(x)>:" << endl;
//    for (double x_val = -5.0; x_val <= 3.0; x_val += 0.1) {
//        double fx_val = f(x_val);
//        cout << "<" << x_val << ", " << fx_val << ">" << endl;
//    }
//	
//    return 0;
//}
#include<iostream>
#include<cmath>
#define e 2.718281828459
using namespace std;
double f1(double x){
	double num = 0;
	if(sqrt(x) <= 2){
		num = sqrt(pow(e,2*x+1)+1) + 7;
	}
	else num = pow(x,5) + 5*pow(x,3) + x + 1;
	return num;
}
double f2(double x,double y){
	double num = (f1(x) + f1(y)) * (f1(y) + f1(y));
	return num;
}
void f3(double x){
	double num = 0;
	for(float i=-5.0; i<=3.0; i+=0.1){
		cout << "<" << i << "," << f1(i) << ">" << endl;
	}
}
int main(){
	double x,y;cin>>x>>y;
	cout << f1(x) << endl << f2(x,y) << endl;
	f3(x);
}
