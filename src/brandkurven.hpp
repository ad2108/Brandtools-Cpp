//Brandkurven 

#include <cmath>

// Einheitstempraturzeitkurve
double einheits(double zeit) {
  return 20 + 345 * log10(8 * zeit + 1);
}
//Ableitung Einheitstempraturzeitkurve
double einheits_1(double zeit) {
  return 2760 / ((8 * zeit) * log(10));
}

//Externe Brandkurve
double externe(double zeit) {
  return 20 + 660 * (1 - 0.687 * exp(-0.32 * zeit) - 0.313 * exp(-3.8 * zeit));
}
//Ableitung Externe Brandkurve
double externe_1(double zeit) {
  return 660 * (0.22 * exp(-0.32 * zeit) + 1.188 * exp(-3.8 * zeit));
}

//Hydro-Karbon Brandkurve
double hydro(double zeit) {
  return 20 + 1080 * (1 - 0.325 * exp(-0.167 * zeit) - 0.675 * exp(-2.5 * zeit));
}
//Ableitung Hydro-Karbon Brandkurve
double hydro_1(double zeit) {
  return 1080 * (0.325 * 0.167 * exp(-0.167 * zeit) + 0.675 * 2.5 * exp(-2.5 * zeit));
}


