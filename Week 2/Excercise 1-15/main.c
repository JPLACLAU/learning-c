#include <stdio.h>

/* Excercise 1-15. Rewrite the temperature conversion program of Section 1.2 to
use a function for conversion. */

/*Lo que hacemos es sacar esta linea de codigo del punto 1.2:
 fahr = (celsius *(9.0/5.0))+ 32;
Y lo transformamos en una funcion */

float convertirAFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float celsius, fahr;
    int lower, upper, step;

    lower = -20; /* l�mite inferior de la tabla de temperaturas */
    upper = 150; /* l�mite superior */
    step = 10; /* tama�o del paso */

    celsius = lower;
    while (celsius <= upper) {
        fahr = convertirAFahrenheit(celsius);
        printf("%3.0f  %6.0f \n", celsius, fahr);
        celsius += step;
    }

    return 0;
}
