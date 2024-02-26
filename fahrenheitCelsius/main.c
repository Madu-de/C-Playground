#include <stdio.h>

double celsiusToFahrenheit(double celsius) {
  return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
  return (fahrenheit - 32) * 5 / 9;
}

int main() {
  int input;
  double temperature;
  char repeat;

  do {
    printf("Do you want to calculate celsius to fahrenheit (1) or fahrenheit to celsius (2)?: ");
    scanf("%d", &input);

    printf("Type your temperature value in (without symbols): ");
    scanf("%lf", &temperature);

    if (input == 1) {
      printf("Celsius = %lf; Fahrenheit = %lf\n\n", temperature, celsiusToFahrenheit(temperature));
    } else if (input == 2) {
      printf("Fahrenheit = %lf; Celsius = %lf\n\n", temperature, fahrenheitToCelsius(temperature));
    }
    printf("Again? (y/n): ");
    scanf("\n%c", &repeat);
  } while (repeat == 'y');

  return 0;
}