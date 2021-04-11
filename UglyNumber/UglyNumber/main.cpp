/*
*UglyNumber
*by N.H.J.
*2021.4.11
*/

class Solution {
public:
    bool isUgly(int n) {
        if(n<=0)
            return false;

        if(five(three(two(n)))==0||five(three(two(n)))==1)
            return true;
        else
            return false;

    }
    int two(int n)
    {
        while((n%2)==0&&n!=0)
        {
            n=n/2;
        }
        return n;
    }
    int three(int n)
    {
        while((n%3)==0&&n!=0)
        {
            n=n/3;
        }
        return n;
    }
    int five(int n)
    {
        while((n%5)==0&&n!=0)
        {
            n=n/5;
        }
        return n;
    }

};
