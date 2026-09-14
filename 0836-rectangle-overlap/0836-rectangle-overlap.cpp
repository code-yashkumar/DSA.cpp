class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        bool ans=true;
        if(rec2[0]>=rec1[2]) ans=false;
        if(rec2[2]<=rec1[0]) ans=false;
        if(rec2[3]<=rec1[1]) ans=false;
        if(rec2[1]>=rec1[3]) ans=false;
        return ans;
    }
};