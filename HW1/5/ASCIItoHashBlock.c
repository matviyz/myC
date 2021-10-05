#include <stdio.h>
#include <string.h>

int main(void){
	char in[20]; 
	int i,j;

	for(i = 0;i < 20;i++)
		in[i] = 0;

	scanf("%[^\n]", in);//scans for inputs until a '\n' is detected

	for(i = 0;in[i] != 0;i++){
		printf("%c, ", in[i]);
	}
	printf("\n");

	//each letter represented in a 7x5 grid of #s
	char outa[7][9] = {"  #  "," # # ","#   #","#   #","#####","#   #","#   #"};
	char outb[7][9] = {"#### ","#   #","#   #","#### ","#   #","#   #","#### "}; 
	char outc[7][9] = {" ### ","#   #","#    ","#    ","#    ","#   #"," ### "}; 
	char outd[7][9] = {"#### ","#   #","#   #","#   #","#   #","#   #","#### "}; 
	char oute[7][9] = {"#####","#    ","#    ","#### ","#    ","#    ","#####"}; 
	char outf[7][9] = {"#####","#    ","#    ","#### ","#    ","#    ","#    "}; 
	char outg[7][9] = {" ### ","#   #","#    ","#    ","#  ##","#   #"," ### "}; 
	char outh[7][9] = {"#   #","#   #","#   #","#####","#   #","#   #","#   #"}; 
	char outi[7][9] = {" ### ","  #  ","  #  ","  #  ","  #  ","  #  "," ### "}; 
	char outj[7][9] = {"  ###","    #","    #","    #","    #"," #  #","  ## "}; 
	char outk[7][9] = {"#   #","#  # ","# #  ","##   ","# #  ","#  # ","#   #"}; 
	char outl[7][9] = {"#    ","#    ","#    ","#    ","#    ","#    ","#####"}; 
	char outm[7][9] = {"#   #","## ##","# # #","# # #","#   #","#   #","#   #"}; 
	char outn[7][9] = {"#   #","#   #","##  #","# # #","#  ##","#   #","#   #"}; 
	char outo[7][9] = {" ### ","#   #","#   #","#   #","#   #","#   #"," ### "}; 
	char outp[7][9] = {"#### ","#   #","#   #","#### ","#    ","#    ","#    "}; 
	char outq[7][9] = {" ### ","#   #","#   #","#   #","#   #"," ### ","    #"}; 
	char outr[7][9] = {"#### ","#   #","#   #","#### ","# #  ","#  # ","#   #"}; 
	char outs[7][9] = {" ### ","#   #","#    "," ### ","    #","#   #"," ### "}; 
	char outt[7][9] = {"#####","  #  ","  #  ","  #  ","  #  ","  #  ","  #  "}; 
	char outu[7][9] = {"#   #","#   #","#   #","#   #","#   #","#   #"," ### "}; 
	char outv[7][9] = {"#   #","#   #","#   #","#   #","#   #"," # # ","  #  "}; 
	char outw[7][9] = {"#   #","#   #","#   #","#   #","# # #","# # #"," # # "}; 
	char outx[7][9] = {"#   #","#   #"," # # ","  #  "," # # ","#   #","#   #"}; 
	char outy[7][9] = {"#   #","#   #","#   #"," ####","    #","#   #"," ### "}; 
	char outz[7][9] = {"#####","    #","   # ","  #  "," #   ","#    ","#####"}; 

	for(j = 0;j < 7;j++){ //loops through each row
		for(i = 0;in[i] != 0;i++){ //loops through each character of the string
			if(in[i] == 'a' || in[i] == 'A'){
				printf("%s\t", outa[j]);
			}
			if(in[i] == 'b' || in[i] == 'B'){
				printf("%s\t", outb[j]);
			}
			if(in[i] == 'c' || in[i] == 'C'){
				printf("%s\t", outc[j]);
			}
			if(in[i] == 'd' || in[i] == 'D'){
				printf("%s\t", outd[j]);
			}
			if(in[i] == 'e' || in[i] == 'E'){
				printf("%s\t", oute[j]);
			}
			if(in[i] == 'f' || in[i] == 'F'){
				printf("%s\t", outf[j]);
			}
			if(in[i] == 'g' || in[i] == 'G'){
				printf("%s\t", outg[j]);
			}
			if(in[i] == 'h' || in[i] == 'H'){
				printf("%s\t", outh[j]);
			}
			if(in[i] == 'i' || in[i] == 'I'){
				printf("%s\t", outi[j]);
			}
			if(in[i] == 'j' || in[i] == 'J'){
				printf("%s\t", outj[j]);
			}
			if(in[i] == 'k' || in[i] == 'K'){
				printf("%s\t", outk[j]);
			}
			if(in[i] == 'l' || in[i] == 'L'){
				printf("%s\t", outl[j]);
			}
			if(in[i] == 'm' || in[i] == 'M'){
				printf("%s\t", outm[j]);
			}
			if(in[i] == 'n' || in[i] == 'N'){
				printf("%s\t", outn[j]);
			}
			if(in[i] == 'o' || in[i] == 'O'){
				printf("%s\t", outo[j]);
			}
			if(in[i] == 'p' || in[i] == 'P'){
				printf("%s\t", outp[j]);
			}
			if(in[i] == 'q' || in[i] == 'Q'){
				printf("%s\t", outq[j]);
			}
			if(in[i] == 'r' || in[i] == 'R'){
				printf("%s\t", outr[j]);
			}
			if(in[i] == 's' || in[i] == 'S'){
				printf("%s\t", outs[j]);
			}
			if(in[i] == 't' || in[i] == 'T'){
				printf("%s\t", outt[j]);
			}
			if(in[i] == 'u' || in[i] == 'U'){
				printf("%s\t", outu[j]);
			}
			if(in[i] == 'v' || in[i] == 'V'){
				printf("%s\t", outv[j]);
			}
			if(in[i] == 'w' || in[i] == 'W'){
				printf("%s\t", outw[j]);
			}
			if(in[i] == 'x' || in[i] == 'X'){
				printf("%s\t", outx[j]);
			}
			if(in[i] == 'y' || in[i] == 'Y'){
				printf("%s\t", outy[j]);
			}
			if(in[i] == 'z' || in[i] == 'Z'){
				printf("%s\t", outz[j]);
			}
		}	
		printf("\n");
	}




	return 0;
}
