#include<iostream>
using namespace std;
 
class Room
{
private:
    int x, y, area;
public:
    Room(int x1, int y1) 
    {
        x = x1; y = y1; 
        
    }
 
    
    Room(int z1) 
    {
        x=z1;
        y=50; 
    }

    Room()
    {
        x=100;
        y=50;
        
    }
 
    int areaofRoom()           
    {
        area = x*y;
        return area; 
    }

    

};
 
int main()
{
    Room room1(40, 20);
    Room room2(100);
    Room room3;
    
    
    cout << "The Area Of Room 1 Is :" << room1.areaofRoom() << "\n";
    cout << "The Area Of Room 2 Is :" << room2.areaofRoom() << "\n";
    cout << "The Area Of Room 3 Is :" << room3.areaofRoom() << "\n";
    
 
    return 0;
}

