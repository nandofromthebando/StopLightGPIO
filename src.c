#include <wiringPi.h>
#include <stdio.h>
int main(void) {
    if (wiringPiSetupGpio() == -1) {  
        printf("WiringPi setup failed!\n");
        return 1;
    }
    int red, green, yellow;
    red = 23;
    green = 24;
    yellow = 25;
    // Set GPIO 23, 24, 25 as outputs
    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(yellow, OUTPUT);
    while (1) {

        printf("Red\n");
        digitalWrite(red, HIGH);
        delay(300); 
        digitalWrite(red, LOW);
        delay(100);

        printf("Red\n");
        digitalWrite(red, HIGH);
        delay(100);  
        digitalWrite(red, LOW);
        delay(100);

        printf("Yellow\n");
        digitalWrite(yellow, HIGH);
        delay(100);
        digitalWrite(yellow, LOW);
        delay(100);

        printf("Red\n");
        digitalWrite(red, HIGH);
        delay(300);  
        digitalWrite(red, LOW);
        delay(100);

        printf("Green\n");
        digitalWrite(green, HIGH);
        delay(100);
        digitalWrite(green, LOW);
        delay(100);

        printf("Red\n");
        digitalWrite(red, HIGH);
        delay(50);  
        digitalWrite(red, LOW);
        delay(50);

        printf("Yellow\n");
        digitalWrite(yellow, HIGH);
        delay(50);
        digitalWrite(yellow, LOW);
        delay(50);

        printf("Red\n");
        digitalWrite(red, HIGH);
        delay(50);  
        digitalWrite(red, LOW);
        delay(50);

        printf("Yellow\n");
        digitalWrite(yellow, HIGH);
        delay(300);
        digitalWrite(yellow, LOW);
        delay(300);

        printf("Red\n");
        digitalWrite(red, HIGH);
        delay(50);  
        digitalWrite(red, LOW);
        delay(50);

        printf("Yellow\n");
        digitalWrite(yellow, HIGH);
        delay(50);
        digitalWrite(yellow, LOW);
        delay(50);
    }
    return 0;
}
