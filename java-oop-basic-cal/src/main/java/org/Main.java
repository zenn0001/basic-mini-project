package org;

import java.util.Scanner;

public class Main {
    @SuppressWarnings("resource")
    public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("BASIC CALCULATOR");
        System.out.println("1. Addition");
        System.out.println("2. Subtraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");

        System.out.print("Choose: ");
        int choice = scanner.nextInt();
        switch (choice)
        {
            case 1:
                Addition.addNumbers();
                break;
            case 2:
                Subtraction.minusNumbers();
                break;

            case 3:
                Multiplication.multiplyNumbers();
                break;

            case 4:
                Division.divideNumbers();
                break;
            default:
                throw new IllegalStateException("Unexpected value: " + choice);
        }
        scanner.close();
    }
}
