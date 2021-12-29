//
// Created by Lakshya Mittal on 17-12-2021.
//

#include <bits/stdc++.h>
#include "Model/RubiksCube3dArray.cpp"
#include "Model/RubiksCube1dArray.cpp"
#include "Model/RubiksCubeBitboard.cpp"

using namespace std;

int main() {
    RubiksCube3dArray object3DArray;
    RubiksCube1dArray object1dArray;
    RubiksCubeBitboard objectBitboard;

    object3DArray.print();

    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    if (object1dArray.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    if (objectBitboard.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    objectBitboard.u();
    object3DArray.u();
    object1dArray.u();
    objectBitboard.print();
    object3DArray.print();
    object1dArray.print();

    objectBitboard.l();
    object3DArray.l();
    object1dArray.l();
    objectBitboard.print();
    object3DArray.print();
    object1dArray.print();

    objectBitboard.f();
    object3DArray.f();
    object1dArray.f();
    objectBitboard.print();
    object3DArray.print();
    object1dArray.print();

    objectBitboard.r();
    object3DArray.r();
    object1dArray.r();
    objectBitboard.print();
    object3DArray.print();
    object1dArray.print();

    objectBitboard.b();
    object3DArray.b();
    object1dArray.b();
    objectBitboard.print();
    object3DArray.print();
    object1dArray.print();

    objectBitboard.d();
    object3DArray.d();
    object1dArray.d();
    objectBitboard.print();
    object3DArray.print();
    object1dArray.print();

    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    if (object1dArray.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    if (objectBitboard.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    objectBitboard.dPrime();
    object3DArray.dPrime();
    object1dArray.dPrime();
    objectBitboard.print();
    object3DArray.print();
    object1dArray.print();

    objectBitboard.bPrime();
    object3DArray.bPrime();
    object1dArray.bPrime();
    objectBitboard.print();
    object3DArray.print();
    object1dArray.print();

    objectBitboard.rPrime();
    object3DArray.rPrime();
    object1dArray.rPrime();
    objectBitboard.print();
    object3DArray.print();
    object1dArray.print();

    objectBitboard.fPrime();
    object3DArray.fPrime();
    object1dArray.fPrime();
    objectBitboard.print();
    object3DArray.print();
    object1dArray.print();

    objectBitboard.lPrime();
    object3DArray.lPrime();
    object1dArray.lPrime();
    objectBitboard.print();
    object3DArray.print();
    object1dArray.print();

    objectBitboard.uPrime();
    object3DArray.uPrime();
    object1dArray.uPrime();
    objectBitboard.print();
    object3DArray.print();
    object1dArray.print();

    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    if (object1dArray.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    if (objectBitboard.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    // Create two Cubes ------------------------------------------------------------------------------------------

//    RubiksCube3dArray cube1;
//    RubiksCube3dArray cube2;

//    RubiksCube1dArray cube1;
//    RubiksCube1dArray cube2;

    RubiksCubeBitboard cube1;
    RubiksCubeBitboard cube2;


//  Equality and assignment of cubes --------------------------------------------------------------------------

//    if(cube1 == cube2) cout << "Is equal\n";
//    else cout << "Not Equal\n";
//
//    cube1.randomShuffleCube(1);
//
//    if(cube1 == cube2) cout << "Is equal\n";
//    else cout << "Not Equal\n";
//
//    cube2 = cube1;
//
//    if(cube1 == cube2) cout << "Is equal\n";
//    else cout << "Not Equal\n";


//  Unordered_map of Cubes  ------------------------------------------------------------------------------------


//    unordered_map<RubiksCube3dArray, bool, Hash3d> mp1;

//    unordered_map<RubiksCube1dArray, bool, Hash1d> mp1;

    unordered_map<RubiksCubeBitboard, bool, HashBitboard> mp1;

    mp1[cube1] = true;
    cube2.randomShuffleCube(8);
    if (mp1[cube1]) cout << "Cube1 is present\n";
    else cout << "Cube1 is not present\n";

    if (mp1[cube2]) cout << "Cube2 is present\n";
    else cout << "Cube2 is not present\n";

    return 0;
}