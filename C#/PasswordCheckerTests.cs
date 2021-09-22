using Microsoft.VisualStudio.TestTools.UnitTesting;
using ConsoleApp1;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1.Tests
{
    [TestClass()]
    public class PasswordCheckerTests
    {
        [TestMethod()]
        public void Check_8Symbols_ReturnsTrue()
        {
            //Arrange
            string password = "ASqw12$$";
            bool expected = true;
            //Act
            bool actual =
        PasswordChecker.validatePassword(password);
            //Assert
            Assert.AreEqual(expected, actual);
            
        }
        [TestMethod()]
        public void Check_4Symbols_ReturnsFalse()
        {
            //Arrange
            string password = "Aq1$";
            bool expected = false;
            //Act
            bool actual =
        PasswordChecker.validatePassword(password);
            //Assert
            Assert.IsFalse(actual);

        }
        [TestMethod()]
        public void Check_20Symbols_ReturnsFalse()
        {
            //Arrange
            string password = "Aq1$oidrjwpsejustpstupsa3opstupstipstei";
            bool expected = false;
            //Act
            bool actual =
        PasswordChecker.validatePassword(password);
            //Assert
            Assert.IsFalse(actual);

        }
        [TestMethod()]
        public void Check_notDigit_ReturnsFalse()
        {
            //Arrange
            string password = "Awerfsfrgdg";
            bool expected = false;
            //Act
            bool actual =
        PasswordChecker.validatePassword(password);
            //Assert
            Assert.IsFalse(actual);

        }
        [TestMethod()]
        public void Check_NoSymbols_ReturnsFalse()
        {
            //Arrange
            string password = "11223455";
            bool expected = false;
            //Act
            bool actual =
        PasswordChecker.validatePassword(password);
            //Assert
            Assert.IsFalse(actual);
        }
        [TestMethod()]
        public void Check_NotUpperRegister_ReturnsFalse()
        {
            //Arrange
            string password = "asgftrh12edg34!";
            bool expected = false;
            //Act
            bool actual =
        PasswordChecker.validatePassword(password);
            //Assert
            Assert.IsFalse(actual);
        }
        [TestMethod()]
        public void Check_Digit_ReturnsTrue()
        {
            //Arrange
            string password = "GGhs!1";
            bool expected = false;
            //Act
            bool actual =
        PasswordChecker.validatePassword(password);
            //Assert
            Assert.IsFalse(actual);
        }
        [TestMethod()]
        public void Check_Nodigit_ReturnsTrue()
        {
            //Arrange
            string password = "Aks!si";
            bool expected = false;
            //Act
            bool actual =
        PasswordChecker.validatePassword(password);
            //Assert
            Assert.IsFalse(actual);
        }
        [TestMethod()]
        public void Check_SpecialSymbols_ReturnsTrue()
        {
            //Arrange
            string password = "!aksaAD";
            bool expected = false;
            //Act
            bool actual =
        PasswordChecker.validatePassword(password);
            //Assert
            Assert.IsFalse(actual);
        }
        [TestMethod()]
        public void Check_LowercaseLetters_ReturnsTrue()
        {
            //Arrange
            string password = "Kfd124!";
            bool expected = false;
            //Act
            bool actual =
        PasswordChecker.validatePassword(password);
            //Assert
            Assert.IsFalse(actual);

        }
        [TestMethod()]
        public void Check_CorrectPassword_ReturnsTrue()
        {
            //Arrange
            string password = "Alquo10!";
            bool expected = false;
            //Act
            bool actual =
        PasswordChecker.validatePassword(password);
            //Assert
            Assert.IsFalse(actual);

        }

    }
}