Here is my solution to the "Set Generator" task

I initially implemented a HashMap as when I read that the operation time should be O(1) on average, a Hash data structure came to mind immediately. By following the documentation (docs.oracle), I utilised the following methods: get(), put(), remove(), and size().

With the getRandom method, I encountered an error when trying to return a random value (with equal probability) from the HashMap (as the key values are 5, and 8, not '0' and '1')...
    
After some research, I solved this by switching my program to an ArrayList (resizable array). The random method now uses the Random class to return an existing value in the arrayList. And the previous methods I implemented (insert, and remove) work with O(1) time because
    inserts the value to the end of the ArrayList. Accessing a particular index


TO COMPILE AND RUN

Download all files (clone) into a repository, and cd your terminal into the directory. Run the following commands to compile the program,
    'javac SetGenerator.java'
    'javac Main.java'

To run the program, enter the following command,
    'java Main'
