#include <iostream>
int main() {
#if __cplusplus >= 201103L
    std::cout << "C++11 或更高版本已启用 (__cplusplus = " << __cplusplus << ")\n";
#else
    std::cout << "C++11 未启用\n";
#endif
    return 0;
}