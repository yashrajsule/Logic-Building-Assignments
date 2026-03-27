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
        char ch2 = '\0';

        for(i = 0; i < iRow; i++)
        {
            for(j = 0, ch1 = 'A', ch2 = 'a'; j < iCol; j++,ch1++,ch2++)
            {
                if(i % 2 == 0)
                {
                    System.out.print(ch1+"\t");
                }
                else
                {
                    System.out.print(ch2+"\t");
                }
            }
            System.out.println();
        }
    }

}

class PROGRAM11
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