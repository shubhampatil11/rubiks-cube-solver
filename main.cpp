//
// Created by Lakshya Mittal on 17-12-2021.
//

#include <bits/stdc++.h>
#include "Model/RubiksCube3dArray.cpp"
#include "Model/RubiksCube1dArray.cpp"
#include "Model/RubiksCubeBitboard.cpp"

using namespace std;


int main() {
//    RubiksCube3dArray object;

//    RubiksCube1dArray object;

//
//    RubiksCubeBitboard object;
//    object.print();
//
//    if (object.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    object.u();
//    object.print();
//
//    object.l();
//    object.print();
//
//    object.f();
//    object.print();
//
//    object.r();
//    object.print();
//
//    object.b();
//    object.print();
//
//    object.d();
//    object.print();
//
//    if (object.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    object.dPrime();
//    object.print();
//
//    object.bPrime();
//    object.print();
//
//    object.rPrime();
//    object.print();
//
//    object.fPrime();
//    object.print();
//
//    object.lPrime();
//    object.print();
//
//    object.uPrime();
//    object.print();
//
//    if (object.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";

// Random Shuffle Testing ----------------------------------------------------------------------------------

//    RubiksCubeBitboard cube;
//    cube.print();
//    vector<RubiksCube::MOVE> moves = cube.randomShuffleCube(5);
//    for(auto move: moves){
//        cout << cube.getMove(move) << " ";
//    }
//    cube.print();


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