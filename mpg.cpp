#include <iostream>

int main()
{
    float gallons;
    float miles;
    float mpg;
    gallons=16;
    miles=312;
    
    mpg = miles / gallons;
    
    std::cout << "The mpg the car has = "<<mpg<<"\n";

    return 0;
}