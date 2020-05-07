class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele;
        int count = 0;
        for(int num: nums) {
            if(count == 0) {
                ele = num;
                count = 1;
            } else {
                if(ele != num) {
                    count -= 1;
                } else {
                    count += 1;
                }
            }
        }
        
        return ele;
    }
};
