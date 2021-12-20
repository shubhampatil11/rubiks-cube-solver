//
// Created by user on 17-12-2021.
//

#include <bits/stdc++.h>
#include "Model/RubiksCube3dArray.cpp"

using namespace std;

int main() {
    RubiksCube3dArray object;
    object.print();
    cout << "\n\n";

    if (object.isSolved()) cout << "Solved\n";
    else cout << "Not Solved\n";

    object.f();
    object.b();
    object.d();
    object.l();
    object.u();
    object.r();
    object.print();

    if (object.isSolved()) cout << "Solved\n";
    else cout << "Not Solved\n";

    object.rPrime();
    object.uPrime();
    object.lPrime();
    object.dPrime();
    object.bPrime();
    object.fPrime();
    object.print();

    if (object.isSolved()) cout << "Solved\n";
    else cout << "Not Solved\n";

    return 0;
}