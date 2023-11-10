#include<iostream>
#include<vector>
using namespace std;

int main(){

   vector<int>deq;
   int left=2;
   int right=22;

    for(int i=left;i<=right;i++){
            int m=i;
             bool ch=true;
             while(m>0){
                int t=m%10;
                if(t!=0&&i%t!=0){
                ch=false;
                break;
                }
                m/=10;
             }


        if(ch){
            deq.push_back(i);
        }
    }
   }



