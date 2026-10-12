class Solution { 
public: 
    int countLargestGroup(int n) { 
        unordered_map<int,int> temp; 
        int max_size = 0;

        for (int i=1;i<=n;i++) { 
            int x=i; 
            int sum=0; 
            while(x!=0) { 
                int digit=x%10; 
                sum +=digit; 
                x /=10; 
            } 
            
            bool b=false; 
            for (auto &a: temp) { 
                if(sum==a.first) { 
                    a.second++; 
                    b=true; 
                    if (a.second > max_size) max_size = a.second;
                    break;
                } 
            } 
            
            if(!b) { 
                temp[sum] = 1; 
                if (1 > max_size) max_size = 1;
            } 
        } 
        
        int count=0; 
        for (auto &a: temp) { 
            if(a.second == max_size) {
                count++; 
            }
        } 
        return count; 
    } 
};
