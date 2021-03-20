/*
EvaluateReversePolishNotation
by N.H.J.
ver.2
2021.3.20
*/

class Solution {
public:
    int arrarys[10000];
    int length=0;
    int numlength=0;
    
    int evalRPN(vector<string>& tokens) {
        

        for(int i=0;i<tokens.size();i++)
        {

            if(tokens[i]=="+")
            {
                arrarys[length-2]=arrarys[length-2]+arrarys[length-1];
                length=length-1;
            }
            else if(tokens[i]=="-")
            {
                arrarys[length-2]=arrarys[length-2]-arrarys[length-1];
                length=length-1;
            }
            else if(tokens[i]=="*")
            {
                arrarys[length-2]=arrarys[length-2]*arrarys[length-1];
                length=length-1;
            }
            else if(tokens[i]=="/")
            {
                 arrarys[length-2]=arrarys[length-2]/arrarys[length-1];
                length=length-1;
            }
            else
            {
                arrarys[length]=stoi(tokens[i]);
                length++;
            }
                
        }
        
        return arrarys[0];

    }
   
};
/*
EvaluateReversePolishNotation
by N.H.J.
ver.1
2021.3.20
*/
/*
EvaluateReversePolishNotation
by N.H.J.
2021.3.20
*/

class Solution {
public:
    int arrarys[10000];
    int length=0;
    int numlength=0;
    
    int evalRPN(vector<string>& tokens) {
        

        for(int i=0;i<tokens.size();i++)
        {

            if(tokens[i]=="+")
            {
                inStack(-201);
            }
            else if(tokens[i]=="-")
            {
                inStack(-202);
            }
            else if(tokens[i]=="*")
            {
                inStack(-203);
            }
            else if(tokens[i]=="/")
            {
                inStack(-204);
            }
            else
            {
                inStack(stoi(tokens[i]));
            }
                
        }
        
        return arrarys[0];

    }
    void inStack(int a)
    {
        if(a>=-200)
        {
            numlength++;
            arrarys[length]=a;
            length++;
        }
        else
        {
            if(a==-201)
            {
                arrarys[length-2]=arrarys[length-2]+arrarys[length-1];
                length=length-1;
            }
            else if(a==-202)
            {
                arrarys[length-2]=arrarys[length-2]-arrarys[length-1];
                length=length-1;
            }
            else if(a==-203)
            {
                arrarys[length-2]=arrarys[length-2]*arrarys[length-1];
                length=length-1;
            }
            else if(a==-204)
            {
                arrarys[length-2]=arrarys[length-2]/arrarys[length-1];
                length=length-1;
            }
        }
    }
};





