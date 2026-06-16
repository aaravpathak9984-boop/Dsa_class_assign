class Solution {
public:
    int rob(vector<int>& nums) {
        int p2 = 0, p1 = 0, c;
        
        for (int money : nums) {
            c = max(p1, p2 + money);
            p2 = p1;
            p1 = c;
        }
        
        return p1;
    }
};

