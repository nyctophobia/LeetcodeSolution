class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int end = 0;
        int max = 0;
        std::bitset<128> exsit;
        std::vector<int> position(128,0);

        exsit.reset();

        for(int i  = 0; i < s.size(); i++){
        	if(exsit.test(s[i])){
        		for(int j = start; j < position[s[i]]; j++){
        			exsit.reset(s[j]);
        		}
        		start = position[s[i]] + 1;
        		exsit.set(s[i]);
        		position.at(s[i]) = i;
        	}else{
        		exsit.set(s[i]);
        		position.at(s[i]) = i;
        		end = i;
        		max = std::max(max, end - start + 1);
        	}
        }

        return max;
    }
};