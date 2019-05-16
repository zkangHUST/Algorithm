# 定义节点，value表示当前字符，child表示下一个节点，下一个节点有a-z 26种可能性，因此建立一个26个元素的列表，freq表示出现的频次
class node:
    def __init__(self):
        self.value = 0
        # self.child= []
        self.child = [0 for i in range(26)]
        self.freq = 0
# 定义字典树
class tree:
    # 初始化树
    def __init__(self):
        self.root = node()
    # 插入单词
    def insert_word(self,word):
        chars = list(word)
        p = self.root
        for v in chars:
            v = v.lower()
            if (p.child[ord(v) - ord('a')] == 0):
                s = node()
                s.value = v
                s.freq = 1
                p.child[ord(v) - ord('a')] = s                
            else:
                p.child[ord(v) - ord('a')].freq += 1
            p = p.child[ord(v) - ord('a')]
    # 判断子节点是否为空
    def is_child_null(self, node):
        for i in range(26):
            if node.child[i] != 0:
                return False
        return True
    # 子节点频次之和
    def child_freq_sum(self,node):
        cnt = 0
        for i in range(26):
            if node.child[i] != 0:
                cnt += node.child[i].freq
        return cnt
    # 查找某个单词出现的频次
    def find_word(self,word):
        p = self.root
        cnt = 0
        chars = list(word)
        for v in chars:
            v = v.lower()
            if p.child[ord(v) - ord('a')] == 0 :
                cnt = 0
                return 0
            else: 
                p = p.child[ord(v) - ord('a')]
                cnt = p.freq
        if not self.is_child_null(p):
            cnt = cnt - self.child_freq_sum(p)
        return cnt

if __name__ == '__main__':
    # s = node()
    # print(s.child)
    res = tree()
    # res.init_tree()
    res.insert_word("a")
    # res.insert_word("hello")
    # res.insert_word("word")
    # cnt = res.find_word("word")
    # print(cnt)
    cnt = res.find_word("a")
    print(cnt)