class Solution:

    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:

        (x1, y1), (x2, y2) = coordinates[:2]

        for x,y in coordinates:

            if (x - x1) * (y1 - y2) != (x1 - x2) * (y - y1):

                return False

        

        return True

        

        
