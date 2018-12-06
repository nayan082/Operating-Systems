#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
#include "include/substr.h"
kmain()
{
       clearScreen();
	   
       print("Welcome to my operating system!\n\n");
	  
       while (1)
       {
		string inp = 0,pr="print",str=0,len="len";
		uint8 i,cnt=0,t=0,cnt1=0;
		print("nayan> ");
		inp = readStr();
		
		if(inp[0]=='p'){
			cnt=0;
			for(i=0;i<5;i++){
				if(inp[i]==pr[i])cnt++;
			}
			//printch(cnt+'a');
			for(i=6; inp[i]!='\0'; i++)str[i-6]=inp[i];
			//print(str);
		}
		else if (inp[0]=='l'){
			cnt1=0;
			for(i=0;i<3;i++)
				if(inp[i]==len[i])cnt1++;
			for(i=4;inp[i]!='\0';i++)str[i-4]=inp[i];
		}	
			

		if(strEql(inp,"cmd"))
		{
				print("You are already in cmd\n");
		}
		else if(strEql(inp,"clear"))
		{
				clearScreen();
		}
		else if(strEql(inp,"substr"))
		{
			print("Enter string: ");
			inp = readStr();
			screen_substr(inp);
		}
		else if(strEql(inp,"clearline"))
		{
			clearLine(0,1);
		}	
		else if(cnt1==3)
		{	
			print("Length of your string : ");
			i=strlength(str);
			printnum(i);
			print("\n");
			for(t=0;str[t]!='\0';t++)str[t]='\0';
		}
		else if(cnt==5)
		{
			print("Printing : ");
			print(str);
			print("\n");
			for(t=0;str[t]!='\0';t++)str[t]='\0';
		}
		else if(strEql(inp,"shutdown"))
		{
				print("Turning off my OS!\n");
				break;
		}
		else
		{
				print("Bad command!\n");
		}
       }
}
