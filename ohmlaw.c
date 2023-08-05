#include <stdio.h>

// ohm's law converter

int main() {

    float v, i, r; 
    int num;

    printf("Select a number: 1: current - 2: voltage - 3: resistance: ");
    scanf("%d", &num);

    if (num == 1) { 
        // current (amp)
        printf("Enter voltage: ");
        scanf("%f", &v);

        printf("Enter resistance: ");
        scanf("%f", &r);
        
        i = v / r;
        
        printf("The current of %.2f volt / %.2f ohm is %.2f amp \n", v, r, i);
        printf("If you have %.2f VOLT you would need to negate %.2f OHM resist to power a LED with %.2f AMPS. \n", v, r, i);
        printf("Voltage and Amps are directly proportional. (1 to 1)");

    } else if (num == 2) { 
        // voltage (volt)
        printf("Enter current: ");
        scanf("%f", &i);

        printf("Enter resistance: ");
        scanf("%f", &r);

        v = i * r;

        printf("The voltage of %.2f amp * %.2f ohm is %.2f volt \n", i, r, v);
        printf("If you have %.2f AMPS LED and you negate %.2f OHM resist, you need %.2f VOLT to power the LED.", i, r, v);

    } else if (num == 3) { 
        // resistance (ohm)
        printf("Enter voltage: ");
        scanf("%f", &v);

        printf("Enter current: ");
        scanf("%f", &i);

        r = v / i;

        printf("The resistance of %.2f volt / %.2f amp is %.2f ohm \n", v, i, r);
        printf("We would need a resistor value of %.2f ohms \n", r);
        printf("If you have %.2f AMPS LED and you send %.2f VOLT, you need %.2f OHM resist to negate the voltage to power the LED.", i, v, r);
    }
    return 0;
}