class Solution {
public:
    bool find132pattern(vector<int>& nums) {
    
        for(int i=0;i<nums.size();i++)
        {
            for(int k=nums.size()-1;k>=0;k--)
            {
                if(nums[k]<=nums[i])
                    continue;
                else
                {
                    for(int j=i+1;j<k;j++)
                    {
                        if(nums[j]>nums[i]&&nums[j]>nums[k])
                            return true;
                    }
                }
            }
        }
        return false;
       }
private:
    int mid[10000];
};





class Solution {
public:
    int isExist(Ll* phead,int n,int pp)
    {

        Ll per=*phead;
        if(per->next==NULL)
        {
            Ll newl=(Ll)malloc(sizeof(Ll));
            newl->number=n;
            newl->numbers=1;
            newl->minp=pp;
            newl->maxp=pp;
            newl->next=NULL;
            Ps newp=(Ps)malloc(sizeof(Ps));
            newp->p=pp;
            newp->next=NULL;
            newl->pos=nexp;
            per->next=newl;
            numofnumbers++;
            return 0;
        }
        else
            per=per->next;
        while(per->next!=NULL)
        {
            if(per->number!=n)
                per=per->next;
            else
            {
                per->maxp=pp;
                per->numbers++;

                Ps newp=(Ps)malloc(sizeof(Ps));
                newp->p=pp;
                newp->next=NULL;

                Ps pec=per->pos;
                while(pec->next!=NULL)
                {
                    pex=pec->next;
                }
                pec->next=newp;
                return 0;
            }
        }
        if(per->number!=n)
        {
            Ll newl=(Ll)malloc(sizeof(Ll));
            newl->number=n;
            newl->numbers=1;
            newl->minp=pp;
            newl->maxp=pp;
            newl->next=NULL;
            Ps newp=(Ps)malloc(sizeof(Ps));
            newp->p=pp;
            newp->next=NULL;
            newl->pos=nexp;
            per->next=newl;
            numofnumbers++;
            return 0;
        }
        else
        {
            per->maxp=pp;
                per->numbers++;

                Ps newp=(Ps)malloc(sizeof(Ps));
                newp->p=pp;
                newp->next=NULL;

                Ps pec=per->pos;
                while(pec->next!=NULL)
                {
                    pex=pec->next;
                }
                pec->next=newp;
                return 0;
        }
        return 0;
    }
    bool find132pattern(vector<int>& nums) {
        if(nums.size()<3)
            return false;
        Ll LHead=(Ll)malloc(sizeof(Ll));
        LHead->next=NULL;
        for(int i=0;i<nums.size();i++)
        {
            isExist(&LHead,nums[i],i);
        }
        if(numofnumbers<3)
            return false;





}





private:
    typedef struct Linklist
    {
        int number;
        int numbers;
        int minp;
        int maxp;
        struct Position * pos;
        struct Linklist * next;
    }*Ll;
    typedef struct Position
    {
        int p;
        struct Position * next;
    }*Ps;
    
    int numofnumbers=0;


};



class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        vector<int> stk;
        int n = nums.size();
        int l = -1e9;
        for(int i = n - 1; i >= 0; i--) {
            if (nums[i] < l) return true;
            while(stk.size() && stk.back() < nums[i]) {
                l = stk.back();
                stk.pop_back();
            }
            stk.push_back(nums[i]);
        }
        return false;
    }
};

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int>stk;
        int k=INT_MIN;
        for(int i=nums.size()-1;i>=0;--i)
        {
            if(!stk.empty() && k>nums[i])
                return true;
            while(!stk.empty() && nums[i]>stk.top())
            {
                k=max(k,stk.top());
                stk.pop();
            }
            stk.push(nums[i]);
        }
        return false;
    }
};
