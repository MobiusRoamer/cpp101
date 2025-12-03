//
// Created by alyss on 1/12/2025.
//

#pragma once
#include <vector>
#ifndef CPP101_PERMUTATIONS_H
#define CPP101_PERMUTATIONS_H

class Permutations {
public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums);
private:
    void dfs(std::vector<std::vector<int>>& out, std::vector<int>& path, std::vector<bool>& used, std::vector<int>& nums);
};

void printVector(std::vector<int>& v);


#endif //CPP101_PERMUTATIONS_H