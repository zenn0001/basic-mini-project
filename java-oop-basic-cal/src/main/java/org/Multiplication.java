package org;

import java.util.Scanner;

public class Multiplication {
    public static void multiply(){
        Scanner scanner = new Scanner(System.in);

        System.out.print("first number: ");
        int num1 = scanner.nextInt();

        System.out.print("second number: ");
        int num2 = scanner.nextInt();

        int multiply = Operators.multiplication(num1, num2);

        System.out.println("Result: " + multiply);
        scanner.close();
    }
}
