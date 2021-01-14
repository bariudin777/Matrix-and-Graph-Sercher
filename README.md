# Matrix-and-Graph-Sercher
"Graph and Matrix Searcher"- Second Mile-Stone. 
Implementation of a several of algorithms, including the best and most successful implementation of the server-side troubleshooter.

### Running the code:
Download the code and open a telnet connection in the terminal in your desired port. This will connect to the program

### Supplying your own graphs:
The graphs are entered in a specific format:

```a,b,c,d,e
f,g,h,j,p
...
...
entry_row, entry_col
exit_row, exit_col
end
```
where each letter represents a number. This number indicates the weight of the cell in the matrix - how much it costs to move to that position in the graph. The length of a path is the sum of the weights in the path and not necessarily the amount of steps it took.
Note: negative weights are ignored as they are treated as 'walls' the algorithm cannot pass, meaning it will search for a path around it.
