import java.util.Arrays;
public class Next_greater_number{
// creating the function to swap two digit
    static void swap(char ar[], int i, int j){
        char temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }
 
// this function finds the next greater number.
    static void findNext(char ar[], int n){
        int i;
         
// Start from the right most digit and find the first digit that is smaller than the digit next to it.
        for (i = n - 1; i > 0; i--){
            if (ar[i] > ar[i - 1]) {
                break;
            }
        }
         
// If no such digit is found, then all digits are in descending order means there cannot be a greater number with set of digits
        if (i == 0){
            System.out.println("Not possible");
        }
        else{
            int x = ar[i - 1], min = i;
             
// Find the smallest digit on right side of (i-1)'th digit that is greater than number[i-1]
            for (int j = i + 1; j < n; j++){
                if (ar[j] > x && ar[j] < ar[min]){
                    min = j;
                }
            }
 
// Swap the smallest number found above
            swap(ar, i - 1, min);
 
// Sort the digits in ascending order
            Arrays.sort(ar, i, n);
            System.out.print("Next number with same" +
                                    " set of digits is ");
            for (i = 0; i < n; i++){
                System.out.print(ar[i]);
            }
        }
    }
 
    public static void main(String[] args){
        char digits[] = { '3','4','2','5','9','1' };
        int numb = digits.length;
        findNext(digits, numb);
    }
}