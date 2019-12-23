//849. Maximize Distance to Closest Person
int maxDistToClosest(vector<int>& seats) {
        int a=0,b=0,m=0,p=0,i=0,j=seats.size()-1;
        while(seats[i]==0)
        i++;                                          
        m=i;
        while(seats[j]==0)
        j--;
        int k=seats.size()-j-1;
        m=max(m,k);
        for(i;i<=j;i++){
            if(seats[i]==1)
            {   a=b;
                b=i;
                p=(b-a)/2;
                if(p>m)
                m=p;
        }}
            return m;
    }
