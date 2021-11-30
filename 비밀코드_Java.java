/*package whatever //do not write package name here */

import java.io.*;

public class Solution {
    static int Answer;
    public static void main(String args[]) throws Exception {
        int[] arr1 = { 9, 20, 28, 18, 11 };
        int[] arr2 = { 30, 1, 21, 17, 28 };
        int row;

        for (int i = 0; i < arr1.length; i++) {
            row = arr1[i] | arr2[i];
            System.out.printf("[");
            for (int j = arr1.length-1; j >= 0; j--) {
                if ( ((row >> j) & 1) == 1)
                    System.out.printf("#");
                else
                    System.out.printf(" ");
                }
                System.out.printf("]\n"); 
            }
        }
    }