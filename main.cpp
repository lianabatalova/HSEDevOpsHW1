#include <iostream>

template<typename T>
auto MajorSum(T x, T y) {
    return x + y + 16;
}

int main(int argc, char** argv) {
    std::cout << "release current version: 1.0" << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << ", ";
    }
    std::cout << "bye" << std::endl;
    std::cout << std::endl;
    return 1;
}