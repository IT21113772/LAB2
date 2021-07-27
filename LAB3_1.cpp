#include <iostream>
#include <iomanip>

using namespace std;

float circle(float radius);
float rectangle(float legnth, float width);
float square(float length);

int main() {

    float radius;
    cout << "Input radius of the pool: ";
    cin >> radius;

    float area_circle;
    area_circle = circle(radius);

    float length, width;
    cout << "\nInput length of the rectangular building : ";
    cin >> length;

    cout << "Input width of the rectangular building : ";
    cin >> width;

    float area_rectangle;
    area_rectangle = rectangle(length, width);

    float length_square;
    cout << "\nInput length of the square building : ";
    cin >> length_square;

    float area_square;
    area_square = square(length_square);

    cout << "\nTotal area of the garden : " << 15 * 28;

    float total_area;
    cout << "\nTotal area of the garden without the pool and the two buildings : ";

    total_area = 420.0 - area_circle - area_rectangle - area_square;

    cout << setiosflags(ios::fixed) << setprecision(2) << total_area << "\n";

    return 0;
}

float circle(float radius) {

    return 22/7.0 * radius * radius;

}

float rectangle(float length, float width) {

    return length * width;

}

float square(float length) {

    return length * length;

}