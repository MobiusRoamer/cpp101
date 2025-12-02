//
// Created by alyss on 2/12/2025.
//

#include "SumPath.h"
#include <vector>
using namespace std;

class SumPath {
private:
    class TreeNode {
        int val;
        vector<TreeNode> *children;
        TreeNode() : val(0), children(nullptr) {}
        TreeNode(int x) : val(x), children(nullptr) {}
        TreeNode(int x, vector<TreeNode> &c) : val(x), children(c) {}

    };

};