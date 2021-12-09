class Solution {
public:
    
    bool canReach(vector<int>& arr, int start) {
        int len = arr.size();
        
        queue<int> q;
        q.push(start);
        
        
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            
            //cout << cur << "  ";
            if(arr[cur] == 0)
                return true;
            
            if(arr[cur]<0)
                continue;
            
            if(cur + arr[cur] < arr.size() )
                q.push(cur+arr[cur]);
            
            if(cur - arr[cur] >= 0)
                q.push(cur-arr[cur]);
            
            //cout << q.size()<< endl;
            arr[cur] *= -1;
        }
        
        return false;
    }
};
