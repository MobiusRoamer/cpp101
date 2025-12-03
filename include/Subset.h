//
// Created by alyss on 1/12/2025.
//

#pragma once
#include <vector>
#ifndef CPP101_SUBSET_H
#define CPP101_SUBSET_H

class Subset {
public:
    std::vector<std::vector<int>> subsets(std::vector<int>& nums);
private:
    void dfs(std::vector<int>& path, std::vector<std::vector<int>>& out, int currIndex, std::vector<int>& nums);
};


#endif //CPP101_SUBSET_H