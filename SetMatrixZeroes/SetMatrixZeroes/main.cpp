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
                    if(inArrary(zerosm,k,i))
                        k++;
                    if(inArrary(zerosn,t,j))
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

    bool inArrary(int a[],int k,int aa)
    {
        for(int i=0;i<k;i++)
        {
            if(a[i]==aa)
            {
                return false;
            }
        }
        a[k]=aa;
        return true;

    }

};

/*
SetMatrixZeroes
by N.H.J.
2021.3.21
Ver.3
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                    setMinus(matrix,i,j);
            }
        }
        for(int i=matrix[0].size()-1;i>=1;i--)
        {
            if(matrix[0][i]==0)
            {
                for(int j=0;j<matrix.size();j++)
                    matrix[j][i]=0;
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][0]==0)
            {
                for(int j=0;j<matrix[0].size();j++)
                    matrix[i][j]=0;
            }
        }
            if(this->col1==0)
                setZero(matrix);
    }

    void setMinus(vector<vector<int>>& mat,int m,int n)
    {
    if(n!=0)
    {
       mat[m][0]=0;
        mat[0][n]=0;
    }
    else
        this->col1=0;
    }
    void setZero(vector<vector<int>>& mat)
    {
        for(int i=0;i<mat.size();i++)
            mat[i][0]=0;
    }
private:
    int col1=1;
};
