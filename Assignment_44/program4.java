import java.util.*;

class matrix
{
    private int Arr[][] = null;

    public  matrix(int A, int B)
    {
        Arr = new int [A][B];
    }

    public void Accept()
    {
        System.out.println("Enter the elements of matrix :");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length;j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void AddColumn(int iRow, int iCol)
    {
        System.out.println("Addition of each column:");

        int i = 0, j = 0;
        for(i = 0; i < iCol; i++)  
        {
            int sum = 0;
            for(j = 0; j < iRow; j++)
            {
                sum += Arr[j][i];
            }
            System.out.print(sum + " ");
        }
        System.out.println();
    }

    public void Display()
    {
        System.out.println("Elements of matrix are :");

        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}
class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns :");
        int iCol = sobj.nextInt();

        matrix mobj = new matrix(iRow, iCol);

        mobj.Accept();

        mobj.Display();

        mobj.AddColumn(iRow,iCol);
        
    }
}