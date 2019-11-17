//1～nまでの順列をvectorに格納する

#include <bits/stdc++.h>
using namespace std;

//permutationはグローバルにすること
//*********************************

vector<vector<int> > permutation(0,vector<int>(0));

void perm(int n){
        vector<int> buf(n);
        iota(buf.begin(),buf.end(),1);
        do {
                permutation.push_back(buf);
        } while(next_permutation(buf.begin(),buf.end()));

        return;
}

//*********************************
/*int main(){
        perm(5);
        for(int i=0; i<120; i++) {
                for(int j=0; j<5; j++) {
                        cout<<permutation.at(i).at(j);
                }
                cout<<endl;
        }
   }*/
