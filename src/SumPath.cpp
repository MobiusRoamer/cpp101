//
// Created by alyss on 2/12/2025.
//

#include "SumPath.h"
#include <vector>
using namespace std;

// 02/12/2025
// need to think about the control loop using the bool in the parent function findpath() call
class SumPath {
private:
    class TreeNode {
        int val;
        // why not vector<TreeNode> *children; ?
        // Because TreeNode owns the field children. Only use a pointer if referring to some item external to the class
        // Notice this means a class can be constructed using items outside its scope!
        vector<TreeNode> children;

        TreeNode(int x) : val(x) {}

        // TreeNode(int x, vector<TreeNode> *c) : val(x), children(c) {} // use this version if we wish to sown and store a pointer
        // then children is allowed to be nullptr
        // Alternatively
        TreeNode(int x, vector<TreeNode>& c) : val(x), children(c) {}
        // This means our TreeNode class does not own this list of children it just points to them
        // (fits our case, the children vector is an external argument, the caller never deletes or move the vector)
    public:
        int getVal() const { return val; }
        vector<TreeNode> getChildren() { return children; }
    };

public:
    vector<TreeNode> findPath(TreeNode& root, int target) {
        vector<TreeNode> out;
        if (root.getVal() == target) { out.push_back(root); return out; }

        bool found = false;
        dfs(out, root, target, found);

    }

    bool dfs(vector<TreeNode>& out, TreeNode& root, int target, bool found) {
        if (target - root.getVal() == 0) { found = true; }

        target -= root.getVal();

        out.push_back(root);
        for (TreeNode& c : root.getChildren()) {
            dfs(out, c, target, found);
        }
        out.pop_back();
    }
};