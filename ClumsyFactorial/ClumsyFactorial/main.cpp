/**
*ClumsyFactorial
*by N.H.J.
*2021.4.1
*/
class Solution {
public:
    int stk[10000];
    int count=1;
    int sign=1;
    int temp=1;
    int k=0;
    int clumsy(int N) {
      
      for(int i=N;i>1;i--)
      {
        
        if(count==1)
        {
            temp=1;
            temp=sign*i*(i-1);
            if(i-1==1)
                stk[k++]=temp;
            cal();
            continue;
        }
        if(count==2)
        {
            temp=temp/(i-1);
            if(i-1==1)
                stk[k++]=temp;
            cal();
            continue;
        }
        if(count==3)
        {
            temp=temp+(i-1);
            stk[k++]=temp;
            cal();
            continue;
        }
        if(count==4)
        {
            sign=-1;
            if(i-1==1)
                stk[k++]=temp;
            continue;

      }
  }
    

      int ans=0;
      for(int i=0;i<k;i++)
      {
        ans=ans+stk[i];
      }

        return ans;


    }
    void cal()
    {
        if(count==4)
            count=1;
        else
            count++;
    }







};
