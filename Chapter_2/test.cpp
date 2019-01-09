#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> my_map;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++)
        {
            my_map[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            auto iter = my_map.find(target - nums[i]);
            if (iter != my_map.end() && iter->second > i)
            {
                result.push_back(i + 1);
                result.push_back(iter->second + 1);
                break;
            }
        }
        return result;
    }
};
template <class iterator>
void print(iterator begin, iterator end){
     for(iterator it = begin; it != end; ++it){
         std::cout << *it << std::endl;
     }   
 }
int main()
{
    Solution my_test;
    vector<int> nums = {2, 7, 11, 15};
    int target = 18;
    vector<int> result1 = my_test.twoSum(nums, target);
    for(int i = 0; i < result1.size(); i++)
    {
        printf("%d\n",result1[i]);
    }
    return 0;
}