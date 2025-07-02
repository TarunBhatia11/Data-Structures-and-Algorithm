// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        vector<int>hashCurr(26,0);
        vector<int>hashGiven(26,0);
        
        int n = txt.size();
        int i = 0;
        int j  = 0;
        int k = pat.length();
        int noOfAnagram = 0;
        
        for(auto elem : pat)
        {
            hashGiven[elem-'a']++;
        }
        
        while(j<n)
        {
            // calculation
            hashCurr[txt[j]-'a']++;
        
            if(j-i+1 < k) ++j;
            
            // window size hit
            else 
            {
                // conclusion
                if(hashCurr == hashGiven)
                {
                    noOfAnagram++;
                }
                // slide the window
                hashCurr[txt[i]-'a']--;
                ++i;
                ++j;
            }
        }
        
        return noOfAnagram;
    }
};
