using System;

namespace atividade6
class program
{
    static void main(){
        testifelse(10);
    }
    static void testifelse(int n)
    {
        if (n<10){
            console.writeline("n<10");
        }
        else if (n<20){
            console.writeline("n<20");
        }
        else if (n<30){
            console.writeline("n<30");
        }
        else{
            console.writeline("n>=30");
        }
    }
}