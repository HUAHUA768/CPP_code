#include <iostream>
int main() {
#if __cplusplus >= 201103L
    std::cout << "C++11 ����߰汾������ (__cplusplus = " << __cplusplus << ")\n";
#else
    std::cout << "C++11 δ����\n";
#endif
    return 0;
}