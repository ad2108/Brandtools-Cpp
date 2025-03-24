//Brandkurven

#include <cstdlib>
#include <iostream>
#include "interaktion.hpp"

int main() {
    int input1, input2;
    double wert, ergebnis;

  //Überschrift und Brandkurven Wahl
    std::cout << "Temperaturkurven" << '\n'
              << "1. Einheitstemperaturzeitkurve" << '\n'
              << "2. Externe Brandkurve" << '\n'
              << "3. Hydro-Karbon Brandkurve" << '\n' << '\n'
              << "Auswahl: " << std::flush;
    std::cin >> input1;
    if (std::cin.fail()) {
        std::cerr << "Wrong input" << std::endl;
        return EXIT_FAILURE;
  }
  
  //Auswahl der Interaktion mit der Brandkurve
    std::cout << "\nGesucht ...\n"
              << "1. Gastemperatur in Celsius" << '\n'
              << "2. Zeit in Minuten" << '\n' << '\n'
              << "Auswahl: " << std::flush;
    std::cin >> input2;
    if (std::cin.fail()) {
        std::cerr << "Wrong input" << std::endl;
        return EXIT_FAILURE;
  }
  
  //Eingabe der Parameter und Auswertung der Interaktion
  switch (input2) {
    case 1:
      std::cout << "\nZeit in Minuten: " << std::flush;
      std::cin >> wert;
      if (std::cin.fail()) {
      std::cerr << "Wrong input" << std::endl;
      return EXIT_FAILURE;
      }
      
      ergebnis = zeit_nach_temp(input1, wert);
      std::cout << ergebnis << " Celsius"
                << std::endl;
      break;
    case 2:
      std::cout << "\nTemperatur in Celsius: " << std::flush;
      std::cin >> wert;
      if (std::cin.fail()) {
      std::cerr << "Wrong input" << std::endl;
      return EXIT_FAILURE;
      }
      
      ergebnis = temp_nach_zeit(input1, wert);
      std::cout << ergebnis << " Minuten"
                << std::endl;
      break;
    default:
      std::cerr << "Keine gültige Option gewählt" << std::endl;
      return EXIT_FAILURE;
  }
  
  //System pause
  system("pause");
  
    return EXIT_SUCCESS;
}
