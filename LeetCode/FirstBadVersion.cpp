#include<iostream>
using namespace std;
int main(){
    // The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int m) {
        int s = 0;
        int e = m-1;
        int Solution = m;
        while(s<=e){
            int mid =s+(e-s)/2;
            if(isBadVersion(mid)){
                e = mid-1;
                Solution = mid;
            }else{
                s = mid+1;
            }
        }
        return Solution;
    }
};
}