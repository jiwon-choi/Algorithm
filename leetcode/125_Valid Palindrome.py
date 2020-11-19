'''
 # https://leetcode.com/problems/valid-palindrome/
'''


class Solution:
    def isPalindrome(self, s: str) -> bool:
        stack = []
        s = s.lower()
        for ch in s:
            if ch.isalnum():
                stack.append(ch)
        for i in range(len(stack)//2):
            if stack[i] != stack[-i-1]:
                return False
        return True
