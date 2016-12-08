/*	
	PROJECT EULER : PROBLEM 1
	add all the natural numbers below one thousand that are multiples of 3 or 5.
*/
public class Problem1 {
    public static void main(String[] args) {
        int number1 = 3, number2 = 5, i, result = 0, x = 1000;
        for (i = 0; i < x; i++) {
            if ((i % number1 == 0) || (i % number2 == 0) && (i % (number1 * number2) != 0)) {
                result = result + i;
            }
        }
        System.out.println("result = " + result);
    }
}