#include <iostream>
#include <algorithm> //std::count_if
#include <vector>

main()
{
    auto isOdd = [](int candidate) {return candidate % 2 !=0;}; // Lambda
    std::vector nums{2,3,4,-1,1};
    int odds = std::count_if(begin(nums), end(nums), isOdd);
    int even = std::count_if(begin(nums), end(nums), [](int candidate){return candidate % 2 == 0;});
    std::cout << odds;
    std::cout << even;
}
