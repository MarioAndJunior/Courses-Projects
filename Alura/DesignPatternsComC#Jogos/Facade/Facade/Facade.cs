﻿using System;
using System.Collections.Generic;
using System.Text;

namespace Facade
{
    public class Facade
    {
        private SubSistemaUm um;
        private SubSistemaDois dois;
        private SubSistemaTres tres;

        public Facade()
        {
            this.um = new SubSistemaUm();
            this.dois = new SubSistemaDois();
            this.tres = new SubSistemaTres();
        }

        public void OperacaoA()
        {
            Console.WriteLine("\nOperação A ------ ");
            this.um.Responsabilidade();
            this.dois.Responsabilidade();
        }

        public void OperacaoB()
        {
            Console.WriteLine("\nOperaação B ------ ");

            this.tres.Responsabilidade();
        }
    }
}
