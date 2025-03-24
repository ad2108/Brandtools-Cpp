//Kennwerte writer

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "kennwerte.hpp"


int main() {
  std::string ofile;
  char separator;
  long double start, end, step, count;
  long double faktorx, faktory, faktorz, faktora;
  
  std::cout << "Kennwerte writer" << '\n'
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
  std::cout << "Umrechnungsfaktor fuer Temperatur:" << std::endl;
  std::cin >> faktorx;
  std::cout << "Umrechnungsfaktor fuer Dichte:" << std::endl;
  std::cin >> faktory;
  std::cout << "Umrechnungsfaktor fuer Waermespeicherkapazitaet:" << std::endl;
  std::cin >> faktorz;
  std::cout << "Umrechnungsfaktor fuer Waermeleitfaehigkeit:" << std::endl;
  std::cin >> faktora;

  
  std::fstream myfile;
  myfile.open(ofile, std::ios::out);
  
  myfile << "Temperatur[°C * " << faktorx << "]"  
         << separator << "Dichte-Stahl[kg/m³ * " << faktory << "]"
         << separator << "Dichte-Edelstahl[kg/m³ * " << faktory << "]"
         << separator << "Dichte-Beton[kg/m³ * " << faktory << "]"
         << separator << "Wärmespeicherkapazität-Stahl[J/kgK* " << faktorz << "]"
         << separator << "Wärmespeicherkapazität-Edelstahl[J/kgK* " << faktorz << "]"
         << separator << "Wärmespeicherkapazität-Beton[J/kgK* " << faktorz << "]"
         << separator << "Wärmeleitfähigkeit_Stahl[W/mK* " << faktora << "]"
         << separator << "Wärmeleitfähigkeit_Edelstahl[W/mK* " << faktora << "]"
         << separator << "Wärmeleitfähigkeit_Beton-oberst[W/mK* " << faktora << "]"
         << separator << "Wärmeleitfähigkeit_Beton-unterst[W/mK* " << faktora << "]"
         << '\n' << '\n';
  
  count = start;
  
  while(count <= end) {
    myfile << count * faktorx 
           << separator << dichte_stahl(count) * faktory
           << separator << dichte_edelstahl(count) * faktory
           << separator << dichte_beton(count) * faktory
           << separator << kapazitaet_stahl(count) * faktorz
           << separator << kapazitaet_edelstahl(count) * faktorz
           << separator << kapazitaet_beton(count) * faktorz
           << separator << leitfaehigkeit_stahl(count) * faktora
           << separator << leitfaehigkeit_edelstahl(count) * faktora
           << separator << leitfaehigkeit_beton_oben(count) * faktora
           << separator << leitfaehigkeit_beton_unten(count) * faktora
           << '\n';

    count += step;
  }
  myfile.close();
  
  return EXIT_SUCCESS;
}

