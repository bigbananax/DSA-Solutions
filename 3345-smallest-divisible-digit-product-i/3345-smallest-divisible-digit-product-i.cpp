class Solution {
public:
    int sum(int n){
        int sum = 1; 
        while(n){
            sum*=n%10;
            n/=10;
            
        }
        return sum;
    }
    int smallestNumber(int n, int t) {
        for(int i = n; i<=100; ++i){
            if(sum(i)%t==0){
                return i;
            }
        }
        return 0;
        
    }
};