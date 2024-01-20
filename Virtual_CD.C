using System;
using System.Collections.Generic;

class VirtualCD
{
    private List<string> contents;

    public VirtualCD()
    {
        contents = new List<string>();
    }

    public void AddFile(string fileName)
    {
        contents.Add(fileName);
        Console.WriteLine($"File '{fileName}' added to the virtual CD.");
    }

    public void RemoveFile(string fileName)
    {
        if (contents.Contains(fileName))
        {
            contents.Remove(fileName);
            Console.WriteLine($"File '{fileName}' removed from the virtual CD.");
        }
        else
        {
            Console.WriteLine($"File '{fileName}' not found on the virtual CD.");
        }
    }

    public void ListContents()
    {
        Console.WriteLine("Virtual CD Contents:");
        foreach (var file in contents)
        {
            Console.WriteLine(file);
        }
    }
}

class Program
{
    static void Main()
    {
        VirtualCD virtualCD = new VirtualCD();

        // Add files to the virtual CD
        virtualCD.AddFile("song1.mp3");
        virtualCD.AddFile("document.pdf");

        // List the contents of the virtual CD
        virtualCD.ListContents();

        // Remove a file from the virtual CD
        virtualCD.RemoveFile("song1.mp3");

        // List the updated contents of the virtual CD
        virtualCD.ListContents();
    }
}
