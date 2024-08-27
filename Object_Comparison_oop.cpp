#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle(double w = 0, double h = 0) : width(w), height(h) {}

    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }

    double getArea() const {
        return width * height;
    }

    void display() const {
        cout << "Width: " << width << ", Height: " << height << ", Area: " << getArea() << endl;
    }
};

int main() {
    double w1, h1, w2, h2;

    cout << "Enter width and height for Rectangle 1: ";
    cin >> w1 >> h1;
    Rectangle rect1(w1, h1);

    cout << "Enter width and height for Rectangle 2: ";
    cin >> w2 >> h2;
    Rectangle rect2(w2, h2);

    rect1.display();
    rect2.display();

    if (rect1.getArea() > rect2.getArea()) {
        cout << "Rectangle 1 is larger than Rectangle 2." << endl;
    } else {
        cout << "Rectangle 1 is not larger than Rectangle 2." << endl;
    }

    return 0;
}
