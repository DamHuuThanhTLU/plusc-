#include<iostream>
#include<cmath>
using namespace std;
bool nguyen_to(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n%i == 0)
           return false;
    return true;
}
void thua_so_nto(int n){
    for(int i=2;i<=n;i++)
        while (n%i == 0 && nguyen_to(i)){
            cout <<" "<< i;
            n /= i;
        }
}
int main(){
    int n;
    cout <<"Nhap vao so nguyen n: "; cin >> n;
    cout<<"Phan tich n ra cac thua so nguyen to:";
    thua_so_nto(n);
    return 0;
}

