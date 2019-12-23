//769. Max Chunks To Make Sorted
//Hashmap solution
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int> v;
        v=arr;
        sort(v.begin(),v.end());
        unordered_map<int,int> pos;
        for(int i=0;i<v.size();i++)
        pos[v[i]]=i;
        int p=-1,count=0;
        for(int i=0;i<v.size();i++){
            if(p<pos[arr[i]])
                p=pos[arr[i]];
            if(p<=i)
                count++;
        }
        return count;
    }
};
