from TrieTree import node, tree

if __name__ == '__main__':
    f = open('1.txt', 'r')
    l = f.read()
    l = l.split()
    res = tree()
    # res.init_tree()
    for v in l:
        res.insert_word(v)
    l = set(l)
    for v in l:
        cnt = res.find_word(v)
        print("%s:%d"%(v,cnt))