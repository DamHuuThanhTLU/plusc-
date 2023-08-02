#include <iostream>
#include <cmath>
using namespace std;

// H�m t�nh kho?ng c�ch gi?a hai di?m
float distance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// H�m t�nh di?n t�ch tam gi�c b?ng c�ng th?c t�ch vecto
float triangleArea(float x1, float y1, float x2, float y2, float x3, float y3) {
    float a = distance(x1, y1, x2, y2); // �? d�i c?nh a
    float b = distance(x2, y2, x3, y3); // �? d�i c?nh b
    float c = distance(x3, y3, x1, y1); // �? d�i c?nh c
    float p = (a + b + c) / 2; // Chu vi tam gi�c
    float area = sqrt(p * (p - a) * (p - b) * (p - c)); // Di?n t�ch tam gi�c
    return area;
}

int main() {
    float x1, y1, x2, y2, x3, y3;
    cout << "Nhap toa do ba diem A(x1, y1), B(x2, y2), C(x3, y3):\n";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    float area = triangleArea(x1, y1, x2, y2, x3, y3);
    cout << "Dien tich tam giac: " << area << endl;
    return 0;
}
