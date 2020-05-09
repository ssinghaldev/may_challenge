class Solution {

public:

    bool checkStraightLine(vector<vector<int>>& coordinates) {

        double slope = double(coordinates[0][1] - coordinates[1][1]) / 

                       (coordinates[0][0] - coordinates[1][0]);

        for(int i = 1; i < coordinates.size() - 1; i++) {

            double s =     double(coordinates[i][1] - coordinates[i+1][1]) / 

                           (coordinates[i][0] - coordinates[i+1][0]);            

            

            if(s != slope) {

                return false;

            }

        }

        return true;

    }

};
