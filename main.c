#include "./libft/libft.h"
#include "stdio.h"
#include "stdarg.h"
#include "./includes/ft_printf.h"

int main(void)
{
    char *test1;
    char *test2;
    char *test3;
    int nbr;
//char c;
char a;
size_t nbr2;
double nbr4;
double nbr5;
wchar_t *wide1;

wint_t wide2;
nbr4 = 42.123456789;
nbr5 = 12;

nbr2 = 160;
//wide1 = "levee levee";
    a = 'A';
   // c = 'G';
    nbr = 600;
    /*
    test1 = ft_strdup("m");
    test2 = ft_strdup("jopajopajpa");
    test3 = ft_strdup("mita mita mita mita mita");
    */

    wide1 = (wchar_t *)test1;
    //wide2 = (wint_t)c;
long int uu;
uu = 42;
int test;
unsigned long x;
x = -42;
unsigned long y;
y = 42;
char o;
o = 'd';
double toest;
toest = -1.554;
int moi;
moi = 1111111;
//toest = 123456789;
test = 667;
//wchar_t	wstr;
//wstr = L"❤ coeur ሴ ☂ ";
wchar_t		wstr[] = L"❤ coeur ሴ ☂ ";
unsigned long long nb;
nb = 0;

char	*str;
    int     c = 0xd800;
/*
    str = "bla";
	printf(" - %d - [test %%s %%C] - l.%d\n");
    printf(" - %d - [test %%C] - l.%d\n");
  printf(" - %d - [test %%s %%d %%C] - l.%d\n");
    printf(" - %d - [test %%y %%C] - l.%d\n");
    printf(" - %d - [test] - l.%d\n");
    printf(" - %d - [test2] - l.%d\n");
    printf(" - %d - [test5] - l.%d\n");
    printf(" - %d - [test0123456789] - l.%d\n");
*/
//nb = 18446744073709551615;
//ft_printf("{%f}{%lf}{%Lf}", 1.42, 1.42, 1.42l);
//printf("%dmoo ");
ft_printf("%.5p", 0);
  //ft_putchar('\n');
  /*
   ft_putendl("MUN PRINTF: ");
    ft_printf("%c moi %s hei %s kolme %20s nelja %s a a a %c %s %c", c, test1, test2, test1, test2, a, test1, c);
        ft_putchar('\n');
        ft_putendl("TIETSIKAN PRINTF: ");
        printf("%c moi %s hei %s kolme %20s nelja %s a a a %c %s %c", c, test1, test2, test1, test2, a, test1, c);
*/
//ft_putchar('\n');
/*
ft_putendl("MUN PRINTF: ");
    ft_printf("%20d % d %20p %.4s %+-20d %.1d %+d %+-4d 887764 %*c && %020i", nbr, nbr , test2, "test222", nbr, nbr, nbr , nbr, 25, c, nbr);
        ft_putchar('\n');
        ft_putendl("TIETSIKAN PRINTF: ");
        printf("%20d % d %20p %.4s %+-20d %.1d %+d %+-4d 887764 %*c && %020i", nbr, nbr, test2, "test222", nbr, nbr, nbr , nbr, 25, c, nbr);
        */
        // ft_printf("%10.5d", 4242);
        //ft_printf("@moulitest: %5.d %5.0d", 0, 0);
        //ft_printf("@moulitest: %5.d %5.0d", 0, 0);
        //ft_printf("@moulitest: %.10d", -42);
        //ft_printf("@moulitest: %s", NULL);
//ft_printf("%5.0d", 1);
//ft_printf("%2.4d", 42);
//ft_printf("%hd", 32767); 
        //ft_printf("@moulitest: %.d %.0d", 0, 0);
        //ft_printf("%.d %.0d", 0, 0);
          //ft_printf("@moulitest: %.d %.0d", 42, 43);
          // ft_printf("%.0%");
 //ft_printf("%-+10.5d", 4242);
//ft_printf("%5d", -42);
        //ft_printf("%%");
        /*
ft_putendl("MUN PRINTF: ");
ft_printf("%5d", -42);
    ft_printf("%.1d", nbr);
        ft_putchar('\n');
        ft_putendl("TIETSIKAN PRINTF: ");
        printf("%.1d", nbr);
        */

        //ft_putendl("MUN PRINTF: ");
   // ft_printf("%S ** %10c %d", 4, wide1, c, nbr);
        //ft_putchar('\n');
        /*
        ft_putendl("TIETSIKAN PRINTF: ");
        printf("%ls", test1);
        */
        //ft_printf("%5.2s is a string", "this");
        //ft_printf("%5d", 42);
         //ft_printf("%5%");
      //  ft_printf("%-10.5d", 4242);
    // ft_printf("%0+5d", -42);
     //ft_printf("%%");
        //ft_printf("%%%%%%", "test");
       // ft_printf("%.2s is a string", "");
        //ft_printf("%5.2s is a string", "this");
/*
ft_putendl("MUN PRINTF: ");
    ft_printf("veijo %d %d erkki %d", c, a, c);
        ft_putchar('\n');
        ft_putendl("TIETSIKAN PRINTF: ");
        printf("veijo %c %c erkki %c", c, a, c);
        ft_putchar('\n');
        
ft_printf("%10s is a string", "this");

   */
        /*
    printf("\n");
    printf("TIETSIKAN PRINTF: \n");
     printf("%+60d", nbr);
printf("\n");

printf("\n");
    printf("TIETSIKAN PRINTF: \n");
     printf("%-20s", test1);
printf("\n");
*/
//ft_printf("% h");
//ft_printf("% h M Z 5 *");
//ft_printf("%-05%");
  //ft_printf("% Z%s", "test");
  //ft_printf("%.012s", "s_hidden");
    //ft_printf("% hZ%");a
      //printf("%12d", -42);
      //ft_printf("%-05d", -42);
      //ft_printf("%03.2d", 1);
      //ft_putendl("sun printf:");
      //test = (ft_printf("%15.4d", -42));
      //ft_putchar('\n');
      //ft_putendl("tesst arvo: ");
      //ft_putnbr(test);
     // printf("%15.4d", -42);
      //ft_printf("%-5d", -2562);
      //ft_printf("%04d", -4825);
       // ft_printf("%5d", -42);
        // ft_printf("%05d", -42);
        //ft_printf("%-5d", -42);
         //ft_printf("%-05d", -42);3
         //printf("%-05.6d", -42);
         //ft_printf("%.10d", -42);
           //ft_printf("%03.2d", -1);
           //printf("%-10.5d", -216);
           //ft_printf("%010.5d", -216);
           //test = (ft_printf("%08.3d", 8375));
           //ft_putnbr(test);
           //ft_printf("%-5d", -42);
            //printf("@moulitest: %.10d", -42);
           // ft_printf("%3.s", NULL);
             //ft_printf("%#-08x", 42);
              // ft_printf("@moulitest: %#.x %#.0x", 0, 0);
              //ft_printf("%.o %.0o", 0, 0);
               //ft_printf("@moulitest: %5.o %5.0o", 0, 0);
               //ft_printf("%#.o %#.0o", 0, 0);
                 //ft_printf("%#6o", 2500); ft_printf("% u", 4294967295);
 //printf("% o", -42949);
 //ft_printf("%lu", x);
  //printf("%.5o", -42);
  //ft_printf("%.p", 0);
  //ft_putendl("tassa: ");
  //test = (ft_printf("% 03d", 0));
  //ft_putchar('\n');
  //ft_putendl("luku:");
  //ft_putnbr(test);
  //printf("%+12.4f", nbr4);
  //ft_printf("%015.2f %.7f %.1f", 1.326, 1.324, 1.326);
  //ft_printf("%.4f", 42.62345555756);
  //ft_printf("%.0f %lf %Lf", -1.42, -1.42, -1.42);
  //ft_printf("%20f", -1.42).
  //ft_printf("%f %lf %Lf", 1.42, 1.42, 1.42l);
 //ft_printf("%0+5.2d", moi);
//ft_printf("%#0+3.5d", 1);
  //ft_printf("%0+5d", 42);
  //[+2147483647] - 11 - [%+3d
  //ft_printf("[% 3.5d]", 2147483647);
  //ft_printf("%% *.5i 42 == |% *.5i|", 4, 42);
   //ft_printf("% d", 42);
   //printf("%lc", (char)100);
//printf("[%#.o]", '\0');
//printf("%#3.0o", 0000000000000);
//ft_printf("%3lu", nb);
//"\\!/% -43.2hhd\\!/" and arg: -931817734
   //"42%+2.27hhd42" and arg: 324021042

  // "%+2d" and arg: 1995845424
  //ft_printf("[%3%]");
  //ft_printf("% h W -42");
  //ft_putchar('\n');
  //printf("\n");
  //test = (ft_printf("%-20.12f", toest));
  //test = (ft_printf("%f %lf", -1.42, -1.42));
//ft_putendl("test");
//ft_putnbr(test);
//ft_putchar('\n');
/*
//test = (ft_printf("% -4d", -1777561155));
ft_putendl("test");
ft_putnbr(test);
ft_putchar('\n');
*/
/*

  bad return value for format "% -4d" and arg: -1777561155 -> got: 12 expected 11
bad return value for format "% -4d" and arg: 1637305400 -> got: 10 expected 11
[ERROR] diff on output for format "% -4d" and arg: 1637305400
expected: [ 1637305400]
     got: [  163730540]
bad return value for format "42% -31.40hhd42" and arg: -246936190 -> got: 46 expected 45
bad return value for format "42% -31.40hhd42" and arg: 824468359 -> got: 46 expected 45
bad return value for format "42% -31.40hhd42" and arg: -628314463 -> got: 46 expected 45
bad return value for format "% -31.40hhd" and arg: -262574345 -> got: 42 expected 41
bad return value for format "% -31.40hhd" and arg: 1718585828 -> got: 42 expected 41
bad return value for format "% -31.40hhd" and arg: 2017030070 -> got: 42 expected 41
bad return value for format "% -31.40hhd" and arg: 233080745 -> got: 42 expected 41
bad return value for format "\\!/% -31.40hd\\!/" and arg: -591297395 -> got: 50 expected 49
bad return value for format "42% -31.40d42" and arg: -222172556 -> got: 46 expected 45
bad return value for format "42% -31.40d42" and arg: -2065350214 -> got: 46 expected 45
bad return value for format "42% -31.40d42" and arg: -128120754 -> got: 46 expected 45
bad return value for format "42% -31.40d42" and arg: -1099968966 -> got: 46 expected 45
bad return value for format "% -31.40d" and arg: -1885195580 -> got: 42 expected 41
bad return value for format "% -31.40d" and arg: -361902104 -> got: 42 expected 41

*/
 // printf("%f",-1444565444646.6465424242242454654);
//printf("%+12.1f %012lf %-20Lf", 144.2, 64.15671, 23.9555556l);
//ft_putnbr(test);
//ft_printf("\\!/%44lc\\!/", 'c');
//ft_printf("%#f %lf %Lf", toest, 1444565444646.6465424242242, 1444565444646.6465424242242l);
  //ft_printf("%.4f", nbr4);
  //ft_printf("%5u", 4294967295);
                 //ft_printf("%-#6o", 2500);
                 //ft_printf("%-#6o", 2500);
            //ft_putnbr(test);
            //ft_printf("%06.3d", -1);
             //ft_printf("%-05d", -42);
         // ft_printf("%08.3d", -8473);
      //ft_printf("%d", 2147483648);
       //ft_printf("%d", -4242);
      // ft_printf("%4.0s", "42");
    //ft_printf("%3.7d", -2375);
     //ft_printf("%5d", -42);
    //ft_printf("%3.7d", -2375);
    //ft_printf("%.3d",-23646);
      //ft_printf("@moulitest: %.10d", -42);
  //ft_printf("%7.5s", "bombastic");
  //ft_printf("%hhd", -129);
   //ft_printf("%ld", 2147483648);
  //test = (printf("% %"));
    //printf("%o", -8446744073709551615);
     //ft_printf("%-5.10o", -2500);
     //ft_printf("  235    %    Hello, World!    G    eb    EB  ");
  //ft_printf("%-.*s", 3, "yolo");
    //ft_printf("%.*s", 3, "hei");
     //ft_printf("%% *.5i 42 == |% *.5i|");
  //ft_putnbr(test);
    //ft_printf("%%   %", "test");
  //ft_printf("%%%", "test");
//ft_printf("%5%");
// ft_printf("% Z ", "test");
//printf("%h W -42%");
//ft_printf("% ");
//printf("%.0d, %.d", 1, 2);

    return (0);
}