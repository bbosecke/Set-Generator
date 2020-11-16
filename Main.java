
public class Main{
    public static void main(String[] args){
        System.out.println("Welcome, Brodie");

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

        //setGen.getRandom();

        setGen.insert(60);
        setGen.insert(50);
        setGen.insert(30);
        setGen.insert(40);
        setGen.insert(60); //returns false as it already exists in the set
        setGen.insert(10);

        System.out.println("The random val returned is: " +setGen.getRandom());
        setGen.contents();


        //System.out.println(setGen.getRandom());
    }
}