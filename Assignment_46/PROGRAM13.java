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
        int i = 0, j = 0, no = 0;

        for(i = 0, no = iRow; i < iRow; i++,no--)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(no+"\t");
            }
            System.out.println();
        }
    }

}

class PROGRAM13
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