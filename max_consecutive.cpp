class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j = -1;
        int ans = 0, c = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                c++;
            }
            while(c > k){
                j++;
                if(nums[j] == 0){
                    c--;
                }
            }
            int len = i -j;
            ans = max(ans, len);
        }
        return ans;
    }
};
