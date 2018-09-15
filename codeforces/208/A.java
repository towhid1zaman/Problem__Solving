/*

 * @author Towhid
 */
import java.util.Scanner;
public class Problem {
    public static void main(String arg[])
    {
        Scanner s = new Scanner(System.in);
        
        ///String s = scr.next();
        /**
        int len = s.length();
        int f =1;
        for(int i = 0; i<len; i++)
        {
            if(s.charAt(i)=='W' && s.charAt(i+1)=='U' && s.charAt(i+2)=='B')
            {
                i+=2;
               if(f==0)
                {
                    System.out.print(" ");
                }
            }
            else
            {
                f =0;
                System.out.print(s.charAt(i));
            }
        }
        * **/
        System.out.println(s.next().replaceAll("WUB", " ").trim());
    }
   
}