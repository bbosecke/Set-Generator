Here is my solution to the "Set Generator" task

I initially implemented a HashMap as when I read that the operation time should be O(1) on average, a Hash data structure came to mind immediately. By following the documentation (docs.oracle), I utilised the following methods: get(), put(), remove(), and size().

With the getRandom method, I encountered an error when trying to return a random value (with equal probability) from the HashMap (as the key values are 5, and 8, not '0' and '1')...
    
After some research, I solved this by switching my program to an ArrayList (resizable array). The random method now uses the Random class to return an existing value in the arrayList. And the previous methods I implemented (insert, and remove) work with O(1) time because
    inserts the value to the end of the ArrayList (O(1)). Accessing a particular index to remove it is actually O(n) worst case... (having to iterate through the whole list)... as well as seeing if the value already exists requires a full iteration...

Combined a HashMap with an ArrayList to create O(1) insert, and remove, and run random on the arrayList, to find the index to access on the HashMap. By checking the HashMap for the key value, O(1), we can modify the HashMap and ArrayList in parallel, resulting in constant time for the operations.

As well as I still cannot retrieve the getRandom in O(1) let alone retrieve it. Can't retrieve by object value, cause HashMaps are accessed by key...
    Solved by just returning a value from the arrayList, don't actually need to return a value from the HashMap.


TO COMPILE AND RUN

Download all files (clone) into a repository, and cd your terminal into the directory. Run the following commands to compile the program,
    'javac SetGenerator.java'
    'javac Main.java'

To run the program, enter the following command,
    'java Main'


---------------------------------------------------------------------

Here is my solution to the cpp version of the setGene task.

Vector and unordered_map are the cpp equivalents (not identical, but v similar properties).

Lines 48/49 do not remove the given val from the vector in O(1). It currently iterates through the entire vector to find the value, and then remove it, therefore is O(n) worst case.

To compile, 
    'g++ -std=c++11 setGene.cpp -o exe'

To run,
    './exe'