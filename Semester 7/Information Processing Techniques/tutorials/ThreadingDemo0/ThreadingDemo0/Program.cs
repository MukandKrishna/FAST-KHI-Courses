﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;

namespace ThreadingDemo0
{
    class Program
    {
        static void Main(string[] args)
        {
            Thread t1 = new Thread(new ThreadStart(WorkerFunc));
            t1.Name = "Worker Thread";
            //t1.Priority = ThreadPriority.Highest;
            t1.Start();

            for (int i = 0; i < 10; i++)
            {
                Console.WriteLine("In Main function: {i}");
                Thread.Sleep(500);

                if (t1.IsAlive)
                    t1.Join();
            }

        }

        static void WorkerFunc()
        {
            for (int i = 0; i < 10; i++)
            {
                Console.WriteLine("In Worker Function: {i}");
                Thread.Sleep(500);
            }
        }
    }
}
