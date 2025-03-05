package org;

import java.util.Scanner;

public class Subtraction {
    public static void minusNumbers(){
        Scanner scanner = new Scanner(System.in);

        System.out.print("first number: ");
        int num1 = scanner.nextInt();

        System.out.print("second number: ");
        int num2 = scanner.nextInt();

        int subtract = Operators.subtraction(num1, num2);

        System.out.println("Result: " + subtract);
        scanner.close();
    }
}
