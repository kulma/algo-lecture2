# Activities

## Task 1/5

> Refer to the instruction in [GitHub Workflow](../github.md)

- Clone today's repo
- Create a new branch e.g answers
- Create a repository in GitHub
- Change remote to point to your repo
> OK

## Task 2/5: Brute force

- What is the maximum number of steps it would take to perform a linear search on an ordered array of size 100,000?
  > Refer to `./src/search-linear.cpp`

  > It would take maximum of length of the array (100 000 steps)

## Task 3/5: Decrease-and-Conquer

- What is the maximum number of steps it would take to perform a binary search on an ordered array of size 100,000?

  > Refer to `./src/search-binary.cpp`

> Log base 2 (100 000) = 16.6 rounded back to 16 +1 -> 17

## Task 4/5: Quiz

32 teams qualified for the 2014 World Cup. If the names of the teams were arranged in sorted order (an array), how many items in the array would binary search have to examine to find the location of a particular team in the array, in the worst case?

- [] At most, 32.
- [] At most, 1.
- [X] At most, 6.
- [] At most, 16.
> Log base 2 (5) +1 = 6

## Task 5/5: Individual, at home

Refactor the code in `./src/task4.cpp` to use recursion

- Refer to the following [link](https://www.techiedelight.com/binary-search/)
- Make sure that you:
  - Replace `printf()` with` std::cout()`
  - Include the right headers e.g. `iostream`

> Refactored the code from the link to C++ (task4.cpp)
## Links

- https://cpp.sh/
- https://www.techiedelight.com/binary-search/
- https://www.softwaretestinghelp.com/searching-algorithms-in-cpp/
- https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/e/running-time-of-binary-search
