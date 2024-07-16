// See https://aka.ms/new-console-template for more information
int n = int.Parse(Console.ReadLine());
int[] arr = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
int sum = 0;
foreach (int i in arr)
{
    sum += i;
}
if (sum < 0)
{
    Console.WriteLine((sum) * -1);
}
else
{
    Console.WriteLine(sum);
}
Console.ReadLine();
