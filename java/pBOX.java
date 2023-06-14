import java.util.*;
public class Main {
    
    public static void main(String[] args) {
        int[] pBoxA = {3, 8, 4, 1, 6, 7};
        int[] pBoxB = {7, 6, 8, 3, 5, 1, 2, 4};
        int[] pBoxC = {7, 5, 1, 2, 3, 6, 1, 3};
        
        System.out.println("P-Box A:");
        checkPBoxType(pBoxA);
        System.out.println();
        
        System.out.println("P-Box B:");
        checkPBoxType(pBoxB);
        System.out.println();
        
        System.out.println("P-Box C:");
        checkPBoxType(pBoxC);
    }
    
    public static void checkPBoxType(int[] pBoxTable) {
        int inputSize = pBoxTable.length;
        int outputSize = Arrays.stream(pBoxTable).max().getAsInt();
        
        if (isCompressionPBox(inputSize, outputSize)) {
            System.out.println("P-Box type: Compression P-box");
        } else if (isStraightPBox(inputSize, outputSize)) {
            System.out.println("P-Box type: Straight P-box");
        } else if (isExpansionPBox(inputSize, outputSize)) {
            System.out.println("P-Box type: Expansion P-box");
        } else {
            System.out.println("Invalid P-Box");
        }
    }
    
    public static boolean isCompressionPBox(int inputSize, int outputSize) {
        return inputSize < outputSize;
    }
    
    public static boolean isStraightPBox(int inputSize, int outputSize) {
        return inputSize == outputSize;
    }
    
    public static boolean isExpansionPBox(int inputSize, int outputSize) {
        return inputSize > outputSize;
    }
}