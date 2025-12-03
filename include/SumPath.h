//
// Created by alyss on 2/12/2025.
//
#pragma once
#include <vector>
#ifndef CPP101_SUMPATH_H
#define CPP101_SUMPATH_H
class SumPath {
private:
    class TreeNode {
        int getVal();
        std::vector<TreeNode> getChildren();
    };
public:
    std::vector<TreeNode> findPath(TreeNode& root, int target);
private:
    bool dfs(std::vector<TreeNode>& out, TreeNode& root, int target);

};
#endif //CPP101_SUMPATH_H