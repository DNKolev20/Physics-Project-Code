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
    case 10:
        return weightOnEarth * 27.01; // calculates how much you weight on the Sun
        break;
    case 1:
        return weightOnEarth * 0.38; // calculates how much you weight on Mercury
        break;
    case 2:
        return weightOnEarth * 0.91; // calculates how much you weight on Venus
        break;
    case 9:
        return weightOnEarth * 0.166; // calculates how much you weight on the Moon
        break;
    case 3:
        return weightOnEarth * 0.38; // calculates how much you weight on Mars
        break;
    case 4:
        return weightOnEarth * 2.34; // calculates how much you weight on Jupiter
        break;
    case 5:
        return weightOnEarth * 1.06; // calculates how much you weight on Saturn
        break;
    case 6:
        return weightOnEarth * 0.92; // calculates how much you weight on Uranus
        break;
    case 7:
        return weightOnEarth * 1.19; // calculates how much you weight on Neptune
        break;
    case 8:
        return weightOnEarth * 0.06; // calculates how much you weight on Pluto
        break;
    default:
        cout << "Invalid input" << endl; // What to do if the input is different from the cases
        return 0;
    }
}

// Function that calculates how much a person weights on other planets
float speedEqualIncrease(int Vo, int a, int t)
{
    return Vo + a * t;
}

// Function that calculates the distance from the moment of accelerating to the final speed
float pathEqualIncrease(int Vo, int a, int t)
{
    return Vo * t + ((a * t * t) / 2);
}




// Function that calculates the final speed of a vehicle with a larger starting speed
float speedEqualDecrease(int Vo, int a, int t)
{
    return Vo - a * t;
}

// Function that calculates the distance from the moment of accelerating to the final speed
float pathEqualDecrease(int Vo, int a, int t)
{
    return Vo * t - ((a * t * t) / 2);
}

// Function that calculates the time needed for a vehicle to stop
float stopTime(int Vo, int a)
{
    return Vo / a;
}

// Function that calculates the stopping distance of a vehicle
float stoppingDistance(int Vo, int a)
{
    return (Vo * Vo) / (2 * a);
}




// Function that finds the path length using the free falling path formula
float freeFallingPath(float t)
{
    float g = 9.8;
    return (g * t * t) / 2;
    // Returns the value
}

// Function that finds the path length on Mercury using the free falling formula
float freeFallingPathMercury(float t)
{
    float g = 3.61;
    return (g * t * t) / 2;
    // Returns the value
}

// Function that finds the path length on Venus using the free falling formula
float freeFallingPathVenus(float t)
{
    float g = 8.83;
    return (g * t * t) / 2;
    // Returns the value
}

// Function that finds the path length on Mars using the free falling formula
float freeFallingPathMars(float t)
{
    float g = 3.75;
    return (g * t * t) / 2;
    // Returns the value
}

// Function that finds the path length on Jupiter using the free falling formula
float freeFallingPathJupiter(float t)
{
    float g = 26.0;
    return (g * t * t) / 2;
    // Returns the value
}

// Function that finds the path length on Saturn using the free falling formula
float freeFallingPathSaturn(float t)
{
    float g = 11.2;
    return (g * t * t) / 2;
    // Returns the value
}

// Function that finds the path length on Uranus using the free falling formula
float freeFallingPathUranus(float t)
{
    float g = 10.5;
    return (g * t * t) / 2;
    // Returns the value
}

// Function that finds the path length on Neptune using the free falling formula
float freeFallingPathNeptune(float t)
{
    float g = 13.3;
    return (g * t * t) / 2;
    // Returns the value
}

// Function that finds the path length on Pluto using the free falling formula
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

// Function that finds the speed on Mercury using the free falling formula
float freeFallingMercury(float t)
{
    float g = 3.61;
    return (g * t);
    // Returns the value
}

// Function that finds the speed on Venus using the free falling formula
float freeFallingVenus(float t)
{
    float g = 8.83;
    return (g * t);
    // Returns the value
}

// Function that finds the speed on Mars using the free falling formula
float freeFallingMars(float t)
{
    float g = 3.75;
    return (g * t);
    // Returns the value
}

// Function that finds the speed on Jupiter using the free falling formula
float freeFallingJupiter(float t)
{
    float g = 26.0;
    return (g * t);
    // Returns the value
}

// Function that finds the speed on Saturn using the free falling formula
float freeFallingSaturn(float t)
{
    float g = 11.2;
    return (g * t);
    // Returns the value
}

// Function that finds the speed on Uranus using the free falling formula
float freeFallingUranus(float t)
{
    float g = 10.5;
    return (g * t);
    // Returns the value
}

// Function that finds the speed on Neptune using the free falling formula
float freeFallingNeptune(float t)
{
    float g = 13.3;
    return (g * t);
    // Returns the value
}

// Function that finds the speed on Pluto using the free falling formula
float freeFallingPluto(float t)
{
    float g = 0.61;
    return (g * t);
    // Returns the value
}



// Function that finds the time using the free falling formula
float freeFallingTime(float V)
{
    float g = 9.8;
    return (V / g);
    // Returns the value
}

// Function that finds the time on Mercury using the free falling formula
float freeFallingTimeMercury(float V)
{
    float g = 3.61;
    return (V / g);
    // Returns the value
}

// Function that finds the time on Venus using the free falling formula
float freeFallingTimeVenus(float V)
{
    float g = 8.83;
    return (V / g);
    // Returns the value
}

// Function that finds the time on Mars using the free falling formula
float freeFallingTimeMars(float V)
{
    float g = 3.75;
    return (V / g);
    // Returns the value
}

// Function that finds the time on Jupiter using the free falling formula
float freeFallingTimeJupiter(float V)
{
    float g = 26.0;
    return (V / g);
    // Returns the value
}

// Function that finds the time on Saturn using the free falling formula
float freeFallingTimeSaturn(float V)
{
    float g = 11.2;
    return (V / g);
    // Returns the value
}

// Function that finds the time on Uranus using the free falling formula
float freeFallingTimeUranus(float V)
{
    float g = 10.5;
    return (V / g);
    // Returns the value
}

// Function that finds the time on Neptune using the free falling formula
float freeFallingTimeNeptune(float V)
{
    float g = 13.3;
    return (V / g);
    // Returns the value
}

// Function that finds the time on Pluto using the free falling formula
float freeFallingTimePluto(float V)
{
    float g = 0.61;
    return (V / g);
    // Returns the value
}



// Function that converts seconds to minutes
float convertSecondsToMinutes(float cnumber)
{
    return cnumber / 60;
    // Returns the value
}

// Function that converts minutes to seconds
float convertMinutesToSeconds(float cnumber)
{
    return cnumber * 60;
    // Returns the value
}

// Function that converts meters per second to kilometers per hour
float convertMsToKmH(float cnumber)
{
    return cnumber * 3.6;
    // Returns the value
}

// Function that converts kilometers per hour to meters per second
float convertKmhToMs(float cnumber)
{
    return cnumber / 3.6;
    // Returns the value
}

// Function that converts meters to kilometers
float convertMetersToKilometers(float cnumber)
{
    return cnumber / 1000;
    // Returns the value
}

// Function that converts kilometers to meters
float convertKilometersToMeters(float cnumber)
{
    return cnumber * 1000;
    // Returns the value
}





int main()
{
    int FormulaNumber;
    int FormulaNumber2;
    int PlanetNumber;
    int ConvertNumber;
    int Weight;
    int InputChecker = 0;
    int startingSpeed;
    int acceleration;

    char FormulaLetter;
    char FormulaLetter2;
    char FinalAnswer;

    float ConvertNumber2;
    float time;
    float speed;

    cout << endl;
    cout << "Select the formulas that you want to see or use by typing the number corresponding to it: " << endl;
    cout << endl;
    cout << "1. Free Falling (Shows all the formulas related to free falling)" << endl;
    cout << "2. Free Falling On Other Plantes (Shows all the formulas related to free falling for different planets)" << endl;
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
        cout << "S = (g * t * t) / 2" << endl;
        cout << "V = g * t" << endl;
        cout << "t = V / g" << endl;
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
            cout << "S = (g * t * t) / 2" << endl;
            cout << "V = g * t" << endl;
            cout << "t = V / g" << endl;
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
            cout << "S = (g * t * t) / 2" << endl;
            cout << "V = g * t" << endl;
            cout << "t = V / g" << endl;
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
            cout << "S = (g * t * t) / 2" << endl;
            cout << "V = g * t" << endl;
            cout << "t = V / g" << endl;
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
            cout << "S = (g * t * t) / 2" << endl;
            cout << "V = g * t" << endl;
            cout << "t = V / g" << endl;
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
            cout << "S = (g * t * t) / 2" << endl;
            cout << "V = g * t" << endl;
            cout << "t = V / g" << endl;
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
            cout << "S = (g * t * t) / 2" << endl;
            cout << "V = g * t" << endl;
            cout << "t = V / g" << endl;
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
            cout << "S = (g * t * t) / 2" << endl;
            cout << "V = g * t" << endl;
            cout << "t = V / g" << endl;
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
            cout << "S = (g * t * t) / 2" << endl;
            cout << "V = g * t" << endl;
            cout << "t = V / g" << endl;
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
        cout << "Select a planet/star by typing its corresponding number: " << endl;
        cout << "1. Mercury" << endl;
        cout << "2. Venus" << endl;
        cout << "3. Mars" << endl;
        cout << "4. Jupiter" << endl;
        cout << "5. Saturn" << endl;
        cout << "6. Uranus" << endl;
        cout << "7. Neptune" << endl;
        cout << "8. Pluto" << endl;
        cout << "9. The Moon" << endl;
        cout << "10. The Sun" << endl;
        cout << endl;

        cin >> PlanetNumber;
        cout << endl;

        if (PlanetNumber != 1 && PlanetNumber != 2 && PlanetNumber != 3 && PlanetNumber != 4 && PlanetNumber != 5 && PlanetNumber != 6 && PlanetNumber != 7 && PlanetNumber != 8 && PlanetNumber != 9 && PlanetNumber != 10)
        {
            for (int i = 1; i > InputChecker; i++)
            {
                cout << "Incorrect Input! Try again: ";
                cin >> FormulaLetter;

                if (PlanetNumber == 1 || PlanetNumber == 2 || PlanetNumber == 3 || PlanetNumber == 4 || PlanetNumber == 5 || PlanetNumber == 6 || PlanetNumber == 7 || PlanetNumber == 8 || PlanetNumber == 9 || PlanetNumber == 10)
                {
                    cout << endl;
                    cout << "Correct Input!" << endl;
                    InputChecker = i + 1;
                    cout << endl;
                }
            }
        }

        cout << "Enter your weight (in kg): ";
        cin >> Weight;

        if (PlanetNumber == 1)
        {
            cout << "You will weight: " << weightOnOtherPlanets(Weight, PlanetNumber) << " kg";
        }
        else if (PlanetNumber == 2)
        {
            cout << "You will weight: " << weightOnOtherPlanets(Weight, PlanetNumber) << " kg";
        }
        else if (PlanetNumber == 3)
        {
            cout << "You will weight: " << weightOnOtherPlanets(Weight, PlanetNumber) << " kg";
        }
        else if (PlanetNumber == 4)
        {
            cout << "You will weight: " << weightOnOtherPlanets(Weight, PlanetNumber) << " kg";
        }
        else if (PlanetNumber == 5)
        {
            cout << "You will weight: " << weightOnOtherPlanets(Weight, PlanetNumber) << " kg";
        }
        else if (PlanetNumber == 6)
        {
            cout << "You will weight: " << weightOnOtherPlanets(Weight, PlanetNumber) << " kg";
        }
        else if (PlanetNumber == 7)
        {
            cout << "You will weight: " << weightOnOtherPlanets(Weight, PlanetNumber) << " kg";
        }
        else if (PlanetNumber == 8)
        {
            cout << "You will weight: " << weightOnOtherPlanets(Weight, PlanetNumber) << " kg";
        }
        else if (PlanetNumber == 9)
        {
            cout << "You will weight: " << weightOnOtherPlanets(Weight, PlanetNumber) << " kg";
        }
        else if (PlanetNumber == 10)
        {
            cout << "You will weight: " << weightOnOtherPlanets(Weight, PlanetNumber) << " kg";
        }
    }





    else if (FormulaNumber == 4)
    {
        cout << "Select wich formulas you want to use by typing its corresponding number: " << endl;
        cout << "1. Increasing Speed" << endl;
        cout << "2. Decreasing Speed" << endl;
        cout << endl;

        cin >> FormulaNumber;
        cout << endl;

        if (FormulaNumber == 1)
        {
            cout << "Which formula do you want to use? (Select by typing the letter of the element that you are looking for): " << endl;
            cout << endl;
            cout << "V = Vo + a * t" << endl;
            cout << "S = Vo * t + (a * t * t) / 2" << endl;
            cout << endl;
            cin >> FormulaLetter;
            cout << endl;

            if (FormulaLetter != 'V' && FormulaLetter != 'S')
            {
                for (int i = 1; i > InputChecker; i++)
                {
                    cout << "Incorrect Input! Try again: ";
                    cin >> FormulaLetter;

                    if (FormulaLetter == 'S' || FormulaLetter == 'V')
                    {
                        cout << endl;
                        cout << "Correct Input!" << endl;
                        InputChecker = i + 1;
                        cout << endl;
                    }
                }
            }

            if (FormulaLetter == 'V')
            {
                cout << "Enter the values for: " << endl;

                cout << "Vo (in m/s) = ";
                cin >> startingSpeed;

                cout << "a (int m/s2) = ";
                cin >> acceleration;

                cout << "t (int seconds) = ";
                cin >> time;

                cout << endl;

                cout << "V = Vo + a * t" << endl;
                cout << "V = " << speedEqualIncrease(startingSpeed, acceleration, time) << " m/s";
            }

            else if (FormulaLetter == 'S')
            {
                cout << "Enter the values for: " << endl;

                cout << "Vo (in m/s) = ";
                cin >> startingSpeed;

                cout << "a (int m/s2) = ";
                cin >> acceleration;

                cout << "t (int seconds) = ";
                cin >> time;

                cout << endl;

                cout << "S = Vo * t + (a * t * t) / 2" << endl;
                cout << "S = " << pathEqualIncrease(startingSpeed, acceleration, time) << " m";
            }
        }



        else if (FormulaNumber == 2)
        {
            cout << "Which formula do you want to use? (Select by typing ONLY the letter of the element that you are looking for): " << endl;
            cout << endl;
            cout << "V = Vo - a * t" << endl;
            cout << "S = Vo * t - (a * t * t) / 2" << endl;
            cout << "S = (Vo * Vo) / (2 * a)" << endl;
            cout << "t0 = Vo / a" << endl;
            cout << endl;
            cin >> FormulaLetter;
            cout << endl;

            if (FormulaLetter != 'V' && FormulaLetter != 'S' && FormulaLetter != 't')
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

            if (FormulaLetter == 'V')
            {
                cout << "Enter the values for: " << endl;

                cout << "Vo (in m/s) = ";
                cin >> startingSpeed;

                cout << "a (int m/s2) = ";
                cin >> acceleration;

                cout << "t (int seconds) = ";
                cin >> time;

                cout << endl;

                cout << "V = Vo - a * t" << endl;
                cout << "V = " << speedEqualDecrease(startingSpeed, acceleration, time) << " m/s";
            }

            else if (FormulaLetter == 'S')
            {
                cout << "Select the formula by typing its corresponding number: " << endl;
                cout << "1. S = Vo * t - (a * t * t) / 2" << endl;
                cout << "2. S = (Vo * Vo) / (2 * a)" << endl;
                cout << endl;

                cin >> FormulaNumber2;
                cout << endl;

                if (FormulaNumber2 != 1 && FormulaNumber2 != 2)
                {
                    for (int i = 1; i > InputChecker; i++)
                    {
                        cout << "Incorrect Input! Try again: ";
                        cin >> FormulaLetter;

                        if (FormulaNumber2 == 1 || FormulaNumber2 == 2)
                        {
                            cout << endl;
                            cout << "Correct Input!" << endl;
                            InputChecker = i + 1;
                            cout << endl;
                        }
                    }
                }

                if (FormulaNumber2 == 1)
                {
                    cout << "Enter the values for: " << endl;

                    cout << "Vo (in m/s) = ";
                    cin >> startingSpeed;

                    cout << "a (in m/s2) = ";
                    cin >> acceleration;

                    cout << "t (in seconds) = ";
                    cin >> time;

                    cout << endl;

                    cout << "S = Vo * t - (a * t * t) / 2" << endl;
                    cout << "S = " << pathEqualDecrease(startingSpeed, acceleration, time) << " m";
                }

                if (FormulaNumber2 == 2)
                {
                    cout << "Enter the values for: " << endl;

                    cout << "Vo (in m/s) = ";
                    cin >> startingSpeed;

                    cout << "a (in m/s2) = ";
                    cin >> acceleration;

                    cout << endl;

                    cout << "S = (Vo * Vo) / (2 * a)" << endl;
                    cout << "S = " << stoppingDistance(startingSpeed, acceleration) << " m";
                }
            }

            else if (FormulaLetter == 't')
            {
                cout << "Enter the values for: " << endl;

                cout << "Vo (in m/s) = ";
                cin >> startingSpeed;

                cout << "a (int m/s2) = ";
                cin >> acceleration;

                cout << endl;

                cout << "t0 = Vo / a" << endl;
                cout << "t0 = " << stopTime(startingSpeed, acceleration) << " s";
            }
        }

    }





    else if (FormulaNumber == 5)
    {
        cout << "Select an option by typing its corresponding number: " << endl;
        cout << "1. Turn seconds to minutes" << endl;
        cout << "2. Turn minutes to seconds" << endl;
        cout << "3. Turn m/s to km/h" << endl;
        cout << "4. Turn km/h to m/s" << endl;
        cout << "5. Turn meters to kilometers" << endl;
        cout << "6. Convert kilometers to meters" << endl;
        cout << endl;

        cin >> ConvertNumber;
        cout << endl;

        if (ConvertNumber != 1 && ConvertNumber != 2 && ConvertNumber != 3 && ConvertNumber != 4 && ConvertNumber != 5 && ConvertNumber != 6)
        {
            for (int i = 1; i > InputChecker; i++)
            {
                cout << "Incorrect Input! Try again: ";
                cin >> FormulaLetter;

                if (ConvertNumber == 1 || ConvertNumber == 2 || ConvertNumber == 3 || ConvertNumber == 4 || ConvertNumber == 5 || ConvertNumber == 6)
                {
                    cout << endl;
                    cout << "Correct Input!" << endl;
                    InputChecker = i + 1;
                    cout << endl;
                }
            }
        }

        if (ConvertNumber == 1)
        {
            cout << "Seconds = ";
            cin >> ConvertNumber2;

            cout << ConvertNumber2 << " seconds = " << convertSecondsToMinutes(ConvertNumber2) << " minutes";
        }
        if (ConvertNumber == 2)
        {
            cout << "Minutes = ";
            cin >> ConvertNumber2;

            cout << ConvertNumber2 << " minutes = " << convertMinutesToSeconds(ConvertNumber2) << " seconds";
        }
        if (ConvertNumber == 3)
        {
            cout << "m/s = ";
            cin >> ConvertNumber2;

            cout << ConvertNumber2 << " m/s = " << convertMsToKmH(ConvertNumber2) << " km/h";
        }
        if (ConvertNumber == 4)
        {
            cout << "km/h = ";
            cin >> ConvertNumber2;

            cout << ConvertNumber2 << " km/h = " << convertKmhToMs(ConvertNumber2) << " m/s";
        }
        if (ConvertNumber == 5)
        {
            cout << "Meters = ";
            cin >> ConvertNumber2;

            cout << ConvertNumber2 << " m = " << convertMetersToKilometers(ConvertNumber2) << " km";
        }
        if (ConvertNumber == 6)
        {
            cout << "Kilometers = ";
            cin >> ConvertNumber2;

            cout << ConvertNumber2 << " km = " << convertKilometersToMeters(ConvertNumber2) << " m";
        }
    }

    cout << endl;
    cout << endl;
    cout << "Try again? (Select by typing 'Y' for yes and 'N' for no): " << endl;
    cin >> FinalAnswer;

    if (FinalAnswer == 'Y')
    {
        main();
    }
    else if (FinalAnswer == 'N')
    {
        cout << endl;
        cout << "Goodbye!";
        cout << endl;
        return 0;
    }
}
