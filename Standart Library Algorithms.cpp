#include <iostream>
#include <algorithm> //for std::sort
#include <numeric> // for std::accumulate
#include <vector>
#include <list>
main()
{
std::vector vectorNum {3,4,2,1};
std::list listNum {3,4,2,1};
int total = 0;
//std::sort
std::sort(vectorNum.begin(), vectorNum.end());
for (auto num : vectorNum)
    {
        std::cout << num << " ";
    }
total = std::accumulate(vectorNum.begin(), vectorNum.end(), 0);
std::cout << total;
}


