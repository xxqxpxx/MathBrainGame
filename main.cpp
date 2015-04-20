using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace Game
{
    class Program
    {
        static void Main(string[] args)
        {

            double x, z, a, b = 15, f, w, countertrue = 0, counterfalse = 0;
            char ch;
            double r;
            int d = 0 ;
            string name;
            do
            {

                //  system("cls");   suppose to clean screen for the other one
                Console.WriteLine();
                Console.WriteLine();
                Console.WriteLine();
                Console.WriteLine();
                Console.WriteLine();
                Console.WriteLine( /* setw(48) */  "Please Enter Your Name :");                 // setw for the place of the text       
                // system("color 5f");
                name = Console.ReadLine();
                Console.WriteLine();
                Console.WriteLine("                    ============================================");
                Console.WriteLine();
                Console.WriteLine("- For Easy MODE   ----> press 1 ");
                Console.WriteLine("- For Medium MODE ----> press 2 ");
                Console.WriteLine("- For Hard MODE   ----> press 3 ");
                Console.WriteLine("                                ===========================================");
                Console.WriteLine("- Enter Your Choice Here  :  ");
                w = int.Parse(Console.ReadLine());
                if (w == 1)
                    d = 10;
                else if (w == 2)
                    d = 100;
                else if (w == 3)
                    d = 1000;
                

                    Console.WriteLine("Cheak your Choice : ");
                //  system("cls");   suppose to clean screen for the other one
                  Random rand = new Random() ;
               //  srand(time(0)); //random number seeder that generates a new random set every time
                for (int i = 1; i <= b; i++)
                {
                    int random = rand.Next() % d; // % d  to set range of used numbers from 1 to 9

                    int random2 = rand.Next() % d; // % d  to set range of used numbers from 1 to 9

                    int operat = rand.Next() % 10; // % d  to set range of used numbers from 1 to 9

                    //------------------------------sum---+----------------------------------------------------

                    if (operat == 1 || operat == 4 || operat == 9)
                    {
                        int sum = random + random2;

                        Console.WriteLine( /*setw(5) */ random + "+" + random2 + " = ");
                        a = int.Parse(Console.ReadLine());
                        if (a == sum)
                        {
                            Console.WriteLine("correct answer");
                            countertrue++;
                        }
                        else if (a != sum)
                        {
                            Console.WriteLine("wrong answer ");
                            counterfalse++;
                        }
                    }
                    //-------------------------------------------pro ×-------------------------------------------------------------------
                    if (operat == 3 || operat == 8)
                    {
                        int pro = random * random2;

                        Console.WriteLine( /*setw(5)*/  +random + "*" + random2 + " = ");
                        a = int.Parse(Console.ReadLine());
                        if (a == pro)
                        {
                            Console.WriteLine("correct answer");
                            countertrue++;
                        }
                        else if (a != pro)
                        {
                            Console.WriteLine("wrong answer ");
                            counterfalse++;
                        }
                    }

                    //---------------------------------------------min(-)-------------------------------------------------------------
                    if (operat == 5 || operat == 7)
                    {
                        int min = random - random2;

                        Console.WriteLine( /* setw(5) */  random + "-" + random2 + " = ");
                        a = int.Parse(Console.ReadLine());
                        if (a == min)
                        {
                            Console.WriteLine("correct answer");
                            countertrue++;
                        }
                        else if (a != min)
                        {
                            Console.WriteLine("wrong answer ");
                            counterfalse++;
                        }
                    }
                    //-------------------------------------------------divided-------------------------------------------------------
                    if (operat == 2 || operat == 6)
                    {
                        int div = random / random2; 

                        Console.WriteLine( /*setw(5) */ +random + "/" + random2 + " = ");
                        a = int.Parse(Console.ReadLine());
                        if (a == div)
                        {
                            Console.WriteLine("correct answer");
                            countertrue++;
                        }
                        else if (a != div)
                        {
                            Console.WriteLine("wrong answer ");
                            counterfalse++;
                        }
                    }
                }

                //  system("cls");   suppose to clean screen for the other one
                r = (countertrue / 14) * 100 ;
                if (countertrue >= counterfalse)
                {
                    Console.WriteLine("                  ==========================================");
                    Console.WriteLine("                              WELL DONE Mr : " + name);
                    Console.WriteLine("              " + "   Rate your intelligence : " + r + /* (countertrue / 14)  + */ "%");
                    Console.WriteLine("                          " + "- your correct answer : " + countertrue);
                    Console.WriteLine("                          " + "- your wrong answer   : " + counterfalse);
                    Console.WriteLine("                  ==========================================" + "\n");

                    /*
                Console.WriteLine("                                                *****   ");
                Sleep(200);
                cout<<"                                              *****     "<<"\n";
                Sleep(200);
                cout<<"                                            *****       "<<"\n";
                Sleep(200);
                cout<<"                           *              *****         "<<"\n";
                Sleep(200);
                cout<<"                           **           *****           "<<"\n";
                Sleep(200);
                cout<<"                           ***         ****             "<<"\n";
                Sleep(200);
                cout<<"                           ****      ****               "<<"\n";
                Sleep(200);
                cout<<"                           *****   ****                 "<<"\n";
                Sleep(200);
                cout<<"                            *********                   "<<"\n";
                Sleep(200);
                cout<<"                             *******                    "<<"\n";
                Sleep(200);
                cout<<"                              *****                     "<<"\n";
                Sleep(200);
                cout<<"                               ***                      "<<"\n";
                cout<<"                                                        "<<"\n";
                cout<<"                                                        "<<"\n";
                     */
                }
                else if (counterfalse > countertrue)
                {
                    Console.WriteLine("                  ==========================================");
                    Console.WriteLine("                               TRY AGAIN M.r:" + name);
                    Console.WriteLine("                       " + "Rate your intelligence : " + r + /* (countertrue / 14)  + */ "%");
                    Console.WriteLine("                       " + "- your wrong answer   : " + counterfalse);
                    Console.WriteLine("                       " + "- your correct answer : " + countertrue);
                    Console.WriteLine("                  ==========================================");

                    /*
                                cout<<  endl<<"                     ***WRONG***             ***WRONG***         "<<"\n";
                        Sleep(200);

                        cout<<"                      ***WRONG****           ***WRONG***          "<<"\n";
                        Sleep(200);

                        cout<<"                       ***ERROR****         ***ERROR***           "<<"\n";
                        Sleep(200);

                        cout<<"                        ***ERROR****       ***ERROR***            "<<"\n";
                        Sleep(200);

                        cout<<"                         ***ERROR****     ***ERROR***             "<<"\n";
                        Sleep(200);

                        cout<<"                          ***ERROR****   ***ERROR***              "<<"\n";
                        Sleep(200);

                        cout<<"                           ***ERROR**** ***ERROR***               "<<"\n";
                        Sleep(200);

                        cout<<"                            *********WRONG********                "<<"\n";
                        Sleep(200);

                        cout<<"                             ********WRONG*******                 "<<"\n";
                        Sleep(200);

                        cout<<"                            *********ERROR********                "<<"\n";
                        Sleep(200);

                        cout<<"                           ***ERROR**** ***ERROR**               "<<"\n";
                        Sleep(200);

                        cout<<"                          ****ERROR***   ***ERROR***              "<<"\n";
                        Sleep(200);

                        cout<<"                         ****ERROR***     ***ERROR***             "<<"\n";
                        Sleep(200);

                        cout<<"                        ****ERROR***       ***ERROR***            "<<"\n";
                        Sleep(200);

                        cout<<"                       ****WRONG***         ***WRONG***           "<<"\n";
                        Sleep(200);

                        cout<<"                      ****ERROR***           ***ERROR***          "<<"\n";
                        Sleep(200);

                        cout<<"                     *****WRONG**             ***WRONG***         "<<"\n";
                }

                     */
                }
                Console.WriteLine("                       To Play Again Press 'y' :  ");
                ch = char.Parse(Console.ReadLine());
            } while (ch == 'y');

            ch = char.Parse(Console.ReadLine());
        }
    }
}