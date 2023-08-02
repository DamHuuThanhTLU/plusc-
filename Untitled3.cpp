#include<iostream>
using namespace std;

bool songuyento(int n){
	int dem;
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
void bai5(int n){
	cout<<"Nhap n = ";
	cin>>n;
	for(int i=1;i<n+1;i++){
		if(songuyento(i));
		cout<<i<<endl;
	}
}
