#include <iostream>
using namespace std;

int main(){
    double temperature;
    double price;

    // Ask for temperature
    cout<< "Enter today's temperature in Celsius: ";
    cin>> temperature;

    // Determine for the price based on the temperature
    if (temperature >= 30){
        price = 0.80;
        cout<< "It's hot! Lemonade costs $"<< price<< " today."<< endl;
    } else{
        price = 1.00;
        cout<< "Lemonade costs $"<< price<< " today."<< endl;
    }

    return 0;
}
