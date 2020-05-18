// Singly-linked lists are already defined with this interface:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
ListNode<int> * removeKFromList(ListNode<int> * l, int k) {
    ListNode<int> dummy;
    dummy.next = l;
    l = &dummy;

    while (l->next) {
        if (l->next->value == k)
            l->next = l->next->next;
        else
            l = l->next;
    }
    return dummy.next;
}
