//Leetcode Question: https://leetcode.com/problems/maximum-product-subarray/
//OPTIMISED BRUTE FORCE O(n^2) solution 
int maxProduct(vector<int>& nums) { int maxp=INT_MIN;
                                       
        for(int i=0;i<nums.size();i++){int pro=1;
            for(int j=i;j<nums.size();j++){
                pro=pro*nums[j];
                if(pro>maxp)
                    maxp=pro;
            }
        }
                                       return maxp;
    }
    //O(n) Approach Also listed
    //https://leetcode.com/problems/maximum-product-subarray/discuss/48230/Possibly-simplest-solution-with-O(n)-time-complexity
