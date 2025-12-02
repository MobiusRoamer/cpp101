//
// Created by alyss on 1/12/2025.
//

#include "Subset.h"

#include <vector>
using namespace std;

class Subset {

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> out;
        vector<int> path;
        dfs(path, out, 0, nums);
        return out;
    }

    void dfs(vector<int>& path, vector<vector<int>>& out, int currIndex, vector<int>& nums) {

        out.push_back(path);

        for (int i = currIndex; i < nums.size(); i++) {

            path.push_back(nums[i]);
            dfs(path, out, i + 1, nums);
            path.pop_back();
        }
    }
};

