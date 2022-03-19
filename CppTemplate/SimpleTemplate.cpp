#include <iostream>

template <typename T>
struct Func_ { using type = T; };

template <>
struct Func_<int> { using type = unsigned int; };

template<>
struct Func_<long> { using type = unsigned long; };

int main() {
    int a = 1;
    std::cout<< typeid(a).name() << std::endl;
    Func_<int>::type h = 2;
    std::cout<< typeid(h).name() << std::endl;

    return 0;
}