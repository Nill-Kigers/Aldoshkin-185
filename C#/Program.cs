using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    public class PasswordChecker
    {
        public static bool validatePassword(string password)
        {
            if (password.Length < 8 || password.Length > 20)
                return false; //Ложь
            if (!password.Any(Char.IsLower)) // Any определяет, соответствует ли коллекция определенному условию, и в зависимости от результата они возвращают true или false. IsLower показывает, относится ли символ Юникода к категории букв нижнего регистра.
                return false;
            if (!password.Any(Char.IsUpper)) // ! - не равно. IsUpper показывает, относится ли символ Юникода к категории букв верхнего регистра.
                return false;
            if (!password.Any(Char.IsDigit))  // IsDigit показывает, относится ли символ Юникода к категории десятичных цифр.
                return false;
            if (password.Intersect("#$%^&_").Count()==0) // Intersect получение пересечения последовательностей, то есть общих для обоих наборов элементов
                return false;
            return true; //Правда
        }

        public static void Main(string[] args)
        {
            bool arr = PasswordChecker.validatePassword("1)Kghbtn");

            Console.WriteLine("res=" + arr);
            Console.ReadKey();
        }
    }
}
