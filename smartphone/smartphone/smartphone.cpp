#include <iostream>
#include"Phone.h"
using namespace std;
#include<vector>
void mySort(vector<Phone> a) {
    for (int j = 0; j < a.size(); j++) {
        for (int i = 0; i < a.size() - 1; i++) {
            if (a[i].storage > a[i + 1].storage)
                swap(a[i], a[i + 1]);
        }
    }
}
int main()
{
    vector<Phone> a;
    Phone t;
    while (cin >> t.company >> t.model >> t.storage >> t.system >> t.ram) {
        a.push_back(t);
    }
    a[0].printPhone();
    a[a.size() - 1].printPhone();
}