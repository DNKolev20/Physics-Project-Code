#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

// Fucntion to find the speed using equal acceleration formula
int equalAcceleration(int Vo, int a, int t)
{
    
    return Vo + a * t;
    // Returns the value
}
// Fucntion to find the path length using equal acceleration path formula
int equalAccelerationPath(int Vo, int a, int t)
{

    return (Vo + a * t)/2;
    // Returns the value
}
// Function to find the path length using free faling path formula
float freeFalingPath(float t)
{
    float g = 9.8;
    return (g * t * t) / 2;
}
// Function to find the speed using free faling formula
float freeFaling(float t)
{
    float g = 9.8;
    return (g * t);
}

int main()
{
	int number1;
	int number2;
	int number3;
}
