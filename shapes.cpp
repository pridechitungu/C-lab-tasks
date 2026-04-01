#include <iostream>
using namespace std;

//functions for calculating the areas

double triangleArea(double base, double height);
double rectangleArea(double length, double width);
double squareArea(double side);

int main() 
{
    int choice;

    while (true) 
    {
        cout << "\n======= CALCULATOR =========" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if(cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "invalid input. please enter a number." << endl;
            continue;
        }

        if(choice == 1)
        {
            double base, height;
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the height: ";
            cin >> height;

            cout << "Area of Triangle = " << triangleArea(base, height) << endl;
        }

        else if(choice == 2) 
        {
            double length, width;
            cout << "Enter the lenghth: ";
            cin >> length;
            cout << "Enter the width: ";
            cin >> width;

            cout << "Area of rectangle = " << rectangleArea(length, width) << endl;
        }

        else if(choice == 3)
        {
            double side;
            cout << "Enter side: ";
            cin >> side;

            cout<< "Area of the Square = " << squareArea(side) << endl;
        }

        else if(choice == 4)
        {
            cout << "Exiting the program...." << endl;
            break;
        }
        else {
            cout << "Invalid choice. please select 1-4 " << endl;
        }
    }
    return 0;
}

//function definitions
double triangleArea(double base, double height){
    return 0.5*base*height;
}

double rectangleArea(double length, double width){
    return length*width;
}

double squareArea(double side){
    return side*side;
}