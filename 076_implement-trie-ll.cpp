//https://www.codingninjas.com/studio/problems/implement-trie-ll_8230840?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

struct Node {
  Node *links[26];
  int cntEndsWith = 0, cntPrefix = 0;

  void put(char ch, Node *newNode) { links[ch - 'a'] = newNode; }

  Node *get(char ch) { return links[ch - 'a']; }

  bool containsKey(char ch) { return links[ch - 'a'] != NULL; }

  void increaseEnd() { cntEndsWith++; }

  void increasePrefix() { cntPrefix++; }

  void decreaseEnd() { cntEndsWith--; }

  void decreasePrefix() { cntPrefix--; }

  int getEnd() { return cntEndsWith; }

  int getPrefixes() { return cntPrefix; }
};

class Trie {
  Node *root;

public:
  Trie() { root = new Node(); }

  void insert(string &word) {
    Node *node = root;
    for (auto c : word) {
      if (!node->containsKey(c))
        node->put(c, new Node());

      node = node->get(c);
      node->increasePrefix();
    }

    node->increaseEnd();
  }

  int countWordsEqualTo(string &word) {
    Node *node = root;
    for (auto c : word) {
      if (!node->containsKey(c))
        return 0;
      else
        node = node->get(c);
    }
    return node->getEnd();
  }

  int countWordsStartingWith(string &word) {
    Node *node = root;
    for (auto c : word) {
      if (!node->containsKey(c))
        return 0;
      else
        node = node->get(c);
    }
    return node->getPrefixes();
  }

  void erase(string &word) {
    Node *node = root;
    for (auto c : word) {
      if (!node->containsKey(c))
        return;

      node = node->get(c);
      node->decreasePrefix();
    }
    
    node->decreaseEnd();
  }
};
