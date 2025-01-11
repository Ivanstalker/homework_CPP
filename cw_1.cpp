#include <iostream>

using namespace std;

#define print cout <<


namespace My_project {
    int math(double a, double b) {
        return a + b;
    }

    int math_2(double a, double b) {
        return a - b;
    }

    int math_3(double a, double b) {
        return a * b;
    }

    int math_4(double a, double b) {
        return a / b;
    }
}



int main() {
    double a, b;
    print "введите два числа: " << endl;
    cin >> a >> b;
    double m_1 = My_project::math(a, b);
    double m_2 = My_project::math_2(a, b);
    double m_3 = My_project::math_3(a, b);
    double m_4 = My_project::math_4(a, b);

    print a << " + " << b << " = " << m_1 << endl;
    print a << " - " << b << " = " << m_2 << endl;
    print a << " * " << b << " = " << m_3 << endl;
    print a << " / " << b << " = " << m_4 << endl;

    string stop;
    cin >> stop;
}

