#include "Weather.h"
Weather::Weather() {
	cout << " " << endl;
}
void Weather::printWeather() {
	cout << city << " " << wspeed << " " << rain << " " << sorn << " " << temperature << endl;
}