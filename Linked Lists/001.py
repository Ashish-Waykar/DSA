class Node:
    def __init__(self,data):
        self.data = data
        self.next=None
class LinkedList:
    def __init__(self):
        self.head=None
    def __printList__(self):
        temp=self.head
        while(temp):
            print(temp.data)
            temp=temp.next
if __name__=='__main__':
    llist=LinkedList()
    llist.head=Node(2)
    first=Node(4)
    second=Node(6)

    llist.head.next=first
    first.next=second
    llist.__printList__()
    