#include<iostream>
using namespace std;

class circle{

   int radius;

   float circarea(float radius);
    
  public:
   void printdata(int rad)
    {
       float result;

       result = circarea(rad);
   
       cout<<"area is :"<<result<<endl;
    }
};


float circle::circarea(float radius)
{
   float pi = 3.14;
   float  area;

   area = pi*radius*radius;

  return area;
}


int main()
{
   circle c1;
    
   float radius;   

   cout<<"Enter the radius to calculate the area"<<endl;
   cin>>radius;
    
   c1.printdata(radius);

return 0;
 }
