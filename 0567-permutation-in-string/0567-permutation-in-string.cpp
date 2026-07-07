class Solution {
public:
    bool isfreqsame(int freq[], int freq1[]){
        for(int i=0; i<26; i++){
            if(freq[i]!=freq1[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i=0; i<s1.length(); i++){
            freq[s1[i] - 'a']++;
        }
        int windsize = s1.length();
        for(int i=0; i<s2.length(); i++){
            int windIdx = 0, idx = i;
            int windfreq[26] = {0};
            while(windIdx < windsize && idx < s2.length()){
                windfreq[s2[idx] - 'a']++;
                windIdx++; idx++;
            }
            if(isfreqsame(freq, windfreq)){
                return true;
            }
        }
        return false;
    }
};