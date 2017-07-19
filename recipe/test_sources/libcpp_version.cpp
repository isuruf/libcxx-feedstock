#include <iostream>

int main() {
#ifdef _LIBCPP_VERSION
    std::cout << "libc++ version: " << _LIBCPP_VERSION << std::endl;
    return 0;
#else
    std::cout << "Not using libc++" << std::endl;
    return 1;
#endif
}
