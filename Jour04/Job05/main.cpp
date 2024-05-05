#include <iostream>

struct Point {
    int x;
    int y;
};

int main()
{
    Point p;
    Point *ptr = &p;

    // (*ptr).x = 7;
    // (*ptr).y = 15;

    ptr->x = 7;
    ptr->y = 15;

    std::cout << "Point coordinates: (" << ptr->x << ", " << ptr->y << ")\n";

    return 0;
}