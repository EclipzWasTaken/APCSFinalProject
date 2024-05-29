#include <iostream>
#include <iomanip>

/**
 * Convert a temperature in Celsius to Fahrenheit
 * 
 * @param celsius the temperature in Celsius
 * @return the temperature in Fahrenheit
 */
double convertToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

/**
 * Convert a temperature in Fahrenheit to Celsius
 * 
 * @param fahrenheit the temperature in Fahrenheit
 * @return the temperature in Celsius
 */
double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int numTestCases;
    std::cin >> numTestCases;

    for (int i = 0; i < numTestCases; i++) {
        int numConversions;
        std::cin >> numConversions;

        double previousTemperature = 0.0; // Store the previous temperature value

        for (int j = 0; j < numConversions; j++) {
            double temperature;
            char scale;
            std::cin >> temperature >> scale;


            previousTemperature = temperature; // Update the previous temperature value

            // Convert the temperature to the other scale
            if (scale == 'C') {
                double fahrenheit = convertToFahrenheit(temperature);
                std::cout << std::fixed << std::setprecision(2) << previousTemperature << " C" << " = " << std::fixed << std::setprecision(2) << fahrenheit << " F" << std::endl;
            } else if (scale == 'F') {
                double celsius = convertToCelsius(temperature);
                std::cout << std::fixed << std::setprecision(2) << previousTemperature << " F" << " = " << std::fixed << std::setprecision(2) << celsius << " C" << std::endl;
            }
        }
    }

    return 0;
}