//Note that: Sorting and taking largest 3 elements wont work as negative numbers can also exist.
//Brute force approach O(n^3)
int maximumProduct(vector<int>& nums) {int prom=INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int k=nums.size()-1;k>i;k--){int pro=1;
                for(int j=i+1;j<k;j++){
                pro=nums[j]*nums[k]*nums[i];
                if(pro>prom)
                    prom=pro;
                }
            }
        }
    return prom;
    }
    
//To check whether 2 large negative elements and 1 largest positive element can combine to form larger product.
//this even fits for all negative integer as last 3 numbers product will be maximum

//Sorting Approach O(nlog(n))
int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return max(nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3],nums[0]*nums[1]*nums[nums.size()-1]);
    }
    
/*DP APPROACH
We need not necessarily sort the given numsnums array to find the maximum product. 
Instead, we can only find the required 2 smallest values(min1 and min2) 
and the three largest values(max1, max2, max3max1,max2,max3) in the nums array,
by iterating over the numsnums array only once.
At the end, again we can find out the larger value out of
 return max(min1*min2*max1, max1*max2*max3)
*/
