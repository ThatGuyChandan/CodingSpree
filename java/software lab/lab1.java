public class lab1{
    static int fibnoicci(int n){
        if(n<=1){
            return n;
        }
        return fibnoicci(n-1)+fibnoicci(n-2) ;
    }
    static int factorial(int n){
        if(n<=1){
            return 1;
        }
        return n*factorial(n-1);
    }
    static boolean isEven(int n){
        if(n%2==0){
            return true;
        }
        return false;

    }

    static boolean isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i<=Math.sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

    static boolean isPalindrom(int n){
        int i=n;
        int j=0;
        while(n>0){
            
        }
    }
}