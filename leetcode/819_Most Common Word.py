'''
 # https://leetcode.com/problems/most-common-word/
'''


class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        mystr = ""
        for i in paragraph:
            if not i.isalnum():
                mystr += ' '
            else:
                mystr += i.lower()
        word_list = mystr.split()

        count = collections.Counter(word_list)
        for i in count.most_common():
            if i[0] not in banned:
                return i[0]
