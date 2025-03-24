//Brandkurven writer

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "brandkurven.hpp"

int main() {
  std::string ofile;
  char separator;
  long double start, end, step, count, faktorx, faktory;
  
  std::cout << "Brandkurven writer" << '\n'
            << "Name der Datei:" << std::endl;
  std::cin >> ofile;
  std::cout << "Trennzeichen:" << std::endl;
  std::cin >> separator;
  std::cout << "Anfangswert:" << std::endl;
  std::cin >> start;
  std::cout << "Endwert:" << std::endl;
  std::cin >> end;
  std::cout << "Schritt:" << std::endl;
  std::cin >> step;
  std::cout << "Umrechnungsfaktor fuer Zeit:" << std::endl;
  std::cin >> faktorx;
  std::cout << "Umrechnungsfaktor fuer Temperatur:" << std::endl;
  std::cin >> faktory;
  
  std::fstream myfile;
  myfile.open(ofile, std::ios::out);
  
  myfile << "Zeit[min * " << faktorx << "]" << separator 
         << "Einheitstemperaturzeitkurve[°C * " << faktory << "]" << separator
         << "Externe-Brandkurve[°C * " << faktory << "]" << separator
         << "HydroKarbon-Brandkurve[°C * " << faktory << "]" << separator
         << '\n' << '\n';
  
  count = start;
  
  while(count <= end) {
    myfile << count * faktorx 
    << separator << einheits(count) * faktory
    << separator << externe(count) * faktory
    << separator << hydro(count) * faktory
    << '\n';
    count += step;
  }
  myfile.close();
  
  return EXIT_SUCCESS;
}
