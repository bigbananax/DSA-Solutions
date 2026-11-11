class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1,int need2) {
        long long check1 = 1LL * max(need1, need2) * costBoth;
        long long check2 = 1LL * need1 * cost1 + 1LL * need2 * cost2;
        long long common = min(need1, need2);
        long long check3 = 1LL * common * costBoth+ 1LL * (need1 - common) * cost1 + 1LL * (need2 - common) * cost2;

        return min({check1, check2, check3});
    }
};