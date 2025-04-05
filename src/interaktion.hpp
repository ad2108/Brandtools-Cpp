/*
Brandkurven Interaction Header
Author: ad2108
Version: 1.0
Date: 2025-04-05
License: MIT

Description:
    A simple header containing functions for calculting the values for the Temperaturecurves:
      1. Einheits-Temperaturzeitkurve
      2. Externe Brandkurve
      3. Hydro-Karbon Brandkurve
*/

#include <iostream>
#include <cstdlib>
#include "brandkurven.hpp"

//Berechnung der Temperatur
double zeit_nach_temp(int brandkurve, double zeit) {
  switch (brandkurve) {
    case 1:
      return einheits(zeit);
      break;
    case 2:
      return externe(zeit);
      break;
    case 3:
      return hydro(zeit);
      break;
    default:
      std::cerr << "Keine gültige Option gewählt" << std::endl;
      return EXIT_FAILURE;
  }
}

//Newtonsche Iteration nach der Zeit
double temp_nach_zeit(int brandkurve, double temperatur) {
  float zeit = 0.0;
  float temperatur_i;
  
  //Vortests um Endlosschleifen zu vermeiden
  if ((temperatur < 20 || temperatur > 680) && brandkurve == 2) {
    std::cerr << "\nTemperaturen nur größer 20 und kleiner 680 zulaessig"
              << std::endl;
    return EXIT_FAILURE;
  } else if ((temperatur < 20 || temperatur > 1100) && brandkurve == 3) {
    std::cerr << "\nTemperaturen nur größer 20 kleiner 1100 zulaessig"
              << std::endl;
    return EXIT_FAILURE;
  }

  zeit = 1;
  for (int i = 0; i <= 50; i++) {
    switch (brandkurve) {
      case 1:
        zeit = zeit - (einheits(zeit) - temperatur) / einheits_1(zeit);
        break;
      case 2:
        zeit = zeit - (externe(zeit) - temperatur) / externe_1(zeit);
        break;
      case 3:
        zeit = zeit - (hydro(zeit) - temperatur) / hydro_1(zeit);
        break;
      default:
        std::cerr << "Keine gültige Option gewählt" << std::endl;
        return EXIT_FAILURE;
    }
  }
  
  return zeit;
}


