#include <iostream>
#include <vector>
#include <utility>
#include <set>
#include<map>
std::pair<int, int> findTwoSum(const std::vector<int>& list, int sum)
{
    std::pair<int, int> a;
    a.first = -1;
    a.second = -1;
    std::set<int> check1;
    for (int i = 0; i < list.size(); i++)
    {
        check1.insert(list[i]);
    }

    for(int i = 0;i < list.size(); i++)
    {
    
        if(check1.find(sum - list[i])!=check1.end())
        {
            a.first = i;
            break;
        }
        if(list[i]*2==sum)
        {
            a.first = i;
        }
    
    }
    for (int i = (a.first+1); i <list.size(); i++)
    {

        if(list[a.first]==sum-list[i]){
            
            a.second = i;
            std::cout<<i;
            break;
        }
    }
    if(a.second == -1)
    {
        a.first = -1;
    }
    return a;
}

int main()
{
    std::vector<int> list = {3, 1, 5, 7, 5, 9};
    std::pair<int, int> indices = findTwoSum(list, 10);
    std::cout << indices.first << '\n' << indices.second;
}
