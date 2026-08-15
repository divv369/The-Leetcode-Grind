class Solution {
public:
    int x[4]={-1,1,0,0};
    int y[4]={0,0,-1,1};
    bool valid(int i,int j,int n,int m){
        if(i<0 || i>=n ||j<0 || j>=m){
            return false;
        }
        return true;
    }

    int orangesRotting(vector<vector<int>>& adj) {
        int n=adj.size()    ;
        int m=adj[0].size();
        int time=0;
        int fresh=0 ;
        int i;
        int j;
        queue<pair<int,int>> q;
        for(i=0 ;i<n ;i++){
            for(j=0 ;j<m ;j++){
                if(adj[i][j]==2){
                    q.push({i,j});
                    adj[i][j]=0;
                }
                else if (adj[i][j]==1) fresh++ ;
            }
        }
        while(!q.empty() && fresh>0){
            time++;
            int s=q.size();
            while(s--){
                pair<int,int> p=q.front();
                q.pop();
                for(int k=0 ;k<4 ;k++){
                    int row=p.first + x[k];
                    int col=p.second + y[k];
                    if(valid(row,col,n,m) && adj[row][col]==1){
                        q.push({row,col});
                        adj[row][col]=0 ;
                        fresh--;
                    }
                }
            }
        }
        if(fresh>0) return -1;
        return time;
    }
};