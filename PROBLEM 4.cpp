#include <iostream>
using namespace std;

int main(){
    
    int cups;
    double pricePerCup = 1.0;
    double totalCost;
    double discount = 0.0;

    // Ask how many cups the customer wants
    cout<< "How many cups? ";
    cin>> cups;

    // Determine the discount based on quantity
    if (cups >= 10){
        discount = 0.20; // 20% discount
    } else if (cups >= 5){
        discount = 0.10; // 10% discount
    } else{
        discount = 0.0;  // No discount
    }

    // Calculate the total cost with discount
    totalCost = cups * pricePerCup * (1 - discount);

    // Display the result
    cout<< "Total cost: $"<< totalCost<< endl;

    return 0;
}
