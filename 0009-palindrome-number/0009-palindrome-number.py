class Solution(object):
    def isPalindrome(self, x):
        if x < 0:
            return False
        return x == self.reverse(x)
    def reverse(self, x):
        reversed_num = 0
        while x > 0:
            digit = x % 10
            reversed_num = reversed_num * 10 + digit
            x //= 10
        return reversed_num
        