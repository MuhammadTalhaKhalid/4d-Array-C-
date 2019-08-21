#include<iostream>

using namespace std;

class Data {
private:
int age;
string name;

public:
int id;
	
void input () {
cout<<"Enter name:";
cin>>name;
cout<<"Enter age;";
cin>>age;	
}	
void show() {
cout<<id<<"\t"<<name<<"\t"<<age<<endl;	
}
};

class Enter:public Data {
public:
	int n;
	int sid;
	
Data *d1[2][2][2];

void Create() {
	n=0;
for(int i=0;i<=1;i++) {

for(int j=0;j<=1;j++) {

for(int k=0;k<=1;k++) {
n++;
d1[i][j][k]=new Enter;	
d1[i][j][k]->input();	
d1[i][j][k]->id=n;	
}

}
	
}

}


void Out() {
cout<<"id\tName\tAge\n\n";	
for(int i=0;i<=1;i++) {

for(int j=0;j<=1;j++) {

for(int k=0;k<=1;k++) {

d1[i][j][k]->show();
cout<<endl;
	
}

}
	
}	

}

void Search() {
cout<<"Enter id to search: ";
cin>>sid;

for(int i=0;i<=1;i++) {

for(int j=0;j<=1;j++) {

for(int k=0;k<=1;k++) {
	
if(d1[i][j][k]->id==sid) {
system("cls");
cout<<"Its a match!!\n\n";
cout<<"in Array no "<<i<<" Row no  "<<j<<" Column no: "<<k<<endl<<endl;
d1[i][j][k]->show();	
}	
	
}

}
	
}

}

};

int main() {
Enter e1;
e1.Create();
e1.Out();
e1.Search();
return 0;	
}
