// Polina Maidanova
// Programming Fudamentals
// CS 1436
// 005
// Due Date: 10/07/2024
// Date Completed: 10/03/2024
// Date Submitted: 10/03/2024


// This program calculates the distance traveled by a vehicle per hour.

#include <iostream> // Header file allowing the use of input/output objects.
#include <iomanip>  // Header file allowing manipulations with output.
using namespace std;    // Use standard namespace.

int main()  // Main function, starting point of the program execution.
{
    double fDistance, fSpeed, fTime, fTimeRemainder;    // Declare the variables for distance and time traveled, and speed of the vehicle.
    double fTimeCounter = 1.0;   // Initialize the counter for the time in hours.

    // Prompt the user to enter the speed of the vehicle.
    cout << "Enter the speed of the vehicle in miles per hour: ";
    cin >> fSpeed;

    // Validate the user input for speed.
    while (fSpeed < 0.0)    // Display the error message until the user enters a valid value.
    {
        cout << "Invalid input. Enter a non-negative value for speed: ";
        cin >> fSpeed;
    }

    // Prompt the user to enter the time traveled in hours.
    cout << "Enter the time traveled in hours: ";
    cin >> fTime;

    // Validate the user input for time.
    while (fTime < 1.0) // Display the error message until the user enters a valid value.
    {
        cout << "Invalid input. Enter a value of at least 1 hour for time: ";
        cin >> fTime;
    }

    // Display the heading for the table.
    cout << "\nDistance Traveled Per Hour\n" << endl;

    // Display the table with the calculated distance for each hour.
    while (fTimeCounter <= fTime)   // Check if the time entered is greater or equal to the current time counter.
    {
        fDistance = fSpeed * fTimeCounter;  // Calculate the distance for each hour.
        cout << "Hour " << fTimeCounter << setw(10) << fDistance << " Miles"<< endl;    // Display the results.
        fTimeCounter++; // Increment the counter.
        fTimeRemainder = fTimeCounter - fTime;  // Calculate the remaining time.
    }

    if (fTimeRemainder > 0.0) // If there is remaining time that is not an integer number, calculate the remaining distance.
    {
        fDistance = fSpeed * fTimeRemainder;
        cout << "Remaining time " << fTimeRemainder << " Hours";
        cout << setw(10) << fDistance << " Miles" << endl;
    }

    else
    return 0;
}
