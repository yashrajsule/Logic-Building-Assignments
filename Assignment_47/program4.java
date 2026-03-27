import java.util.*;

class Pattern
{
    public void pattern(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(j % 2 == 0)
                {
                    System.out.print("*"+ "\t");
                }
                else
                {
                    System.out.print("#"+ "\t");
                }
            }
            System.out.println();
        }
    }
}
class program4
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