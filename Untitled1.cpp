#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    int i = 100;
    while (n > 0) {
        cout << i << " ";
        i++;
        n--;
    }

    return 0;
}
