#include <iostream>
#include <cmath>
using namespace std;

// Hàm tính kho?ng cách gi?a hai di?m
float distance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Hàm tính di?n tích tam giác b?ng công th?c tích vecto
float triangleArea(float x1, float y1, float x2, float y2, float x3, float y3) {
    float a = distance(x1, y1, x2, y2); // Ð? dài c?nh a
    float b = distance(x2, y2, x3, y3); // Ð? dài c?nh b
    float c = distance(x3, y3, x1, y1); // Ð? dài c?nh c
    float p = (a + b + c) / 2; // Chu vi tam giác
    float area = sqrt(p * (p - a) * (p - b) * (p - c)); // Di?n tích tam giác
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
