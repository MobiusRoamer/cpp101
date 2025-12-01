//
// Created by alyss on 1/12/2025.
//


int main() {
    Combinations p;
    vector<vector<int>> output = p.combine(4, 2);
    for (int i = 0; i < output.size(); i++) {
        printVector(output[i]);
    }
}