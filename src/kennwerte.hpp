/*
Kennwerte Header
Author: ad2108
Version: 1.0
Date: 2025-04-05
License: MIT

Description:
    A simple header containing functions Materialkennwerte:
      1. Stahl
      2. Edelstahl
      3. Beton
*/

//Dichte
float dichte_stahl (float temp){
  return 7850.0;
}

float dichte_edelstahl(float temp){
  return 7850.0;
}

float dichte_beton (float temp){
  if (temp <= 115.){
    return 2400.0;
  } else if (temp <= 200.) {
    return 2400. * (1 - 0.02 * (temp - 115.) / 85.);
  } else if (temp <= 400) {
    return 2400. * (0.98 - 0.03 * (temp - 200.) / 200.);
  } else {
    return 2400. * (0.95 - 0.07 * (temp - 400.) / 800.);
  }
}

//Wärmeleitfähigkeit
float leitfaehigkeit_stahl (float temp) {
  if (temp < 800.) {
    return 54. - 3.33e-2 * temp;
  } else {
    return 27.3;
  }
}

float leitfaehigkeit_edelstahl(float temp){
  return 14.6 + 1.27e-2 * temp;
}

float leitfaehigkeit_beton_oben (float temp) {
  return 2. - 2.451e-1 * (temp / 100.) + 1.07e-2 * (temp / 100.) * (temp / 100.);
}

float leitfaehigkeit_beton_unten (float temp) {
  return 1.36- 1.36e-1 * (temp / 100.) + 5.7e-4 * (temp / 100.) * (temp / 100.);
}

//Wärmekapazität
float kapazitaet_stahl (float temp) {
  if (temp < 600.) {
    return 425. + 7.73e-1 * temp - 1.69e-3 * temp * temp + 2.22e-6 * temp * temp * temp;
  } else if (temp < 735.) {
    return 666. + 13002. /(738. - temp);
  } else if (temp < 900.) {
    return 545. + 1820. / (temp - 731.);
  } else {
    return 650.;
  }
}

float kapazitaet_edelstahl(float temp){
  return 450. + 0.28 * temp - 2.91e-4 * temp * temp + 1.34e-7 * temp * temp * temp;
}

float kapazitaet_beton (float temp) {
  if (temp <= 100.) {
    return 900.;
  } else if (temp <= 200.) {
    return 900. + (temp - 100.);
  } else if (temp <= 400.) {
    return 1000. + (temp - 200.) / 2.;
  } else {
    return 1100.;
  }
}

