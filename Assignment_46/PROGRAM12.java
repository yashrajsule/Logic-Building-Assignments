import java.util.*;

class Pattern
{
    public int iRow;
    public int iCol;

    public Pattern(int A, int B)
    {
        iRow = A;
        iCol = B;
    }

    public void Charpattern()
    {
        int i = 0, j = 0;
        char ch1 = '\0';

        for(i = 0, ch1 = 'A'; i < iRow; i++,ch1++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(ch1+"\t");
            }
            System.out.println();
        }
    }

}

class PROGRAM12
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of cols : ");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern(iRow,iCol);

        pobj.Charpattern();
    }
}