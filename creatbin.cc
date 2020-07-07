#include <iostream>
#include<cstring>
#include<cstdio>

using namespace std;

struct studentinfo
{
    /* data */
    int roll;
    char name[30];
    int batch;
    float marks;
};


int main()
{
    studentinfo s;
    int rec_size;
    int r,b; char n[30]; float m;
    int count =0;
    rec_size=sizeof(struct studentinfo);
    cout<<" size of record is: "<<rec_size<<endl;
    FILE *fp_input, *fp_output;
    fp_input = fopen("data_out.txt","r");
    if(fp_input==NULL)
    {
        cout<<" Could not open the file."<<endl;
        return -1;
    }
    fp_output = fopen("studentdb","wb");
    if(fp_output==NULL)
    {
        cout<<" Could not create the file."<<endl;
        return -1;
    }
    fscanf(fp_input, "%d %s %d %f", &r,n,&b,&m);
    while (!feof(fp_input))
    {
        /* code */
        count++;
        s.roll=r; s.marks=m; strcpy(s.name, n); s.batch=b;
        fwrite(&s,rec_size,1,fp_output);
        printf("%2d %5d %30s %3d %5.2f\n", count, s.roll, s.name,s.batch,s.marks);
        fscanf(fp_input,"%d %s %d %f", &r,n,&b,&m);
    }
    cout<<"marks data file read and printed \n";
    cout<<"Database created for student info\n";
    cout<< "Total records written "<< count << endl;
    fclose(fp_input);
    fclose(fp_output);
    return 0;
}
