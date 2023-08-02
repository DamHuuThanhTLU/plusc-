#include<iostream>
using namespace std;
void swap_int(int* a,int* b){
	int t = *a;
	*a = *b;
	*b = t;
}
void swap_float(float* a,float* b){
	float t = *a;
	*a = *b;
	*b = t;
}
void nhap_int(int a[],int n){
	for(int i=0;i<n;i++) cin >> a[i];
}
void xuat_int(int a[],int n){
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j] < a[min]) min = j;
		}
		swap_int(&a[i],&a[min]);
	}
	for(int i=0;i<n;i++) cout << a[i] << ' ';
}
void nhap_float(float a[],int n){
	for(int i=0;i<n;i++) cin >> a[i];
}
void xuat_float(float a[],int n){
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j] < a[min]) min = j;
		}
		swap_float(&a[i],&a[min]);
	}
	for(int i=0;i<n;i++) cout << a[i] << ' ';
}
int main(){
	int n;cin>>n;
	int a[n];float b[n];
	nhap_int(a,n);
	xuat_int(a,n);
	cout << endl;
	nhap_float(b,n);
	xuat_float(b,n);
}
