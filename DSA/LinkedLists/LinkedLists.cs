class LinkedLists
{
  static LinkedList<string> test = new LinkedList<string>();

  static void Main()
  {
    test.AddLast("first");
    test.AddLast("second");
    test.AddLast("third");
    test.AddLast("Ford");

    foreach (string s in test)
    {
      Console.WriteLine(s);
    }
  }
}