//643. Maximum Average Subarray I
double findMaxAverage(vector<int>& nums, int k) {double win=0;
        for(int i=0;i<k;i++){
            win+=nums[i];
        };
        double max=win;
        for(int i=0;i<nums.size()-k;i++){
         win=win-nums[i]+nums[i+k];
            if(max<win)
                max=win;
        }
                                                     return max/k;
    }
