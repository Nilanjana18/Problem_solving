class Solution(object):
    def isValid(self, s):
        stack=[]
        dict1={")":"(","}":"{","]":"["}
        opening_brackets=set(["(","{","["])
        for x in s:
            if x in opening_brackets:
                stack.append(x)
            elif stack and stack[-1]==dict1[x]:
                stack.pop()
            else:
                return False
        if stack:
            return False
        else:
            return True
