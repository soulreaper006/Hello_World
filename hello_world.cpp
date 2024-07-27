#include<iostream>
#include<string>
#include<ctime>
using namespace std;

void delay(unsigned int milliseconds){
    clock_t goal=milliseconds+clock();
    while (goal>clock());
    
}

int main()
{
    char array[]={'h','e','l','l','o','w','o','r','l','d'};
    string output;
    int j=0;
    while (j<=9)
    {
    
    for (char i = 'a'; i < 'z'; i++)
    {
        cout<<output<<i<<endl;
        delay(25);
        if (array[j]==i)
        {
            
            output+=i;
            break;
        }
        
    }
    j++;
    }
    cout<<output;
    

}