#include <iostream>
#include <string>
#include <cstdlib>  // For rand()
#include <ctime>    // For seeding rand()
using namespace std;
void displayWelcome() {
    cout << " Welcome to Your Personal Virtual Stylist! \n";
    
}

string detectWeather(int tempreture){
    if (tempreture >= 0 ){
        return "snowy"
    }
    else if (0 > tempreture && tempreture >= 10 ){
        return "cold"
    }
    else if ( 10 > tempreture && tempreture>= 25){
        return "rainy"
    }
    else if ( 25 > tempreture && tempreture >= 35 ){
        return "sunny"
    }
    else 
    return "hot"

}
string chooseString(){
    int choise;
    cout<< " Choose your aesthetic :";
    cout<< "1. Dark Academia\n 2. Rockstar Girlfriend\n 3. Clean Girl\n ";
    cin>> choise ;
    switch(choise){
        case 1: return "dark_academia";
        case 2: return "Rockstar Girlfriend";
        case 3: return "Clean Girl";
    }

    
}