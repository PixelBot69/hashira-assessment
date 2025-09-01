#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
using int128 = __int128;

int128 baseToDecimal(const string &val, int base) {
    int128 res = 0;
    for (char c : val) {
        int digit;
        if (c >= '0' && c <= '9') digit = c - '0';
        else digit = 10 + (tolower(c) - 'a');
        res = res * base + digit;
    }
    return res;
}

vector<int128> multiply(const vector<int128>& poly, int128 root) {
    vector<int128> newPoly(poly.size() + 1, 0);
    for (size_t i = 0; i < poly.size(); i++) {
        newPoly[i] += poly[i];
        newPoly[i + 1] -= poly[i] * root;
    }
    return newPoly;
}


string int128ToString(int128 x) {
    if (x == 0) return "0";
    bool neg = false;
    if (x < 0) { neg = true; x = -x; }
    string s;
    while (x > 0) {
        s.push_back('0' + (x % 10));
        x /= 10;
    }
    if (neg) s.push_back('-');
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    vector<pair<int,string>> rootsData = {
        {6,"13444211440455345511"},
        {15,"aed7015a346d635"},
        {15,"6aeeb69631c227c"},
        {16,"e1b5e05623d881f"},
        {8,"316034514573652620673"},
        {3,"2122212201122002221120200210011020220200"},
        {3,"20120221122211000100210021102001201112121"},
        {6,"20220554335330240002224253"},
        {12,"45153788322a1255483"},
        {7,"1101613130313526312514143"}
    };

    int k = 7; 
    vector<int128> roots;
    for (int i=0; i<k; i++) {
        roots.push_back(baseToDecimal(rootsData[i].second, rootsData[i].first));
    }

    vector<int128> poly = {1};
    for (int128 r : roots) {
        poly = multiply(poly, r);
    }

    cout << "Polynomial coefficients:\n";
    for (auto it = poly.rbegin(); it != poly.rend(); ++it) {
        cout << int128ToString(*it) << " ";
    }
    cout << "\n";

    return 0;
}
