import java.util.*;

class Matrix
{
    private int Arr[][];
    private int Brr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
        Brr = new int[A][B];
    }

    public void Accept()
    {
        int i = 0, j = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements of matrix : ");

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Elements of matrix are: ");

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public void RevCol()
    {
        int i = 0, j = 0;

        System.out.println("Reverse matrix are : ");

        for(i = Arr.length-1; i >= 0; i-- )
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }
}
class program3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows  :");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of cols  :");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();
        mobj.RevCol();
    }
}