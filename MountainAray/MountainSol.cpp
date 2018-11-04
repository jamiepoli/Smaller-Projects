#include <algorithm>

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int a = *max_element(A.begin(), A.end());

        for (int i = 0; i < A.size; i++){
        	if (a == A[i]){
        		a = A[i];
        		break;
        	}
        }

        return a;
    }
};