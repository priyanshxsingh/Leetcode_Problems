class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int ls=0, rs=height.size()-1;

        while(ls<rs){
            int area= (rs-ls)*min(height.at(ls),height.at(rs));
            maxArea= max(maxArea, area);
            if(height.at(ls)>height.at(rs)){
                rs--;
            } else {
                ls++;
            }
        }
        return maxArea;
    }
};