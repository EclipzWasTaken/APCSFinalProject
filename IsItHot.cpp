#include <iostream>
#include <iomanip>

double convertToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

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

            if (scale == 'C') {
                double fahrenheit = convertToFahrenheit(temperature);
                std::cout << std::fixed << std::setprecision(2) << previousTemperature << " C" << " = " << std::fixed << std::setprecision(2) << fahrenheit << " F" << std::endl;
                std::cout << std::fixed << std::setprecision(2) << fahrenheit << " F" << std::endl;
            } else if (scale == 'F') {
                double celsius = convertToCelsius(temperature);
                std::cout << std::fixed << std::setprecision(2) << previousTemperature << " F" << " = " << std::fixed << std::setprecision(2) << celsius << " C" << std::endl;
                std::cout << std::fixed << std::setprecision(2) << celsius << " C" << std::endl;
            }
        }
    }

    return 0;
}