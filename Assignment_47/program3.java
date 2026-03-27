import java.util.*;

class Pattern
{
    public void pattern(int iRow, int iCol)
    {
        int i = 0, j = 0, no = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0, no = iCol; j < iCol; j++,no--)
            {
                System.out.print(no+ "\t");
            }
            System.out.println();
        }
    }
}
class program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner (System.in);

        System.out.println("Enter the number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of cols : ");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.pattern(iRow, iCol);
    }
}