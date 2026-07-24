class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res ;
        if(newInterval.size()==0 ){ return intervals;}
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end()) ;
        int start1=intervals[0][0];
        int end1=intervals[0][1] ;
        // int start=newInterval[0];
        // int end=newInterval[1] ;
        for(int i=1 ;i<intervals.size(); i++){
            int start2=intervals[i][0];
            int end2=intervals[i][1];
            // if(end1>=start){
            //     start1=min(start1,start);
            //     end1=max(end1,end);
            // }
            if(end1>=start2){
                start1=start1;
                end1=max(end1,end2);
                continue;
            }
            res.push_back({start1,end1});
            start1=start2;
            end1=end2;
    }
    res.push_back({start1,end1});
    return res;
    }
    
};