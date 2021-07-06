#include <iostream>
#include <vector>

int main() {
    std::vector<float> price{36.5, 25.0, 10.55, 55.60, 4.25};
    std::vector<int> index{1, 1, 0, 4, 4};
    float sum = 0.0;

    for(int i = 0; i < index.size(); ++i) {
        sum += price[index[i]];
    }
    std::cout << sum;
    return 0;
}
