#include <iostream>
using namespace std;

class Data {
	public :
		int nim;
		string nama;
		int angka;
		
		Data *next;
};

int main()
{
	//INPUT = NADILA
	Data *node1, *node2, *node3, *node4, *node5, *node6; //mendeklarasikan variabel pointer bertipe data class linked list 
	int angka[20];
	string nama[20];
	
	node1=new Data;
	node2=new Data;
	node3=new Data;
	node4=new Data;
	node5=new Data;
	node6=new Data;
	for(int i=1; i<=6; i++)
	{
		cout<<"Input NIM ke-"<<i<<" = ";
		cin>>angka[i];
		cout<<"Input Nama ke-"<<i<<" = ";
		cin>>nama[i];
    cout<<endl;
	}
	
	//PROSES = NUR
	//node1
	node1->nim = angka[1];
	node1->nama = nama[1];
	node1->next = node2;
	//node2
	node2->nim = angka[2];
	node2->nama = nama[2];
	node2->next = node3;
	//node3
	node3->nim = angka[3];
	node3->nama = nama[3];
	node3->next = node4;
	//node4
	node4->nim = angka[4];
	node4->nama = nama[4];
	node4->next = node5;
	//node5
	node5->nim = angka[5];
	node5->nama = nama[5];
	node5->next = node6;
	//node6
	node6->nim = angka[6];
	node6->nama = nama[6];
	node6->next = NULL;
	
	//OUTPUT=FARAH
	cout<<endl;
	Data *cur; //mendeklarasikan variabel pointer bertipe data linked list
	cur=node1; //mengisi cur dengan isi dari node1
	int i = 1;
	
	while(cur != NULL)
	{
		cout<<"------------Data ke-"<<i<<"-------------"<<endl;
		cout<<"NIM	  : "<<cur->nim<<endl;
		cout<<"Nama	: "<<cur->nama<<endl;
		i++;
		cur=cur->next;
	}
	cout<<endl<<endl;
	
	
	return 0;
}
