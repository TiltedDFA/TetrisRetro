#include <iostream>

#include "cll/array.hpp"

template<typename T>
void prnt(T const& val)
{
    for (auto const& x : val)
        std::cout << x << '\t';
    std::cout << '\n';
}
int main()
{
    cll::Array<int, 4> arr(92);
    prnt(arr);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}