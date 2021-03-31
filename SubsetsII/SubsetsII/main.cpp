/*
Subsets
by N.H.J.
2021.3.31
ver.1
*/

class Solution {
public:
    vector<int> t;
    vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int>& nums) {

    int n = nums.size();
        for (int mask = 0; mask < (1 << n); ++mask) {
            t.clear();
            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    t.push_back(nums[i]);
                }
            }
            ans.push_back(t);
        }
    return ans;

    }
};

/*
SubsetsII
by N.H.J.
2021.3.31
ver.2
*/
class Solution {
public:
void quickSort(vector<int>& arrays,int num,int begin)
{
    if(num>1)
    {
        int low,high,stand;
        stand=arrays[begin];
        low=begin;
        high=low+num-1;

        while(low<high)
        {
            if(arrays[high]>stand)
            {
                high--;
                continue;
            }
            else
            {
                arrays[low]=arrays[high];
                while(low<high)
                {
                    if(arrays[low]<=stand)
                    {
                        low++;
                        continue;
                    }
                    else
                    {
                        arrays[high]=arrays[low];
                        break;
                    }
                    
                }

            }
        
        }
         arrays[low]=stand;

         quickSort(arrays,num/2,begin);
         quickSort(arrays,num-(num/2),num/2);
    }

}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<int> t;
        vector<vector<int>> ans;

        quickSort(nums,nums.size(),0);
        // for(int i;i<nums.size();i++)
        // {
        //     if(nums[i]==nums[i+1])
        //     {
        //         auto it=nums.[i+1];
        //         nums.erase(it);
        //     }
        // }
        for(auto it=nums.begin();it!=nums.end();it++){
            if(*it==*(it+1)) nums.erase(it);

        }

        ans.push_back(nums);
        // int n=nums.size();
        // for(int mask;mask<(1<<n);mask++)
        // {
        //     t.clear();
        //     for(int i=0;i<n;i++)
        //     {
        //         if(mask & (1<<n))
        //             t.push_back(nums[i]);
        //     }
        //     ans.push_back(t);
        // }
        return ans;


    }
};

/*
SubsetsII

2021.3.31
ver.3
*/
class Solution {
    vector<vector<int>>res;
    vector<int>temp;
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>null;
        res.push_back(null);
        sort(nums.begin(),nums.end());
        DFS(nums,0);
        return res;
    }
    void DFS(vector<int>&nums,int s)
    {
        for(int i=s;i<nums.size();i++)
        {
            if(i!=s&&nums[i]==nums[i-1])
            continue;
            temp.push_back(nums[i]);
            res.push_back(temp);
            DFS(nums,i+1);
            temp.pop_back();
        }
    }
};
