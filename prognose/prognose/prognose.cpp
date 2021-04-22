#include <iostream>
#include "Weather.h"
using namespace std;
#include<vector>
int main()
{
    vector<Weather> a;
    Weather t;
    while (cin >> t.city >> t.wspeed >> t.rain >> t.sorn >> t.temperature) {
        a.push_back(t);
    }
    for (int i = 0; i < a.size(); i++) {
        if (t.rain == "yes")
            a[i].printWeather();
    }
}