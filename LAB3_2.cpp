#include <iostream>
#include <iomanip>

using namespace std;

float area_circle(float radius);
float area_rectangle(float legnth, float width);
float area_square(float length);
void fence(float length, float width, float &perimeter);
float cost(float &perimeter, float costPerUnit);

struct Circle {
    float radius;
};

struct Rectangle {
    float length, width;
};

struct Square {
    float length;
};

int main() {

    Circle circle;
    Rectangle rectangle;
    Square square;

    cout << "Input radius of the pool: ";
    cin >> circle.radius;

    cout << "\nInput length of the rectangular building : ";
    cin >> rectangle.length;

    cout << "Input width of the rectangular building : ";
    cin >> rectangle.width;

    cout << "\nInput length of the square building : ";
    cin >> square.length;

    cout << "\nTotal area of the garden : " << 15 * 28;

    cout << "\nTotal area of the garden without the pool and the two buildings : ";

    float total_area;
    total_area = 420.0 - area_circle(circle.radius) - area_rectangle(rectangle.length, rectangle.width) - area_square(square.length);

    cout << setiosflags(ios::fixed) << setprecision(2) << total_area << "\n";

    float fence_length, fence_width, perimeter;
    cout << "\nInput length of the fence : ";
    cin >> fence_length;

    cout << "Input width of the fence : ";
    cin >> fence_width;

    fence(fence_length, fence_width, perimeter);

    float costPerUnit;
    cout << "\nInput cost per unit (in metres) : ";
    cin >> costPerUnit;

    fence(fence_length, fence_width, perimeter);

    cout << "\nPerimeter of the fence : " << setiosflags(ios::fixed) << setprecision(2) << perimeter;

    cout << "\nTotal cost for the fence : " << setiosflags(ios::fixed) << setprecision(2) << cost(perimeter, costPerUnit);

    return 0;
}

float area_circle(float radius) {
    return 22/7.0 * radius * radius;
}

float area_rectangle(float length, float width) {
    return length * width;
}

float area_square(float length) {
    return length * length;
}

void fence(float length, float width, float &perimeter) {
    perimeter = 2.0 * (length + width);
}

float cost(float &perimeter, float costPerUnit) {
    return perimeter * costPerUnit;
}