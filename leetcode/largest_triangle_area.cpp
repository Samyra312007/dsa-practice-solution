class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double area = INT_MIN;
        for(int i = 0; i<points.size(); i++){
            for(int j = 0; j<points.size(); j++){
                for(int k = 0; k<points.size(); k++){
                    double a = 0.5*abs(points[i][0]*(points[j][1] - points[k][1]) + points[j][0]*(points[k][1] - points[i][1]) + points[k][0]*(points[i][1] - points[j][1]));
                    area = max(a, area);
                }
            }
        }
        return area;
    }
};