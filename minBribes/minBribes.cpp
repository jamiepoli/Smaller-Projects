#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int T;
    
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){

        int n;
        cin >> n;
        vector<int> q(n);


        for(int q_i = 0;q_i < n;q_i++){
         cin >> q[q_i];
     }


     int ans = 0;

     for (int i = n - 1; i >= 0; i--){
        if (ans == -1)
            break;

        int k = i;

        while (q[k] != i + 1)
            k--;
        if (i - k > 2){
            ans = -1;
            break;
        } else {
            while (k != i){
                swap(q[k], q[k + 1]);
                k++;
                ans++;
            }
        }
    }
    if (ans == -1)
        puts("Too chaotic");
    else
        cout << ans << "\n";
}
return 0;
}
