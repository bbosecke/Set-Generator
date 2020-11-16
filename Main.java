
/**
 * The main class for the SetGenerator program
 */

public class Main{
    public static void main(String[] args){
        // Initialise an empty set.
        SetGenerator setGen = new SetGenerator();

        // boolean result = setGen.insert(5);
        // System.out.println("Working if true: " + result);

        // boolean resultF = setGen.insert(5);
        // System.out.println("Working if false: " + resultF);

        // boolean resultR = setGen.remove(8);
        // System.out.println("Working if false: " + resultR);

        // boolean resultT = setGen.insert(8);
        // System.out.println("Working if true: " + resultT);

        // setGen.remove(8);

        // System.out.println("The random val returned is: " +setGen.getRandom());
        // setGen.printContents();
        System.out.println(setGen.insert(5));
        System.out.println(setGen.insert(61));
        System.out.println(setGen.insert(21));
        System.out.println(setGen.insert(2));
        System.out.println(setGen.remove(8)); //returns false
        System.out.println(setGen.insert(8));
        System.out.println(setGen.remove(8));
        System.out.println(setGen.insert(8));
        setGen.printContents();

        System.out.println("The random value returned from the set is: " + setGen.getRandom());
    }
}