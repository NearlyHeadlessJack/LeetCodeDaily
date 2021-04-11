/*
*UglyNumberII
*by N.H.J.
*2021.4.11
*ver.1 C++
*/
class Solution {
public:
    int nthUglyNumber(int n) {
        const int M = 2147483647;
        vector<int> ugly;
        for (long long a=1;a<M;a<<=1){
            for (long long b=a;b<M;b*=3){
                for (long long c=b;c<M;c*=5){
                    ugly.push_back(c);
                }
            }
        }
        sort(ugly.begin(),ugly.end());
        return ugly[n-1];
    }
};




