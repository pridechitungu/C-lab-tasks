#include <iostream>
#include <random>
using namespace std;

int main(){

    std::random_device rd;
    std::mt19937 gen(rd());
    std:uniform_int_distribution<> dist(0,11); 

    int daysuntilexpiration = dist(gen);

    cout << "daysuntilexpiration: " << daysuntilexpiration << endl;

    if (daysuntilexpiration == 0) {

        cout << "your subscription has expired." << endl;
    }
    else if (daysuntilexpiration == 1){
        cout << "your subscription expires within a day!" << endl;
        cout << "renew now and save 20%!" << endl;
    }
    else if (daysuntilexpiration <= 5) {

        cout << "your subscription expires in " << daysuntilexpiration << " days" << endl;
        cout << "renew now and save 10%!" << endl;
    }
    else if (daysuntilexpiration <=10) {

        cout << "your subscription will expire soon renew now!" << endl;
    
    }
    else {
        cout << "you have an active subscription." << endl;
    }

    return 0;
    
}