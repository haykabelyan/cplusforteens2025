#include <iostream>
#include <vector>

int main() {
    std::vector<int> encoded = {1, 2, 3};
    std::vector<int> decoded;

    int first = 1;
    decoded.push_back(first);

    for (int i = 0; i < encoded.size(); i++) {
        decoded.push_back(decoded[i] ^ encoded[i]);
    }

    for (int num : decoded) {
        std::cout << num << " ";
    }
}