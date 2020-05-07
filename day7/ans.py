from collections import deque

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isCousins(self, root: TreeNode, x: int, y: int) -> bool:
        
        queue = deque()
        queue.append((root, 0, 0))
        
        x_depth = None
        y_depth = None
        x_parent_val = None
        y_parent_val = None
        
        while queue:
            node, depth, parent_val = queue.popleft()
            
            if node.val == x:
                x_depth = depth
                x_parent_val = parent_val
            
            if node.val == y:
                y_depth = depth
                y_parent_val = parent_val         
            
            if node.left:
                queue.append((node.left, depth + 1, node.val))
            
            if node.right:
                queue.append((node.right, depth + 1, node.val))
        
        if x_depth != None and x_depth == y_depth and x_parent_val != y_parent_val:
            return True
        
        return False

