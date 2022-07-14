import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);
    int n, a, b;
    
    System.out.print("digite um numero para ver a sequencia de fibonacci ate ele: ");
    n = read.nextInt();
    
    a=1;
    b=1;

    for (int i = 0; i < n; i++)
    {
      if (i % 2 == 0)
      {
        System.out.print(" "+a);
        a += b;
      }
      else
      {
        System.out.print(" "+b);
        b += a;
      }
    }
  }
}

