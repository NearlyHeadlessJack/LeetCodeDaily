/*
SetMatrixZeroes
by N.H.J.
2021.3.21
Ver.1
*/


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int zeros[m*n][3];
        int k=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    zeros[k][0]=i;
                    zeros[k][1]=j;
                    k++;
                }
            }
        }
        int numOfZeros=k;
        for(int k=0;k<numOfZeros;k++)
        {
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][zeros[k][1]]=0;
            }
            for(int j=0;j<matrix[0].size();j++)
            {
                matrix[zeros[k][0]][j]=0;
            }
        }
         
    }
};

/*
SetMatrixZeroes
by N.H.J.
2021.3.21
Ver.2
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int zerosm[m];
        int zerosn[n];
        int k=0,t=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    zerosm[k]=i;
                    k++;
                    zerosn[t]=j;
                    t++;
                }
            }
        }
        int numOfZerosm=k;
        int numOfZerosn=t;
        for(int k=0;k<numOfZerosm;k++)
        {
           for(int j=0;j<matrix[0].size();j++)
            {
                matrix[zerosm[k]][j]=0;
            }
        }
        for(int k=0;k<numOfZerosn;k++)
        {
           for(int j=0;j<matrix.size();j++)
            {
                matrix[j][zerosn[k]]=0;
            }
        }
  
    }
};
