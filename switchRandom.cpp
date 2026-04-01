#include <iostream>
#include <random>
using namespace std;

int main() {

    std::random_device rd;
    std::mt19937 gen(rd());
    std:uniform_int_distribution<> dist(0,11); 

    int DaysUntilExpiration = dist(gen);

    cout << "Days until expiration: " << DaysUntilExpiration << endl;

    switch (DaysUntilExpiration)
    {
    case 0:
        cout << "Your subscription has expired." << endl;
        break;

    case 1:
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
        break;

        case 2:
        case 3:
        case 5:
            cout << "Your subscription expires in " << DaysUntilExpiration << " days." << endl;
            cout << "Renew now and save 10%!" << endl;

        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. renew now!" << endl;
            break;

    default:
        break;
    }

return 0;

}