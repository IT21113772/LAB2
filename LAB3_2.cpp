#include <iostream>
#include <iomanip>

using namespace std;

void fence(float length, float width, float &perimeter);
float cost(float &perimeter, float costPerUnit);

int main() {

    float fence_length, fence_width, perimeter;
    cout << "Input length of the fence : ";
    cin >> fence_length;

    cout << "Input width of the fence : ";
    cin >> fence_width;

    fence(fence_length, fence_width, perimeter);

    float costPerUnit;
    cout << "Input cost per unit (in metres) : ";
    cin >> costPerUnit;

    cout << "Total cost for the fence : " << setiosflags(ios::fixed) << setprecision(2) << cost(perimeter, costPerUnit);

    return 0;
}

void fence(float length, float width, float &perimeter) {

    perimeter = 2.0 * (length + width);

}

float cost(float &perimeter, float costPerUnit) {

    return perimeter * costPerUnit;

}