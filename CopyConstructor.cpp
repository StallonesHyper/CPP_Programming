#include <iostream>
using namespace std;

class Room
{
private:
    int x, y, area;

public:
    Room(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    // Copy constructor
    Room(const Room &s)
    {
        x = s.x;
        y = s.y;
    }

    int areaofwall()
    {
        area = x * y;
        return area;
    }
};

int main()
{
    Room wall_one(40, 20);
    Room wall_two = wall_one;

    cout << "The Area Of Wall 1 Is :" << wall_one.areaofwall() << "\n";
    cout << "The Area Of Wall 2 Is :" << wall_two.areaofwall() << "\n";

    return 0;
}
