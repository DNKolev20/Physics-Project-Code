#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

//Function to calculate how much a person weights on other planets
float weightOnOtherPlanets(float weightOnEarth, int planet)
{

    switch (planet)
    {
    case 1:
        return weightOnEarth * 27.01;// calculates how much you weight on the Sun
        break;
    case 2:
        return weightOnEarth * 0.38;// calculates how much you weight on Mercury
        break;
    case 3:
        return weightOnEarth * 0.91;// calculates how much you weight on Venus
        break;
    case 4:
        return weightOnEarth * 0.166;// calculates how much you weight on the Moon
        break;
    case 5:
        return weightOnEarth * 0.38;// calculates how much you weight on Mars
        break;
    case 6:
        return weightOnEarth * 2.34;// calculates how much you weight on Jupiiter
        break;

    case 7:
        return weightOnEarth * 1.06;// calculates how much you weight on Saturn
        break;
    case 8:
        return weightOnEarth * 0.92;// calculates how much you weight on Uranus
        break;
    case 9:
        return weightOnEarth * 1.19;// calculates how much you weight on Neptune
        break;
    case 10:
        return weightOnEarth * 0.06;// calculates how much you weight on Pluto
        break;
    default:
        cout << "Invalid input" << endl;// What to do if the inuput is different than the cases
        return 0;
    }

}

// Fucntion to find the speed using equal acceleration formula
int equalAccelerationSpeed(int Vo, int a, int t)
{

    return Vo + a * t;
    // Returns the value
}
// Fucntion to find the starting speed using equal acceleration formula
int equalAccelerationStartingSpeed(int V, int a, int t)
{

    return V - a * t;
    // Returns the value
}
// Fucntion to find the acceleration using equal acceleration formula
int equalAccelerationAcceleration(int V, int Vo, int t)
{

    return (V - Vo) / t;
    // Returns the value
}
// Fucntion to find the time using equal acceleration formula
int equalAccelerationTime(int V, int Vo, int a)
{

    return (V - Vo) / a;
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
	 // Returns the value
}
// Function to find the speed using free faling formula
float freeFaling(float t)
{
    float g = 9.8;
    return (g * t);
	 // Returns the value
}
// Function to find the speed using free faling formula
float freeFalingTime(float V)
{
    float g = 9.8;
    return (V / g);
	 // Returns the value
}

int main()
{
	int number1;
	int number2;
	int number3;
}
