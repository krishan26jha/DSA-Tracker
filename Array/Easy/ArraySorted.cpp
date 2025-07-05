// Leetcode : 1952
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
        int cnt = 0;
        for(int i=1;i<nums.size();i++){

            if(nums[i] < nums[i-1]){
                cnt++;
            }
        }
        if(nums[0] < nums[nums.size()-1]){
            cnt++;
        }

        if(cnt < 2){
            return true;
        }
        return false;
 }

 int main(){
    vector<int>nums = {1,3,5,6,2};
    bool ans  = check(nums);
    cout<<ans<<endl;
    return 0;
 }
