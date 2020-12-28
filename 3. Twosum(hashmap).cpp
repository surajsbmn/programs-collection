/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n) 
 * Title : Two Sum leet code, another using two loops
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            int t=target-nums[i];
            if(map.find(t)!=map.end())
            {
                res.push_back(map[t]);
                res.push_back(i);
                return res;
            }
            map[nums[i]]=i;
        }
        return res;
        
    }
};
