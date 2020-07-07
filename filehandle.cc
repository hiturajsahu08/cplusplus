#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    // int a; float x; char itemcode[8];
    // The input data line contains
    //  123456fanbelt150.50
    // scanf ("%6d%7s%f", &a, itemcode, &x);
    // printf("%6d\t%7s\t%6.2f\n", a,itemcode , x);
    char linestr[80]; char outstr[80];
    char sroll[6], sname[30], sbatch[4],smarks[10];
    int sr; char sn[30]; int sb; float sm;
    int i,j,k,N=0;
    FILE *fpin; FILE *fpout;
    fpin =fopen("data_in.txt","r");
    if(fpin== NULL)
    {
        cout<<"couldn't open the file"<<endl;
        return -1;
    }
    fpout = fopen("data_out.txt","w");
    if (fpout==NULL){
        cout<<"could not create output file"<<endl;
        return -1;
    }
    /*input file is open at this point, read lines one by one*/
    fgets(linestr,79,fpin);
    while (!feof(fpin))
    {
        /* code */
        /*valid string, seperate the parts*/
        i=0;k=0;
        while ((sroll[i++]=linestr[k++]) != ',');
        sroll[i-1]='\0'; i=0;
        while ((sname[i++]= linestr[k++]) != ',');
        for(j=i-1;j<29;j++) sname[j]=' ';
        sname[29]='\0'; i=0;
        while ((sbatch[i++]= linestr[k++]) != ',');
        sbatch[i-1]='\0'; i=0;
        while ((smarks[i++]= linestr[k++]) != '\0');
        /*extract relevant values from these strings*/
        sscanf(sroll,"%d",&sr);
        sscanf(sname,"%s",sn);
        sscanf(sbatch,"%d",&sb);
        sscanf(smarks,"%f",&sm);
        sprintf(outstr,"%5d %30s %3d %5.2f\n",sr,sn,sb,sm);
        printf("%5d %30s %3d %5.2f\n",sr,sn,sb,sm);
        fputs(outstr,fpout);
        fgets(linestr,79,fpin);
        N=N+1;
    } /*End of While loop, entire input file has been processed*/
    cout<<"\n input file has been read and printed\n";
    cout<<"output file Data_out.txt created\n";
    cout <<N<< " records written to output file\n";
    fclose(fpin); fclose(fpout);
    return 0;
}