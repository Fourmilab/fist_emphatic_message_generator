/*23:*/
#line 618 "fist.w"

#define PRODUCT "fist"
#define VERSION "4.1"
#define REVDATE "2022-04-22" \

#define Scale(x,y) x= (x*scale) /100;y= (y*scale) /100; \

#define FALSE 0
#define TRUE 1 \

#define EOS '\0' \

#define XLEN 96
#define PLEN 108
#define FILL "*" \


#line 619 "fist.w"


/*25:*/
#line 645 "fist.w"

#include "config.h"

#include <stdio.h> 
#include <ctype.h> 
#ifdef HAVE_STDLIB_H
#include <stdlib.h> 
#endif
#ifdef HAVE_STRING_H
#include <string.h> 
#endif
#ifdef HAVE_STRINGS_H
#include <strings.h> 
#endif
#ifdef HAVE_UNISTD_H
#include <unistd.h> 
#endif

/*:25*/
#line 621 "fist.w"

/*19:*/
#line 483 "fist.w"


static short chartab[]= {
0,0,0,0
,2056,2056,8,2048
,5140,5120,0,0
,20,15892,15892,0
,2110,10302,2622,2048
,2,9224,4640,0
,7202,10264,10274,7168
,2056,0,0,0
,2064,8224,8208,2048
,4104,1028,1032,4096
,42,7230,7210,0
,8,2110,2056,0
,0,0,6152,4096
,0,62,0,0
,0,0,24,6144
,2,1032,4128,0
,7202,8738,8738,7168
,2072,2056,2056,7168
,7202,1032,4128,15872
,7202,540,546,7168
,1036,5182,1028,1024
,15904,8252,546,7168
,7202,8252,8738,7168
,15874,1032,4128,8192
,7202,8732,8738,7168
,7202,8734,546,7168
,0,2048,2048,0
,24,6144,6152,4096
,516,2064,2052,512
,0,15872,15872,0
,4104,1026,1032,4096
,7202,1032,2048,2048
,7202,10798,8226,7168
,2068,8738,15906,8704
,15394,8764,8738,15360
,7202,8224,8226,7168
,15394,8738,8738,15360
,15904,8248,8224,15872
,15904,8248,8224,8192
,7202,8238,8738,7168
,8738,8766,8738,8704
,7176,2056,2056,7168
,514,514,8738,7168
,8740,10288,10276,8704
,8224,8224,8224,15872
,8758,10786,8738,8704
,8754,8746,8742,8704
,7202,8738,8738,7168
,15394,8764,8224,8192
,7202,8738,10790,7680
,15394,8764,10276,8704
,7202,8220,546,7168
,15880,2056,2056,2048
,8738,8738,8738,7168
,8738,8738,8724,2048
,8738,8738,10806,8704
,8738,5128,5154,8704
,8738,5128,2056,2048
,15874,1032,4128,15872
,7184,4112,4112,7168
,32,4104,1026,0
,7172,1028,1028,7168
,8,5154,0,0
,0,0,0,15872
};

/*:19*//*22:*/
#line 605 "fist.w"


static char fistab[]= {
/*20:*/
#line 565 "fist.w"

26,36,64,102,40,3,57,14,41,2,56,2,44,1,54,1,58,8,58,12,
43,15,56,22,43,23,49,23,56,14,57,20,56,21,56,21,41,15,42,17,
42,18,42,21,65,79,65,102,49,103,65,107,35,103,48,106,
23,103,34,105,14,103,22,104,10,103,21,103,13,92,25,102,
12,95,24,102,11,98,23,102,18,78,25,91,17,82,17,91,16,85,16,91,
15,87,15,91,14,89,14,91,22,67,25,77,21,70,21,77,20,72,20,77,
19,75,19,77,10,31,21,43,22,32,25,56,23,57,25,58,24,59,24,59,
15,44,25,48,16,49,25,49,17,50,25,50,19,51,25,51,21,52,25,52,
22,53,25,53,23,54,25,54,24,56,25,56,11,44,14,44,12,45,14,45,
13,46,14,46,14,46,15,46,8,31,9,42,7,32,7,41,6,33,6,39,
66,25,84,50,65,34,65,67,59,35,64,35,62,34,64,34,69,22,80,24,
81,23,82,23,81,24,83,24,47,25,65,32,48,33,61,33,46,26,46,31,
45,28,45,29,85,34,93,43,85,44,92,44,85,45,91,45,85,46,90,46,
85,47,89,47,85,48,87,48,85,49,86,49,94,35,94,42,95,37,95,40,
96,38,96,39,85,31,90,33,85,30,89,30,88,29,88,29,91,32,91,33,
/*:20*//*21:*/
#line 587 "fist.w"

92,33,92,33,58,28,87,29,85,27,86,27,85,26,85,26,65,51,74,56,
65,57,73,57,65,58,72,58,65,59,71,59,65,60,70,60,65,61,68,61,
65,62,67,62,65,63,66,63,65,64,65,64,75,51,83,51,75,52,81,52,
75,53,79,53,75,54,77,54,75,55,75,55,22,35,43,35,22,34,38,34,
22,33,32,33,22,32,24,32,61,8,78,16,62,7,78,7,62,6,77,6,
63,5,76,5,61,17,70,20,71,17,76,18,71,19,74,19,26,4,35,29,
36,5,36,29,37,12,37,29,38,16,38,29,39,20,39,27,40,26,40,27,
27,30,38,30,29,31,35,31,20,4,25,14,24,3,33,3,19,5,19,12,
18,6,18,10,22,15,25,20,21,15,21,18,20,15,20,16,25,21,25,29,
24,21,24,25,23,21,23,22,59,24,70,24,64,23,70,23,11,22,20,27,
21,24,21,27,16,28,19,28,11,30,18,30,5,11,15,21,6,22,10,22,
7,23,10,23,8,24,10,24,9,25,10,25,10,26,10,26,2,12,4,18,
1,13,1,17,2,19,4,19,3,20,4,20,4,11,4,11,7,10,15,10,
16,14,18,22,16,12,17,13,19,18,19,21,20,20,20,21,25,59,25,66,
12,9,13,9,24,65,24,66,23,66,23,66,0,0,0,0
/*:21*/
#line 608 "fist.w"


};

/*:22*/
#line 622 "fist.w"

/*26:*/
#line 669 "fist.w"

/*16:*/
#line 360 "fist.w"

static char*bitstring(int c,int i)
{
static char r[8];
int bits,b,n;

bits= (chartab[(i>>1)+((c-' ')<<2)]>>
((i&1)?0:8))&0xFF;
b= 32;
n= 0;
while(b){
r[n++]= (bits&b)?c:' ';
b>>= 1;
}
r[n]= EOS;
return r;
}

/*:16*/
#line 670 "fist.w"

/*15:*/
#line 322 "fist.w"

static void printmsg(char*ibfr){
int c,i,j,l;
char oline[134];

l= strlen(ibfr);
if(l> 16){
l= 16;
}
puts("\n");
for(i= 0;i<8;i++){
oline[0]= EOS;
for(j= 0;j<l;j++){
if(j> 0){
strcat(oline,"  ");
}
c= ibfr[j];
if(islower(c)){
c= toupper(c);
}
if((c<' ')||(c> '_')){
c= ' ';
}
strcat(oline,bitstring(c,i));
}
puts(oline);
}
}

/*:15*/
#line 671 "fist.w"




/*:26*/
#line 623 "fist.w"

/*4:*/
#line 136 "fist.w"

int main(int argc,char*argv[])
{
/*5:*/
#line 155 "fist.w"

int i,j,l,xstart,ystart,xend,yend,fillen,
prfist= TRUE,readin= TRUE,mopt= FALSE,left= FALSE,
scale= 100,sPLEN,sXLEN;
char*cp,opt,*fillpat= FILL;
char ibfr[200];
char page[PLEN][XLEN+2];
char llen[PLEN];

/*:5*/
#line 139 "fist.w"
;

/*17:*/
#line 386 "fist.w"

for(i= 0;i<argc;i++){
cp= argv[i];
if(*cp=='-'){
opt= *(++cp);
if(islower(opt))
opt= toupper(opt);
switch(opt){

case'C':
prfist= FALSE;
break;

case'F':
if(cp[1]!=0){
fillpat= cp+1;
}
break;

case'L':
left= TRUE;
break;

case'M':
mopt= TRUE;


break;

case'N':
readin= FALSE;
break;

case'S':

scale= atoi(cp+1);
if(scale<25){
scale= 25;
}else if(scale> 100){
scale= 100;
}
break;

case'?':
case'U':
/*18:*/
#line 443 "fist.w"

printf("FIST --  Emphatic message program.  Call\n");
printf("         with fist [options] <input >output\n");
printf("\n");
printf("         Options:   -C       Cool it, baby (no fist)\n");
printf("                    -Fpat    Fill with pattern pat\n");
printf("                    -L       Left handed fist\n");
printf("                    -Mtext   Use text as message below fist "
"(multiple -M options OK)\n");
printf("                    -N       Don't read message from standard input\n");
printf("                    -Sfactor Scale fist by 25%% <= factor <= 100%%\n");
printf("                    -U, -?   Print this message\n");
printf("\n");
printf("     by John Walker (http://www.fourmilab.ch/)\n");
printf("           Release %s --  %s\n",VERSION,REVDATE);
printf("            (P) All Rights Reversed\n");


/*:18*/
#line 431 "fist.w"
;
return 0;
}
}
}

/*:17*/
#line 141 "fist.w"
;

/*6:*/
#line 167 "fist.w"

if(prfist){
/*7:*/
#line 179 "fist.w"

/*8:*/
#line 207 "fist.w"

sPLEN= (PLEN*scale)/100;
sXLEN= (XLEN*scale)/100;

/*:8*/
#line 180 "fist.w"
;
/*9:*/
#line 220 "fist.w"

memset(llen,0,sizeof llen);
for(j= 0;j<sPLEN;j++){
memset(page[j],' ',sXLEN);
}

/*:9*/
#line 181 "fist.w"
;
/*10:*/
#line 235 "fist.w"

fillen= strlen(fillpat);
l= 0;
while(TRUE){
xstart= fistab[l++];
if(!(ystart= fistab[l++])){
break;
}
xend= fistab[l++];
yend= fistab[l++];

Scale(xstart,ystart);
Scale(xend,yend);
if(left){
int tx= sXLEN-xstart;
xstart= sXLEN-xend;
xend= tx;
}
for(i= ystart;i<=yend;i++){
for(j= xstart;j<=xend;j++){
page[i][j]= fillpat[j%fillen];
}
if((xend+1)> llen[i]){
llen[i]= xend+1;
}
}
}

/*:10*/
#line 182 "fist.w"
;
/*11:*/
#line 270 "fist.w"

for(i= 0;i<sPLEN;i++){
page[i][llen[i]]= EOS;
}

/*:11*/
#line 183 "fist.w"
;

/*:7*/
#line 169 "fist.w"
;
/*12:*/
#line 279 "fist.w"

for(i= 0;i<sPLEN;i++){
puts(page[i]);
}

/*:12*/
#line 170 "fist.w"
;
}

/*:6*/
#line 143 "fist.w"
;

/*13:*/
#line 292 "fist.w"

if(mopt){
for(i= 0;i<argc;i++){
cp= argv[i];
if((cp[0]=='-')&&
((cp[1]=='m')||cp[1]=='M')){
printmsg(cp+2);
}
}
}

/*:13*/
#line 145 "fist.w"
;
/*14:*/
#line 309 "fist.w"

if(readin){
while(fgets(ibfr,(sizeof ibfr)-1,stdin)){
ibfr[strlen(ibfr)-1]= 0;
printmsg(ibfr);
}
}

/*:14*/
#line 146 "fist.w"
;

return 0;
}

/*:4*/
#line 624 "fist.w"


/*:23*/
