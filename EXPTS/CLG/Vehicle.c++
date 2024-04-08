#include <iostream>
using namespace std;

class Vehicle
{
private:
    int numWheels, maxGears, currentGears;
    bool carStatus;
    string color;
    float maxSpeed, currentSpeed;

public:
    Vehicle()
    {
        numWheels = 2;
        maxGears = 3;
        currentGears = 0;
        color = "";
        maxSpeed = 120;
        currentSpeed = 0;
        carStatus = false;
    }

    Vehicle(int numW, int maxG, string colour, float maxs)
    {
        if ((numW > 0 && maxG > 0 && maxs > 0) && colour != "")
        {
            numWheels = numW;
            maxGears = maxG;
            color = colour;
            maxSpeed = maxs;
            currentSpeed = 0;
            carStatus = false;
        }
    }

    int getWheels();
    int getMaxGears();
    float getSpeed();
    float getMaxSpeed();
    string getColor();
    int setSpeed(float Speed);
    bool getStatus();
    float increaseSpeed(float speedRate);
    float decreaseSpeed(float speedRate);
    int nextGear();
    int previousGear();
    int start();
    int stop();
};

int Vehicle::getWheels()
{
    return numWheels;
}

int Vehicle::getMaxGears()
{
    return maxGears;
}

float Vehicle::getSpeed()
{
    return currentSpeed;
}

float Vehicle::getMaxSpeed()
{
    return maxSpeed;
}

string Vehicle::getColor()
{
    return color;
}

int Vehicle::setSpeed(float speed)
{
    if (speed <= maxSpeed && speed > 0)
    {
        currentSpeed = speed;
        return 0;
    }
    else
        return -1;
}

bool Vehicle::getStatus()
{
    return carStatus;
}

float Vehicle::increaseSpeed(float speedRate)
{
    if (speedRate <= maxSpeed && carStatus && speedRate > 0)
    {
        currentSpeed += speedRate;
        return currentSpeed;
    }
    else
        return -1;
}

float Vehicle::decreaseSpeed(float speedRate)
{
    if (speedRate <= maxSpeed && carStatus && currentSpeed > 0 && speedRate > 0)
    {
        currentSpeed -= speedRate;
        return currentSpeed;
    }
    else
        return -1;
}

int Vehicle::nextGear()
{
    if (currentGears < maxGears)
    {
        currentGears++;
        return currentGears;
    }
    else
    {
        return -1;
    }
}

int Vehicle::previousGear()
{
    if (currentGears > 0)
    {
        currentGears--;
        return currentGears;
    }
    else
    {
        return -1;
    }
}

int Vehicle::start()
{
    if (!carStatus)
    {
        carStatus = true;
        return 0;
    }
    else
    {
        return -2; // Already started
    }
}

int Vehicle::stop()
{
    if (carStatus)
    {
        carStatus = false;
        return 0;
    }
    else
    {
        return -3; // Already stopped
    }
}

int main()
{
    Vehicle V;
    float speedPrev;
    int result;
    while (true)
    {
        int choice;
        cout << "1. Start\n2. Stop\n3. Increase Speed\n4. Decrease Speed\n5. Next Gear\n6. Previous Gear\nWhat Do You Want to Perform: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            result = V.start();
            if (result == 0)
                cout << "Car Started!" << endl;
            else if (result == -2)
                cout << "Car is already started!" << endl;
            break;
        case 2:
            result = V.stop();
            if (result == 0)
                cout << "Car Stopped!" << endl;
            else if (result == -3)
                cout << "Car is already stopped!" << endl;
            break;
        case 3:
            float speedRate;
            cout << "Enter the rate of speed increase: ";
            cin >> speedRate;
            speedPrev = V.getSpeed();
            result = V.increaseSpeed(speedRate);
            if (result != -1)
                cout << "Previous Speed Was: " << speedPrev << "\nYour Current Speed is: " << result << endl;
            else
                cout << "Car not Started Yet!" << endl;
            break;
        case 4:
            cout << "Enter the rate of speed decrease: ";
            cin >> speedRate;
            speedPrev = V.getSpeed();

            result = V.decreaseSpeed(speedRate);
            if (result != -1)
                cout << "Previous Speed Was: " << speedPrev << "\nYour Current Speed is: " << result << endl;
            else
                cout << "Error Ocurred:) \tCannot Decrease Speed!" << endl;
            break;
        case 5:
            result = V.nextGear();
            if (result != -1)
                cout << "Gear Incremented! Current Gear is: " << result << endl;
            else
                cout << "Cannot Shift to Next Gear!" << endl;
            break;
        case 6:
            result = V.previousGear();
            if (result != -1)
                cout << "Gear Decremented! Current Gear is: " << result << endl;
            else
                cout << "Cannot Shift to Previous Gear!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    }
    return 0;
}
