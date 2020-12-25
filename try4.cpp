#include <iostream>
#include <vector>
#include <utility>
#include <set>
#include<map>
std::pair<int, int> findTwoSum(const std::vector<int>& list, int sum)
{
    std::pair<int, int> a;
    for (int i = 0; i < list.size()-1; i++)
    {
        for(int  j = i+1;j<list.size(); j++)
        {
            if(list[i]+list[j]== sum)
            {
                a.first = list[i];
                a.second = list[j];
                return a;
            }
        }
    }
    return a;
}

int main()
{
    std::vector<int> list = {3, 1, 5, 7, 5, 9};
    std::pair<int, int> indices = findTwoSum(list, 10);
    std::cout << indices.first << '\n' << indices.second;
}
