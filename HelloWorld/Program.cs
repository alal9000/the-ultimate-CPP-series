﻿using static System.Runtime.InteropServices.JavaScript.JSType;

namespace HelloWorld
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // mosh solution - I didn't attempt this one

            Console.Write("Enter commoa separated numbers: ");
            var input = Console.ReadLine();

            var numbers = input.Split(',');

            // Assume the first number is the max 
            var max = Convert.ToInt32(numbers[0]);

            foreach (var str in numbers)
            {
                var number = Convert.ToInt32(str);
                if (number > max)
                    max = number;
            }

            Console.WriteLine("Max is " + max);
        }
    }
}