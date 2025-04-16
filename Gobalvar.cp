using System;

class Example
{
    static int globalVariable = 20; // Class-level variable

    static void DisplayGlobalVariable()
    {
        Console.WriteLine($"Global variable value: {globalVariable}");
    }

    static void Main()
    {
        Console.WriteLine("Accessing global variable:");
        DisplayGlobalVariable();
    }
}
