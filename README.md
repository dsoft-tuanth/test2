"# test c++ day 2
#
### test 1
birary search tree(bst) is a binary tree where the value of each to the values in all the nodes in that node's left subtree and is smaller that the values in all nodes in that node's right subtree

write a function that, effciently with respect totime used, checks if a given binary search tree contains a give value.

for example, for fallowing tree:

- n1 (value: 1, left: null, right: null)
- n2 (value: 2, left: n1, right: n3)
- n3 (value: 3, left: null, right: null)
#
### test 2
write a function that, when passed a list and a target sum, returns, __efciently__ with respect to time used, two distinct zero-based indices of any two of the number, whose sum is equal to the target sum. if there are no two numbers, the function should return (-1,-1).

for _example,finTwosun({3,1,5,7,9},10)_ should return a std::pair<int, int > containing any of the following pairs of indices:

- 0 and 3 (0r 3 and 0) as 3+7 = 10
- 1 and 5 (0r 5 and 1) as 1+9 = 10
- 2 and 4 (0r 4 and 2) as 5+5 = 10

 