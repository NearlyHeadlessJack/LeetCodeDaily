//
//  main.cpp
//  weiyi
//
//  Created by N.H.J. on 2021/3/31.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n=0,m=0;
    while(n!=-10){
        n=0;
        m=0;
        cout<<"Please input a number!"<<endl;
        cin>>n;
        cout<<"Please input a <<number!"<<endl;
        cin>>m;
        n=n<<m;
        cout<<"Ans: "<<n<<endl;
    
    }
    
    
    
    
    
    return 0;
}
