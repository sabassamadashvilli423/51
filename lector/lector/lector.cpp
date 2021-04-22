#include <iostream>
#include"Lectori.h"
#include<vector>
using namespace std;
void mySort(vector < Lectori> a) {
    for (int j = 0; j < a.size(); j++) {
        for (int i = 0; i < a.size() - 1; i++) {
            if (a[i].count > a[i + 1].count)
                swap(a[i] , a[i + 1]);
        }
    }
}
int main()
{
    vector<Lectori> a;
    Lectori t;
    while (cin >> t.name >> t.lname >> t.count >> t.status) {
        a.push_back(t);
    }
    mySort(a);
    a[a.size()-1].printLector();
}