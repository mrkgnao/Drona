#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include <string>
#include <sstream>
#include <math.h>
#include <sstream>

#include "STL.h"
#include "Atom.h"

using namespace std;

class Utils
{
private:

public:
    Utils();

    string Norm(vector<string> v);
    double Norm(vector<double> v);
    vector<double> Div(vector<double> v, double n);
    vector<double> Diff(vector<double> v1, vector<double> v2);
    vector<string> Op(vector<string> v1, vector<string> v2, string op);

    string Dist(vector<string> v1, vector<string> v2);
    string DistFromLine(vector<string> w, vector<double> p1, vector<double> p2);

    string Close(vector<string> w, string eps);

    string ToString(double n);
    vector<string> ToString(vector<double> n);

    string Close(vector<string> v1, vector<string> v2, string eps);

};

#endif // UTILS_H
