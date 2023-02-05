# Activities

## Task 1

Refer to the first [link](#links).

- Why is Algorithm Analysis Important?

> Algorithm analysis can tell important things about the efficiency, scalability and performance of the algoritm.

- Explain the Big $O$ notation

> I think this was a good explanation from Wikipedia: "In computer science, big O notation is used to classify algorithms according to how their run time or space requirements grow as the problem size grows."

- Compare `Linear`, `Logarithmic`, `Quadratic` and `Constant` complexities.

> Quadratic function O(n²) is inefficient 
> Linear O(n) is ok
> Logarithmic O(log(n)) is good
> Constant O(c) is excellent

## Task2

Refer to the first [link](#links).

- Write a simple algorithm in C++ that finds the square of the first item in a list and then prints it on the screen.

> I don't know how to get this to work with <list> so using <vector>
```cpp
#include <iostream>
#include <vector>
using namespace std;
    
    int find_square(vector<int> lista) {
        int result = lista[0] * lista[0];
        cout << result << endl;
    }
    
    int main() {
        vector<int> lista = {5, 9, 40, 88, 140};
        find_square(lista);
        return 0;
    }
```

- What is the complexity of the algorithm?
> constant O(c), but it would be linear with list if had to go through them one by one

## Task 3

Refer to the first [link](#links).

- Write a simple program that displays all items in a list to the console.
```cpp
#include <list>
#include <iostream>
using namespace std;

int main() {
    list<int> lista = {25, 35, 40, 68, 100};

    for (auto i : lista)
        std::cout << i << "\n";
}
```
- What is the complexity of the algorithm?
> complexity is linear O(n), going through them one by one


## Task 4: : Individual, at home

Refer to this [pdf](./big_o.pdf):

- What is the difference between complexity and performance:
> Performance is the time or memory used to run a program. Complexity is a measurement of what happens to the resources if the size of problem gets bigger. Complexity is expressed using the Big O notation.

- Does complexity affects performance or is it the other way around?
> Yes, complexity affects performance but not the other way around.

- Restate the formal definition of big $O$ in plain English
>  ?

## Links

- [Big O Notation and Algorithm Analysis ](https://stackabuse.com/big-o-notation-and-algorithm-analysis-with-python-examples/)
- [Visualization](https://www.cs.usfca.edu/~galles/visualization/Search.html)
- [Big-O notation explained by a self-taught programmer](https://justin.abrah.ms/computer-science/big-o-notation-explained.html)
- [Big-O is easy to calculate, if you know how](https://justin.abrah.ms/computer-science/how-to-calculate-big-o.html)
- https://cpp.sh/
