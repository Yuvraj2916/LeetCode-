class Solution(object):
    def isMatch(self, s, p):
        memo = {}
        def match(i, j):
            if (i, j) in memo:
                return memo[(i, j)]
            if j == len(p):
                res = (i == len(s))
            else:
                first = i < len(s) and p[j] in (s[i], '.')
                if j + 1 < len(p) and p[j + 1] == '*':
                    res = match(i, j + 2) or (first and match(i + 1, j))
                else:
                    res = first and match(i + 1, j + 1)
            memo[(i, j)] = res
            return res

        return match(0, 0)
        