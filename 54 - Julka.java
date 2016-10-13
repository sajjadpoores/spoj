//http://www.spoj.com/problems/JULKA/

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
				Scanner read = new Scanner(System.in);
				String a,b;
				int t = 10;
				while(t--!=0){
					a=read.next();
					b=read.next();
					BigInteger A = new BigInteger(a);
					BigInteger B = new BigInteger(b);
					System.out.println(A.add(B).divide(new BigInteger("2")));
					System.out.println(A.subtract(B).divide(new BigInteger("2")));
				}
	}
}
