#include <stdio.h>
#include <string.h>

class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int t, i, j, k, s;
		int count = 0;

		t = S.length();

		while(t--)
		{

			j = J.length();
			s = S.length();
			count = 0;
			for(i=0; i<s; i++)
			{
				for(k=0; k<j; k++)
				{
					if(S[i]==J[k]){
						count++;
						break;
					}

				}
			}
			cout<<count<<"\n";
		}
		return count;
	}
};