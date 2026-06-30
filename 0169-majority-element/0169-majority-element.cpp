class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = 0, freq = 0;
        for(int i : nums){
            if(freq == 0){
                maj = i;
            }
            if(maj == i){
                freq++;
            }else{
                freq--;
            }

        }
        return maj;
    }
};