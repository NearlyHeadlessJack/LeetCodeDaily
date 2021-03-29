/*
ReverseBits
by N.H.J.
2021.3.29
ver.1
*/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        
        for(int i=31;i>=0;i--)
        {
            ans=ans+(n&1)*pows(i);
            n>>=1;
        }


        return ans;
    }
    int pows(int i)
    {
        int ten=1;
        for(int j=0;j<i;j++)
        {
            ten=ten*10;
        }
        return ten;
    }


};

/*
ReverseBits
by N.H.J.
2021.3.29
ver.2
*/
class Solution {
public:
uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        //进制的本质
        int i=32;
        while(i--)
        {
            ans<<=1;
            ans+=n&1;
            n>>=1;
        }
        return ans;
    }
    };
