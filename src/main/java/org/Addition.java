package org;

import java.util.Scanner;

public class Addition {
    public static void addNumbers(){
        Scanner scanner = new Scanner(System.in);

        System.out.print("first number: ");
        int num1 = scanner.nextInt();

        System.out.print("second number: ");
        int num2 = scanner.nextInt();

        int sum = Operators.addition(num1, num2);

        System.out.println("Result: " + sum);
        scanner.close();
    }
}
