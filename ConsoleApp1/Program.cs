using System;
using InteropLayer;

namespace ConsoleApp1
{
    class Program
    {
        static void Main()
        {
            var mce = new WrapperClass();
            var sum = mce.add(2.1, 3.5);
            Console.WriteLine(sum);
            Console.Read();
        }
    }
}
