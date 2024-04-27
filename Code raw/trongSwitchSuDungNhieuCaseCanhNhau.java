/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.Scanner;

public class trongSwitchSuDungNhieuCaseCanhNhau
{
	public static void main(String[] args)  {
		System.out.println("Hello World");
		Scanner sc = new Scanner(System.in);
		int month= sc.nextInt();
		switch (month) {
		    case 1: case 2: case 3:
		        System.out.println("Quarter 1");
		        break;
		    case 4: case 5: case 6:
		        System.out.println("Quarter 2");
		        break;
		    case 7: case 8: case 9:
		        System.out.println("Quarter 3:");
		        break;
		    default: System.out.println("Error");
		        break;
		}
	}
}
