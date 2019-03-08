#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
typedef struct trie_tree {
    struct trie_tree *arr[26];
    bool isEnd;
}trie;

trie *createNode() {
    trie *nn = (trie *)malloc(sizeof(trie));
    int i;
    for(i = 0; i < 26; i++) {
        nn -> arr[i] = NULL;
    }
    nn -> isEnd = false;
    return nn;
}

void insert(trie * curr, char* str) {
    int i;
    for(i = 0;i < strlen(str); i++) {
        if(curr -> arr[str[i] - 'a']) {
            curr = curr -> arr[str[i] - 'a'];
        }
        else {
            trie *nn = createNode();
            curr -> arr[str[i] - 'a'] = nn;
            curr = nn;
        }
    }
    curr -> isEnd = true;
}

int search(trie *curr, char* str) {
    int i;
    for(i = 0;i < strlen(str); i++) {
        if(curr -> arr[str[i] - 'a'] == NULL)
            return 0;
        curr = curr -> arr[str[i] - 'a'];
    }
    if(curr -> isEnd)
    return 1;
    else
    return 0;
}
       
int main() {
    trie *root = createNode();
    insert(root, "abhi");
    insert(root, "ab");
    if(search(root, "ab"))
        printf("Found\n");
    else
        printf("Not Found\n");
     
}
