// Solution 1 using Rescursion 

class Solution {
public:
    bool helper(int n, bool check){
        if(n <= 0) return false;
        else if(n == 1) return true;
        else if(n%3 == 0) check = helper(n/3, check);
        else check = false;
        return check;
    }

    bool isPowerOfThree(int n) {
        bool check;
        return helper(n, check);
    }
};

// Solution 2 Using Bit representation 
class Solution {
public:

    bool isPowerOfThree(int n) {
        return n > 0 && 1162261467 % n == 0;
    }
};
