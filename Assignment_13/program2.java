import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char Ch1 = 'A', Ch2 = 'a';

        for(i = 1; i <= iRow; i++)
        {
        for(j = 1,Ch1 = 'A', Ch2 = 'a'; j <= iCol; j++,Ch1++,Ch2++)
        {
            if((i % 2) == 0)
            {
            System.out.print(Ch2+"\t");
            }
            else
            {
            System.out.print(Ch1+"\t");

            }

        }
            System.out.println("\n");
        }


    }
}

class program2
{
    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows:");
        iValue1= sobj.nextInt();
        System.out.println("Enter the number of columns:");
        iValue2= sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1,iValue2);

        


    } 
}