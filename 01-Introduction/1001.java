import java.util.*;
import java.math.BigDecimal;

class Solution{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        
        while(sc.hasNext()){
            BigDecimal a = sc.nextBigDecimal();
            int n = sc.nextInt();
            a.pow(n);
            String str = a.toPlainString();
            
            if (str.startsWith("0."))
			{
				str = str.substring(1);
            }

            System.out.println(str);
        }
    }
}