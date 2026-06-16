class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        while(s.find(n)==s.end()){
            s.insert(n);
            n = nextNumber(n);
            if(n == 1){
                return true;
            }    
        }
        return false;
    }
private: 
    int nextNumber(int n){
        int ans=0;
            while(n>0){
                int sum = n%10;
                ans += sum*sum;
                n/=10;
            }
            return ans;
    }
};
