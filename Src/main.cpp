#include <iostream>
#include <vector>
#include "KeywordToken.h"
#include "LevenshteinDistance.h"
#include "VectorDistance.hpp"
#include "FileHelper.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    double resultFromL;
    double resultFromV;
    vector<KeywordToken> v1, v2;
    LevenshteinDistance levenshteinDistance;
    VectorDistance vectorDistance
    FileHelper helper;
    helper.getTokens(argv[1]);
    helper.token1->size();
    resultFromL = levenshteinDistance.calculate(*helper.token1, *helper.token2);
    resultFromV = vectorDistance.calculate(*helper.token1, *helper.token2);
    double result = resultFromL * 0.2 + resultFromV * 0.8;
    helper.getAnswer(argv[2], (result > 0.5));
    return 0;
}