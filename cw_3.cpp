#include <iostream>

using namespace std;

int main() {
    const float PI = 3.14159265358979323846;
    int r;
    cout << "введите радиус: ";
    cin >> r;
    cout << "радиус круга = " << PI * r * r << endl;
    cout << "площадь круга = " << PI * 2 * r << endl;

    cin >> r;
}