import java.util.*;

class matrix
{
    public int Arr[][] = null;

    public  matrix(int A, int B, int iNo)
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

    public int ChkNo(int iRow, int iCol, int No)
    {
        int i = 0 , j = 0, iCount = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j] == No)
                {
                    iCount++;
                }
            }
        }
        return iCount;
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
class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns :");
        int iCol = sobj.nextInt();

        System.out.println("Enter the number that you want to check :");
        int iValue = sobj.nextInt();

        matrix mobj = new matrix(iRow, iCol, iValue);

        mobj.Accept();

        mobj.Display();

        int iRet = mobj.ChkNo(iRow, iCol,iValue);
        System.out.println("Frequency of "+iValue+" is "+iRet+" times in the matrix.");
        
    }
}