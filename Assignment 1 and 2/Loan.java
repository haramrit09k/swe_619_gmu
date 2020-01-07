public class Loan{

/**
 * Calculates the number of months needed to pay off a loan of a given size at a fixed annual interest rate and a fixed monthly payment
 * 
 * @param principal The fixed principal amount, has to be an integer value greater than 0
 * @param rate      The annual rate of interest being applied to the principal amount, has to be a double value ranging from [-1,1]
 * @param payment   The fixed monthly payment, has to be an integer value greater than 0
 * 
 * @return Number of months required to pay off principal amount
 * 
 * @exception IllegalArgumentException if principal is negative <strong>OR</strong> if value of rate is not between 0 and 1 <strong>OR</strong> if payment is negative <strong>OR</strong> if monthly payment is too small (i.e. less than principal times monthly rate of interest)
 */

    public static int months (int principal, double rate, int payment){    
        int count = 0;

        if (principal <= 0) {
            throw new IllegalArgumentException("Principal cannot be negative");
        }
        else if(rate <= 0.0)
        {
            throw new IllegalArgumentException("Rate of interest cannot be negative");
        }
        else if(payment <= 0)
        {
            throw new IllegalArgumentException("Payment cannot be negative");
        }
        else if(payment < principal*rate/12){
            throw new IllegalArgumentException("Payment too small to pay off principal");
        }
        else{
            while(principal>=0){
                principal = (int) (principal * (1 + rate/12) - payment); // cuz monthlyInterestRate = APR/12
                count +=1;
            }
        }
        return count;

}

    public static void main(String[] args) {
        int mnths = months(100000, 0.08, 1000);
        System.out.println("The no of months it takes is "+mnths);
    }
}