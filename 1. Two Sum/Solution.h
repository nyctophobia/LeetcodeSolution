class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        for(auto it = nums.begin(); it != nums.end(); ++it){
            auto item = map.find(*it);
            if(item != map.end()){
                return std::move(std::vector<int>({item->second, std::distance(nums.begin(),it)}));
            }else{
                map.insert(std::make_pair(target - *it, std::distance(nums.begin(),it)));
            }
        }
    }
};
