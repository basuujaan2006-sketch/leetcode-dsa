class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int un = 0;
        for (int i : nums){
            un ^= i;
        }
        return un;
    }
};