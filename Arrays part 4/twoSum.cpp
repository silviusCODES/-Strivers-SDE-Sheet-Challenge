class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int,int>map;

        int n = nums.size();

        for(int i =0; i < n ; i++){
            int num = nums[i];
            int more = target - num;

            if(map.find(more) != map.end()){
                return{map[more], i};
            }
            map[num] = i;
        }
        return{-1,-1};
        
    }
};