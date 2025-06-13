#include <stdio.h>


// This is where you add the two functions

float fahrenheit_to_celsius(float f_temp) {
    float celsius = ((f_temp - 32) * 5) / 9;
    return celsius;
}

float celsius_to_fahrenheit(float c_temp) {
    float farenheit = ((c_temp * 9) / 5) + 32;
    return farenheit;
}



int main() {
    float temp_f = 100.0;
    float temp_c = 37.0;

    printf("%.1f\n", fahrenheit_to_celsius(temp_f));  // Expected output: 37.8
    printf("%.1f\n", celsius_to_fahrenheit(temp_c));  // Expected output: 98.6

    return 0;
}