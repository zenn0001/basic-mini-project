package org;

import java.util.Scanner;

public class Division {
      public static void divideNumbers() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("first number: ");
        int num1 = scanner.nextInt();

        System.out.print("second number: ");
        int num2 = scanner.nextInt();

        int divide = Operators.division(num1, num2);

        System.out.println("Result: " + divide);

        scanner.close();
    }
}