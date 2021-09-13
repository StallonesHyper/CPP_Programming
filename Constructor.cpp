#include<iostream>

using namespace std;

class Construct {        
    public:   
    int l ;
    int b ;       
    int h ;
          
    Construct(int x, int y, int z) { 
      l = x;
      b = y;
      h = z;
      
    }

    int area()
    {
        int a;
        a = l*b;

        return a;

    }
    int volume()
    {
        int v;
        v = l*b*h;

        return v;
    }
};

int main() {
  
  Construct rect(300,200,100);
  

  
  cout <<"Area Of Rectangle Is : "<< rect.area() <<"\n" <<"Volume Of Rectangle Is : "<< rect.volume() << "\n ";
  
  return 0;
}

