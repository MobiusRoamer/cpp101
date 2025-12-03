//
// Created by alyss on 1/12/2025.
//

#pragma once
#include <vector>
#ifndef CPP101_COMBINATIONS_H
#define CPP101_COMBINATIONS_H

class Combinations {
public:
    std::vector<std::vector<int>> combine(int b, int k);
private:
    void dfs(std::vector<std::vector<int>>& out, std::vector<int>& path, int currIndex, int b, int k);
};
void printVector(const std::vector<int>& v);

#endif