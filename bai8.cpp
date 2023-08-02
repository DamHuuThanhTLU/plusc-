#include<iostream>
#include<cmath>
using namespace std;
void swap_int(int* a,int* b){
	int t = *a;
	*a = *b;
	*b = t;
}
bool prime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
void nhap_int(int a[],int n){
	for(int i=0;i<n;i++) cin >> a[i];
}
void xuat_int(int a[],int n){
	for(int i=0;i<n;i++) cout << a[i] << ' ';
}
void xuat_prime(int a[],int n){
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j] < a[min]) min = j;
		}
		swap_int(&a[i],&a[min]);
	}
	for(int i=0;i<n;i++){
		if(prime(a[i])) cout << a[i] << ' ';
	}
}
int main(){
	int n;cin>>n;
	int a[n];
	nhap_int(a,n);
	xuat_int(a,n);
	cout << endl;
	xuat_prime(a,n);
}
