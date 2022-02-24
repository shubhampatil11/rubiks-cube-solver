//
// Created by Lakshya Mittal on 17-02-2022.
//

#include "CornerPatternDatabase.h"

CornerPatternDatabase::CornerPatternDatabase() : PatternDatabase(100179840) {}

CornerPatternDatabase::CornerPatternDatabase(uint8_t init_val) : PatternDatabase(100179840, init_val) {}

uint32_t CornerPatternDatabase::getDatabaseIndex(const RubiksCube &cube) const {
    array<uint8_t, 8> cornerPerm =
            {
            cube.getCornerIndex(0),
            cube.getCornerIndex(1),
            cube.getCornerIndex(2),
            cube.getCornerIndex(3),
            cube.getCornerIndex(4),
            cube.getCornerIndex(5),
            cube.getCornerIndex(6),
            cube.getCornerIndex(7),
            };

    uint32_t rank = this->permIndexer.rank(cornerPerm);

    array<uint8_t, 7> cornerOrientations = {
            cube.getCornerOrientation(0),
            cube.getCornerOrientation(1),
            cube.getCornerOrientation(2),
            cube.getCornerOrientation(3),
            cube.getCornerOrientation(4),
            cube.getCornerOrientation(5),
            cube.getCornerOrientation(6),
    };

    uint32_t orientationNum =
            cornerOrientations[0] * 729 +
            cornerOrientations[1] * 243 +
            cornerOrientations[2] * 81 +
            cornerOrientations[3] * 27 +
            cornerOrientations[4] * 9 +
            cornerOrientations[5] * 3 +
            cornerOrientations[6];

    return (rank * 2187) + orientationNum;
}