class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int count=0;
        // int maxi=10001;
        // slope formula ==(y2-y1)/(x2-x1)

        for(int i=0; i<points.size(); i++){
            unordered_map<double,int> mp;
            for(int j=i+1; j<points.size(); j++){
                if(points[i][0]==points[j][0]){
                    mp[10001]++;
                }
                else{
                    double slope=((double)(points[j][1]-points[i][1])/(double)(points[j][0]-points[i][0]));
                    mp[slope]++;
                }
            }
            for(auto x: mp){
                count=max(count,x.second+1);
            }
        }

    return max(1,count);
    }
};