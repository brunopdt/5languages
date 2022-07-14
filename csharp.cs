using System;

class Program {
  public static void Main (string[] args) {
   double n, a, b;
   string linha;
    
    Console.Write ("digite um numero para ver a sequencia de fibonacci ate ele: ");
    linha = Console.ReadLine();
    n = int.Parse(linha);

    a=1;
    b=1;
    
    for (int i = 0; i < n; i++)
    {
      if (i % 2 == 0)
      {
        Console.Write($"{a} ");
        a += b;
      }
      else
      {
        Console.Write($"{b} ");
        b += a;
      }
    }
  }
}

