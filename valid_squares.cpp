class Solution {
public:
double dist(vector<int> & x1, vector<int> &x2){
    return sqrt((x2[0]-x1[0])*(x2[0]-x1[0]) + (x2[1]-x1[1])*(x2[1]-x1[1]));
} 

    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>>points = {p1, p2, p3,p4};
        set<double>length;
        for(int i=0;i<4;i++){
       for(int j=i+1;j<4;j++){
       double curr = dist(points[i], points[j]);
       if(curr!=0)
           length.insert(curr);
       else
        return false;
       }
       }
       return length.size()==2;
    }
};
