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

    public void SwapRows(int iRow, int iCol)
    {
        System.out.println("Elements of the matrix after swap :");
        
        for(int i = 0; i < iRow - 1; i += 2)
        {
            for(int j = 0; j < iCol; j++)
            {
                int temp = Arr[i][j];
                Arr[i][j] = Arr[i+1][j];
                Arr[i+1][j] = temp;
            }
        }
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
class program5
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

        mobj.SwapRows(iRow,iCol);
        
    }
}