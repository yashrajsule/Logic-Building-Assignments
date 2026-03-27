import java.util.*;

class Matrix
{
    private int Arr[][] = null;

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    public void Accept()
    {
        System.out.println("Enter the elements of matrix :");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public int MaxDiagonal()
    {
        int i = 0, j = 0, iMax1 = 0, iMax2 = 0;
        iMax1 = Arr[0][0];
        iMax2 = Arr[0][0];

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(i == j)
                {
                    if(Arr[i][j] > iMax1)
                    {
                        iMax1 = Arr[i][j];
                    }
                }
            }
        }
        for(j = 0; j < Arr.length; j++)
        {
            j = Arr[i].length - 1- i;

            if(Arr[i][j] > iMax2)
            {
                iMax2 = Arr[i][j];
            }
        }
        
        if(iMax1 > iMax2)
        {
            return iMax1;
        }
        else
        {
            return iMax2;
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Elements of the matrix are :");

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}
class program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns :");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

        mobj.Display();

        int iRet = mobj.MaxDiagonal();
        System.out.println("Maximum diagonal are :"+iRet);

    }
}