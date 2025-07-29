#include<iostream>
using namespace std;

float CelsiusToFahrenheit(float celsius){
    return(celsius*9.0/5.0)+32;
}
float FahrenheitToCelsius(float fahrenheit){
    return(fahrenheit-32)*5.0/9.0;
}
float CelsiusToKelvin(float celsius){
    return(celsius+273.15);
}
float KelvinToCelsius(float kelvin){
    return(kelvin-273.15);
}
float FahrenheitToKelvin(float fahrenheit){
    return(CelsiusToKelvin(FahrenheitToCelsius(fahrenheit)));
}
float KelvinToFahrenheit(float kelvin){
    return(CelsiusToFahrenheit(KelvinToCelsius(kelvin)));
}

int main(){
    int choice;
    float temp;

    cout << "TEMPERATURE CONVERTER\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Celsius to Kelvin\n";
    cout << "3. Fahrenheit to Celsius\n";
    cout << "4. Fahrenheit to Kelvin\n";
    cout << "5. Kelvin to Celsius\n";
    cout << "6. Kelvin to Fahrenheit\n";
    cout << "0. Exit\n";

    while(true){
        cout << "\nSelect Coversion (0-6): ";
        cin >> choice;

        if(choice == 0){
            cout << "Exiting program.\n";
            break;
        }

        cout << "Enter temperature value: ";
        cin >> temp;

        switch(choice){
            case 1: cout << temp << " °C = " << CelsiusToFahrenheit(temp) << " °F\n"; break;
            case 2: cout << temp << " °C = " << CelsiusToKelvin(temp) << " K\n"; break;
            case 3: cout << temp << " °F = " << FahrenheitToCelsius(temp) << " °C\n"; break;
            case 4: cout << temp << " °F = " << FahrenheitToKelvin(temp) << " K\n"; break;
            case 5: cout << temp << " K = " << KelvinToCelsius(temp) << " °C\n"; break;
            case 6: cout << temp << " K = " << KelvinToFahrenheit(temp) << " °F\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}