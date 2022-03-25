class Node:
    def __init__ (self,n):
        self.val = n
        self.children = set()
def findHeight(root:"Node"):
    if not root: return 0
    else: return 1+ max([findHeight(child) for child in root.children] or[0])

t=3
polycarp = "polycarp"

n = int(input())
users = {
    polycarp: Node(polycarp)
}
while n:
    n-=1
    poster,_,source = map(lambda x:x.lower(),input().split())
    if poster not in users:
        users[poster] = Node(poster)
    users[source].children.add(users[poster])
root = users[polycarp]
print(findHeight(root))


