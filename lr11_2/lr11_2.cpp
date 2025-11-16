#include <iostream> 
#include <cmath>   
#include <iomanip>  

using namespace std;

void calculate(double b, double c, double& a, double& x, double& y) {

    a = pow(sin(b), 5);

    x = a + pow(c, 3);

    y = exp(sqrt(fabs(x))) + cos(x);
}

int main() {

    setlocale(LC_ALL, "Ukrainian");

    double b_input, c_input;
    double a_result, x_result, y_result;

    // Введення даних
    cout << "Введіть вхідний параметр b: ";
    cin >> b_input;
    cout << "Введіть вхідний параметр c: ";
    cin >> c_input;

    // Виклик функції

    calculate(b_input, c_input, a_result, x_result, y_result);

    // Виведення результатів
    cout << fixed << setprecision(5); 
    cout << setw(10) << "a = " << a_result << "  (де a = sin^5(b))" << endl;
    cout << setw(10) << "x = " << x_result << "  (де x = a + c^3)" << endl;
    cout << setw(10) << "y = " << y_result << "  (де y = e^sqrt(|x|) + cos(x))" << endl;

    return 0; 
}