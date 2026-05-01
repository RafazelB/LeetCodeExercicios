/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    } else {
        struct ListNode *impar = head, *par = head->next, *parLista = par;
        while (par != NULL && par->next != NULL) {
            impar->next = par->next;
            impar = impar->next;

            par->next = impar->next;
            par = par->next;
        }

        impar->next = parLista;
        return head;
    }
}
