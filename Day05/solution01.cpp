class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int n = arr.size();
        list<int> l;
        int i=0, j=0;
        vector<int> ans;
        
        while(j<n){
            //check if the number is negative or not 
            if(arr[j] < 0) l.push_back(arr[j]);
            
            
            
            if(j-i+1 < k)
            j++;
            
            else if(j-i+1 == k){
                //window size method
                if(l.size() == 0) ans.push_back(l.front());
                else{
                    ans.push_back(l.front());
                }
                
                if(arr[i] == l.front() && !l.empty())
                l.pop_front();
                
                i++;
                j++;

            }
            
            
        }
        return ans;
    }
};
