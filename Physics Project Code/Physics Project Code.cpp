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
    return (Vo + a * t) / 2;
    // Returns the value
}





// Function that finds the path length using the free falling path formula
float freeFallingPath(float t)
{
    float g = 9.8;
    return (g * t * t) / 2;
    // Returns the value
}
float freeFallingPathMercury(float t)
{
    float g = 3.61;
    return (g * t * t) / 2;
    // Returns the value
}
float freeFallingPathVenus(float t)
{
    float g = 8.83;
    return (g * t * t) / 2;
    // Returns the value
}
float freeFallingPathMars(float t)
{
    float g = 3.75;
    return (g * t * t) / 2;
    // Returns the value
}
float freeFallingPathJupiter(float t)
{
    float g = 26.0;
    return (g * t * t) / 2;
    // Returns the value
}
float freeFallingPathSaturn(float t)
{
    float g = 11.2;
    return (g * t * t) / 2;
    // Returns the value
}
float freeFallingPathUranus(float t)
{
    float g = 10.5;
    return (g * t * t) / 2;
    // Returns the value
}
float freeFallingPathNeptune(float t)
{
    float g = 13.3;
    return (g * t * t) / 2;
    // Returns the value
}
float freeFallingPathPluto(float t)
{
    float g = 0.61;
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
float freeFallingMercury(float t)
{
    float g = 3.61;
    return (g * t);
    // Returns the value
}
float freeFallingVenus(float t)
{
    float g = 8.83;
    return (g * t);
    // Returns the value
}
float freeFallingMars(float t)
{
    float g = 3.75;
    return (g * t);
    // Returns the value
}
float freeFallingJupiter(float t)
{
    float g = 26.0;
    return (g * t);
    // Returns the value
}
float freeFallingSaturn(float t)
{
    float g = 11.2;
    return (g * t);
    // Returns the value
}
float freeFallingUranus(float t)
{
    float g = 10.5;
    return (g * t);
    // Returns the value
}
float freeFallingNeptune(float t)
{
    float g = 13.3;
    return (g * t);
    // Returns the value
}
float freeFallingPluto(float t)
{
    float g = 0.61;
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
float freeFallingTimeMercury(float V)
{
    float g = 3.61;
    return (V / g);
    // Returns the value
}
float freeFallingTimeVenus(float V)
{
    float g = 8.83;
    return (V / g);
    // Returns the value
}
float freeFallingTimeMars(float V)
{
    float g = 3.75;
    return (V / g);
    // Returns the value
}
float freeFallingTimeJupiter(float V)
{
    float g = 26.0;
    return (V / g);
    // Returns the value
}
float freeFallingTimeSaturn(float V)
{
    float g = 11.2;
    return (V / g);
    // Returns the value
}
float freeFallingTimeUranus(float V)
{
    float g = 10.5;
    return (V / g);
    // Returns the value
}
float freeFallingTimeNeptune(float V)
{
    float g = 13.3;
    return (V / g);
    // Returns the value
}
float freeFallingTimePluto(float V)
{
    float g = 0.61;
    return (V / g);
    // Returns the value
}





int main()
{
    int FormulaNumber;
    int PlanetNumber;
    int InputChecker = 0;
    char FormulaLetter;
    float time;
    float speed;

    cout << "Select the formulas that you want to see or use by typing the number corresponding to it: " << endl;
    cout << endl;
    cout << "1. Free Falling (Shows all the formulas related to free falling)" << endl;
    cout << "2. Free Falling In Other Plantes (Shows all the formulas related to free falling for different planets)" << endl;
    cout << "3. Weight Calculator (Shows how much you weight on other planets)" << endl;
    cout << "4. Equal Acceleration (Shows all the formulas related to equal acceleration) " << endl;
    cout << "5. Convert Units (Converts different elements)" << endl;
    cout << endl;

    cin >> FormulaNumber;
    cout << endl;

    if (FormulaNumber != 1 && FormulaNumber != 2 && FormulaNumber != 3 && FormulaNumber != 4 && FormulaNumber != 5)
    {
        for (int i = 1; i > InputChecker; i++)
        {
            cout << "Incorrect Input! Try again: ";
            cin >> FormulaNumber;

            if (FormulaNumber == 1 || FormulaNumber == 2 || FormulaNumber == 3 || FormulaNumber == 4 || FormulaNumber == 5)
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
        cout << "Select a planet by typing its corresponding number: " << endl;
        cout << "1. Mercury (g = 3.61 m/s2)" << endl;
        cout << "2. Venus (g = 8.83 m/s2)" << endl;
        cout << "3. Mars (g = 3.75 m/s2)" << endl;
        cout << "4. Jupiter (g = 26 m/s2)" << endl;
        cout << "5. Saturn (g = 11.2 m/s2)" << endl;
        cout << "6. Uranus (g = 10.5 m/s2)" << endl;
        cout << "7. Neptune (g = 13.3 m/s2)" << endl;
        cout << "8. Pluto (g = 0.61 m/s2)" << endl;
        cout << endl;

        cin >> PlanetNumber;
        cout << endl;

        if (PlanetNumber != 1 && PlanetNumber != 2 && PlanetNumber != 3 && PlanetNumber != 4 && PlanetNumber != 5 && PlanetNumber != 6 && PlanetNumber != 7 && PlanetNumber != 8)
        {
            for (int i = 1; i > InputChecker; i++)
            {
                cout << "Incorrect Input! Try again: ";
                cin >> FormulaLetter;

                if (PlanetNumber == 1 || PlanetNumber == 2 || PlanetNumber == 3 || PlanetNumber == 4 || PlanetNumber == 5 || PlanetNumber == 6 || PlanetNumber == 7 || PlanetNumber == 8)
                {
                    cout << endl;
                    cout << "Correct Input!" << endl;
                    InputChecker = i + 1;
                    cout << endl;
                }
            }
        }



        if (PlanetNumber == 1)
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
                for (int i = 1; i > InputChecker; i++)
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
                cout << "g = 3.61 m/s2" << endl;
                cout << endl;

                cout << "S = (g * t * t) / 2" << endl;
                cout << "S = " << freeFallingPathMercury(time) << " m";
            }

            if (FormulaLetter == 'V')
            {
                cout << "Enter the values for: " << endl;

                cout << "t (in seconds) = ";
                cin >> time;
                cout << "g = 3.61 m/s2" << endl;
                cout << endl;

                cout << "V = g * t" << endl;
                cout << "V = " << freeFallingMercury(time) << " m/s";
            }

            if (FormulaLetter == 't')
            {
                cout << "Enter the values for: " << endl;

                cout << "V (in m/s) = ";
                cin >> speed;
                cout << "g = 3.61 m/s2" << endl;
                cout << endl;

                cout << "t = V / g" << endl;
                cout << "t = " << freeFallingTimeMercury(speed) << " s";
            }
        }



        else if (PlanetNumber == 2)
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
                for (int i = 1; i > InputChecker; i++)
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
                cout << "g = 8.83 m/s2" << endl;
                cout << endl;

                cout << "S = (g * t * t) / 2" << endl;
                cout << "S = " << freeFallingPathVenus(time) << " m";
            }

            if (FormulaLetter == 'V')
            {
                cout << "Enter the values for: " << endl;

                cout << "t (in seconds) = ";
                cin >> time;
                cout << "g = 8.83 m/s2" << endl;
                cout << endl;

                cout << "V = g * t" << endl;
                cout << "V = " << freeFallingVenus(time) << " m/s";
            }

            if (FormulaLetter == 't')
            {
                cout << "Enter the values for: " << endl;

                cout << "V (in m/s) = ";
                cin >> speed;
                cout << "g = 8.83 m/s2" << endl;
                cout << endl;

                cout << "t = V / g" << endl;
                cout << "t = " << freeFallingTimeVenus(speed) << " s";
            }
        }



        else if (PlanetNumber == 3)
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
                for (int i = 1; i > InputChecker; i++)
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
                cout << "g = 3.75 m/s2" << endl;
                cout << endl;

                cout << "S = (g * t * t) / 2" << endl;
                cout << "S = " << freeFallingPathMars(time) << " m";
            }

            if (FormulaLetter == 'V')
            {
                cout << "Enter the values for: " << endl;

                cout << "t (in seconds) = ";
                cin >> time;
                cout << "g = 3.75 m/s2" << endl;
                cout << endl;

                cout << "V = g * t" << endl;
                cout << "V = " << freeFallingMars(time) << " m/s";
            }

            if (FormulaLetter == 't')
            {
                cout << "Enter the values for: " << endl;

                cout << "V (in m/s) = ";
                cin >> speed;
                cout << "g = 3.75 m/s2" << endl;
                cout << endl;

                cout << "t = V / g" << endl;
                cout << "t = " << freeFallingTimeMars(speed) << " s";
            }
        }



        else if (PlanetNumber == 4)
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
                for (int i = 1; i > InputChecker; i++)
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
                cout << "g = 26 m/s2" << endl;
                cout << endl;

                cout << "S = (g * t * t) / 2" << endl;
                cout << "S = " << freeFallingPathJupiter(time) << " m";
            }

            if (FormulaLetter == 'V')
            {
                cout << "Enter the values for: " << endl;

                cout << "t (in seconds) = ";
                cin >> time;
                cout << "g = 26 m/s2" << endl;
                cout << endl;

                cout << "V = g * t" << endl;
                cout << "V = " << freeFallingJupiter(time) << " m/s";
            }

            if (FormulaLetter == 't')
            {
                cout << "Enter the values for: " << endl;

                cout << "V (in m/s) = ";
                cin >> speed;
                cout << "g = 26 m/s2" << endl;
                cout << endl;

                cout << "t = V / g" << endl;
                cout << "t = " << freeFallingTimeJupiter(speed) << " s";
            }
        }



        else if (PlanetNumber == 5)
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
                for (int i = 1; i > InputChecker; i++)
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
                cout << "g = 11.2 m/s2" << endl;
                cout << endl;

                cout << "S = (g * t * t) / 2" << endl;
                cout << "S = " << freeFallingPathSaturn(time) << " m";
            }

            if (FormulaLetter == 'V')
            {
                cout << "Enter the values for: " << endl;

                cout << "t (in seconds) = ";
                cin >> time;
                cout << "g = 11.2 m/s2" << endl;
                cout << endl;

                cout << "V = g * t" << endl;
                cout << "V = " << freeFallingSaturn(time) << " m/s";
            }

            if (FormulaLetter == 't')
            {
                cout << "Enter the values for: " << endl;

                cout << "V (in m/s) = ";
                cin >> speed;
                cout << "g = 11.2 m/s2" << endl;
                cout << endl;

                cout << "t = V / g" << endl;
                cout << "t = " << freeFallingTimeSaturn(speed) << " s";
            }
        }



        else if (PlanetNumber == 6)
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
                for (int i = 1; i > InputChecker; i++)
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
                cout << "g = 10.5 m/s2" << endl;
                cout << endl;

                cout << "S = (g * t * t) / 2" << endl;
                cout << "S = " << freeFallingPathUranus(time) << " m";
            }

            if (FormulaLetter == 'V')
            {
                cout << "Enter the values for: " << endl;

                cout << "t (in seconds) = ";
                cin >> time;
                cout << "g = 10.5 m/s2" << endl;
                cout << endl;

                cout << "V = g * t" << endl;
                cout << "V = " << freeFallingUranus(time) << " m/s";
            }

            if (FormulaLetter == 't')
            {
                cout << "Enter the values for: " << endl;

                cout << "V (in m/s) = ";
                cin >> speed;
                cout << "g = 10.5 m/s2" << endl;
                cout << endl;

                cout << "t = V / g" << endl;
                cout << "t = " << freeFallingTimeUranus(speed) << " s";
            }
        }



        else if (PlanetNumber == 7)
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
                for (int i = 1; i > InputChecker; i++)
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
                cout << "g = 13.3 m/s2" << endl;
                cout << endl;

                cout << "S = (g * t * t) / 2" << endl;
                cout << "S = " << freeFallingPathNeptune(time) << " m";
            }

            if (FormulaLetter == 'V')
            {
                cout << "Enter the values for: " << endl;

                cout << "t (in seconds) = ";
                cin >> time;
                cout << "g = 13.3 m/s2" << endl;
                cout << endl;

                cout << "V = g * t" << endl;
                cout << "V = " << freeFallingNeptune(time) << " m/s";
            }

            if (FormulaLetter == 't')
            {
                cout << "Enter the values for: " << endl;

                cout << "V (in m/s) = ";
                cin >> speed;
                cout << "g = 13.3 m/s2" << endl;
                cout << endl;

                cout << "t = V / g" << endl;
                cout << "t = " << freeFallingTimeNeptune(speed) << " s";
            }
        }



        else if (PlanetNumber == 8)
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
                for (int i = 1; i > InputChecker; i++)
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
                cout << "g = 0.61 m/s2" << endl;
                cout << endl;

                cout << "S = (g * t * t) / 2" << endl;
                cout << "S = " << freeFallingPathPluto(time) << " m";
            }

            if (FormulaLetter == 'V')
            {
                cout << "Enter the values for: " << endl;

                cout << "t (in seconds) = ";
                cin >> time;
                cout << "g = 0.61 m/s2" << endl;
                cout << endl;

                cout << "V = g * t" << endl;
                cout << "V = " << freeFallingPluto(time) << " m/s";
            }

            if (FormulaLetter == 't')
            {
                cout << "Enter the values for: " << endl;

                cout << "V (in m/s) = ";
                cin >> speed;
                cout << "g = 0.61 m/s2" << endl;
                cout << endl;

                cout << "t = V / g" << endl;
                cout << "t = " << freeFallingTimePluto(speed) << " s";
            }
        }

    }
    else if (FormulaNumber == 3)
    {
        return 0;
    }
    else if (FormulaNumber == 4)
    {
        return 0;
    }
    else if (FormulaNumber == 5)
    {
        return 0;
    }
}
