#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

//Function that calculates how much a person weights on other planets
float weightOnOtherPlanets(float weightOnEarth, int planet)
{
    switch (planet)
    {
    case 1:
        return weightOnEarth * 27.01; // calculates how much you weight on the Sun
        break;
    case 2:
        return weightOnEarth * 0.38; // calculates how much you weight on Mercury
        break;
    case 3:
        return weightOnEarth * 0.91; // calculates how much you weight on Venus
        break;
    case 4:
        return weightOnEarth * 0.166; // calculates how much you weight on the Moon
        break;
    case 5:
        return weightOnEarth * 0.38; // calculates how much you weight on Mars
        break;
    case 6:
        return weightOnEarth * 2.34; // calculates how much you weight on Jupiiter
        break;
    case 7:
        return weightOnEarth * 1.06; // calculates how much you weight on Saturn
        break;
    case 8:
        return weightOnEarth * 0.92; // calculates how much you weight on Uranus
        break;
    case 9:
        return weightOnEarth * 1.19; // calculates how much you weight on Neptune
        break;
    case 10:
        return weightOnEarth * 0.06; // calculates how much you weight on Pluto
        break;
    default:
        cout << "Invalid input" << endl; // What to do if the input is different from the cases
        return 0;
    }
}

// Function to find distance of the path a vehicle has passed
double pathDistance(int Vo, int a, int t)
{
    return Vo * t - (a * pow(t, 2) / 2);
    // Returns the value
}

// Function to find the time needed for a vehicle to stop
double timeForBraking(double Vo, double a) 
{
    return Vo / a;
    // Returns the value
}

// Function to find the distance needed for a vehicle to stop
double stoppingDistance(int Vo, int a) 
{
    return pow(Vo, 2) / (2 * a);
    // Returns the value
}

// Function that finds the speed using the equal acceleration formula
int equalAccelerationSpeed(int Vo, int a, int t)
{

    return Vo + a * t;
    // Returns the value
}


// Function that finds the starting speed using the equal acceleration formula
int equalAccelerationStartingSpeed(int V, int a, int t)
{

    return V - a * t;
    // Returns the value
}


// Function that finds the acceleration using the equal acceleration formula
int equalAccelerationAcceleration(int V, int Vo, int t)
{

    return (V - Vo) / t;
    // Returns the value
}


// Function that finds the time using the equal acceleration formula
int equalAccelerationTime(int V, int Vo, int a)
{

    return (V - Vo) / a;
    // Returns the value
}


// Function that finds the path length using the equal acceleration path formula
int equalAccelerationPath(int Vo, int a, int t)
{
    return (Vo + a * t)/2;
    // Returns the value
}




// Function that finds the path length using the free falling path formula
float freeFallingPath(float t)
{
    float g = 9.8;
    return (g * t * t) / 2;
    // Returns the value
}


// Function that finds the speed using the free falling formula
float freeFalling(float t)
{
    float g = 9.8;
    return (g * t);
    // Returns the value
}


// Function that finds the speed using the free falling formula
float freeFallingTime(float V)
{
    float g = 9.8;
    return (V / g);
    // Returns the value
}




int main()
{
    int FormulaNumber;
    int InputChecker = 0;
    char FormulaLetter;
    float time;
    float speed;

    cout << "Select the formulas that you want to see and use by typing the number corresponding to it: " << endl;
    cout << endl;
    cout << "1. Free Falling (Shows all the formulas connected to free falling)" << endl;
    cout << "2. Equal Acceleration (Shows all the formulas connected to equal acceleration) " << endl;
    cout << "3. Weight Calculator (Shows how much you weight on other planets)" << endl;
    cout << endl;

    cin >> FormulaNumber;
    cout << endl;

    if (FormulaNumber != 1 && FormulaNumber != 2 && FormulaNumber != 3)
    {
        for (int i = 1; i > InputChecker; i++)
        {
            cout << "Incorrect Input! Try again: ";
            cin >> FormulaNumber;

            if (FormulaNumber == 1 || FormulaNumber == 2 || FormulaNumber == 3)
            {
                cout << endl;
                cout << "Correct Input!" << endl;
                InputChecker = i + 1;
                cout << endl;
            }
        }
    }
    
    InputChecker = 0;
	
	

    if (FormulaNumber == 1)
    {
        cout << "1. S = (g * t * t) / 2" << endl;
        cout << "2. V = g * t" << endl;
        cout << "3. t = V / g" << endl;
        cout << endl;

        cout << "Which formula do you want to use? (Select by typing the letter of the element that you are looking for): " << endl;
        cout << endl;

        cin >> FormulaLetter;
        cout << endl;

        if (FormulaLetter != 'S' && FormulaLetter != 'V' && FormulaLetter != 't')
        {
            for(int i = 1; i > InputChecker; i++)
            {
                cout << "Incorrect Input! Try again: ";
                cin >> FormulaLetter;

                if (FormulaLetter == 'S' || FormulaLetter == 'V' || FormulaLetter == 't')
                {
                    cout << endl;
                    cout << "Correct Input!" << endl;
                    InputChecker = i + 1;
                    cout << endl;
                }
            }
        }
	
	    
	    
        if (FormulaLetter == 'S')
        {
            cout << "Enter the values for: " << endl;

            cout << "t (in seconds) = ";
            cin >> time;
            cout << "g = 9.8 m/s2" << endl;
            cout << endl;

            cout << "S = (g * t * t) / 2" << endl;  
            cout << "S = " << freeFallingPath(time) << " m";
        }
	    
	    

        if (FormulaLetter == 'V')
        {
            cout << "Enter the values for: " << endl;

            cout << "t (in seconds) = ";
            cin >> time;
            cout << "g = 9.8 m/s2" << endl;
            cout << endl;

            cout << "V = g * t" << endl;
            cout << "V = " << freeFalling(time) << " m/s";
        }
	    
	    

        if (FormulaLetter == 't')
        {
            cout << "Enter the values for: " << endl;

            cout << "V (in m/s) = ";
            cin >> speed;
            cout << "g = 9.8 m/s2" << endl;
            cout << endl;

            cout << "t = V / g" << endl;
            cout << "t = " << freeFallingTime(speed) << " s";
        }
	    
	    
	    
    }
    else if (FormulaNumber == 2)
    {
        return 0;
    }
    else if (FormulaNumber == 3)
    {
        return 0;
    }
}
