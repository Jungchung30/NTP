#include<string>
#include<bits/stdc++.h>
#include <algorithm>
#include<stdlib.h>
#include <iomanip>

using namespace std;

class danhsach {
private:
     struct RapPhim{
     string tenrap,tenphim,start,end;
     float sove,giave;
     int soghe,sophong,sonhanvien,id;
         
         void in();
         void nhap();
         RapPhim * next;    
     };
     RapPhim *head;
     RapPhim *tail;
    public:
    danhsach() : head(NULL) {}
    void AddRap();
    void timkiemraptheoid(int c);
    void timkiemraptheoten(string ten);
    void timkiemrap();
    void Xoarap(int a);
    void Suathongtinrap(int id);
    void Sapxeptenrap();
    void Print();
    double doanhthutrong1ngay(int ma);  
};
void danhsach::Suathongtinrap(int id){
        RapPhim *p=head;
        string n;
        int m,dem=0;
         int chon;
        while(p!=NULL){
        if(p->id==id){
            dem++;
         cout<<"----------------------menu----------------------\n";
         cout<<"1.ten rap";
         cout<<"\n2.ten phim";
         cout<<"\n3.thoi gian bat dau phim";
         cout<<"\n4.thoi gian ket thuc phim";
         cout<<"\n5.so ve ";
         cout<<"\n6.gia ve";
         cout<<"\n7.so ghe";
         cout<<"\n8.so phong";
         cout<<"\n9.so nhan vien";
         cout<<"\n10.ID ";
         cout<<"\n0.Tro ve menu";
         cout<<"\n---------------------------------------------------";
         cout<<"\nban muon sua thong tin nao  ";

         int choice;
         cin>>choice;

         switch(choice){
            case 1:       
                cout<<" Nhap noi dung ban muon sua :";
                cin.ignore(1);
                getline(cin,n);
                p->tenrap=n;  
                cout<<"Da sua thong tin thanh cong!\n" ;     
                break;
            case 2:                                     
                cout<<" Nhap noi dung ban muon sua :";
                cin.ignore(1);
                getline(cin,n);
                p->tenphim=n;  
                cout<<"Da sua thong tin thanh cong\n!" ;     
                break;
             case 3:              
                cout<<" Nhap noi dung ban muon sua :";
                cin>>m;
                p->start=m;  
                cout<<"Da sua thong tin thanh cong!\n" ;     
                break;
            case 4:                
                cout<<" Nhap noi dung ban muon sua :";
                cin>>m;
                p->end=m;  
                cout<<"Da sua thong tin thanh cong!\n" ;     
                break;
            case 5:                                   
                cout<<" Nhap noi dung ban muon sua :";
                cin>>m;
                p->sove=m;  
                cout<<"Da sua thong tin thanh cong!\n" ;     
                break;
            case 6 :                    
                cout<<" Nhap noi dung ban muon sua :";
                cin>>m;            
                p->giave=m;  
                cout<<"Da sua thong tin thanh cong!\n" ;     
                break;          
            case 7:                     
                cout<<" Nhap noi dung ban muon sua :";              
                cin>>m;
                p->soghe=m;  
                cout<<"Da sua thong tin thanh cong!\n" ;     
                break;  
             case 8:
              cout<<" Nhap noi dung ban muon sua :";
                cin>>m;
                p->sophong=m;  
                cout<<"Da sua thong tin thanh cong!\n" ;     
                break;  
            case 9:
                cout<<" Nhap noi dung ban muon sua :";
                cin>>m;
                p->sophong=m;  
                cout<<"Da sua thong tin thanh cong!\n" ;     
                break;    
             case 10:
             cout<<" Nhap noi dung ban muon sua :";
                cin>>m;
                p->id=m;  
                cout<<"Da sua thong tin thanh cong!\n" ;     
                break;  
            case 0:
            break;    
         }  }
         p=p->next;} 
        if(dem==0){
        cout<<"Khong co id rap "<<id;
        int g;
        cout<<"\nvui long nhap id lai :";
        cin>>g;
        Suathongtinrap(g);}
        }
double danhsach::doanhthutrong1ngay(int ma){
    int sovebanduoc;
    double tongdoanhthu=0;
    
        RapPhim *p=head;
        while (p!=NULL){
        if(p->id==ma){
          cout<<"so ve ban duoc trong 1 ngay : ";
          cin>>sovebanduoc;
          tongdoanhthu=(double)sovebanduoc*p->giave; 
          cout <<"\ndoanh thu cua rap: ";
          return tongdoanhthu;        
       }
       p=p->next;}     
        return 0;
}
void danhsach::timkiemraptheoten(string ten) {
    RapPhim *p=head;
    while (p != NULL) {
        if (p->tenrap == ten) {
            cout << "tim thay rap phim : " << ten << endl;
            p->in();
            return;
        }
        p = p->next;
    }
    cout << "khong tim thay rap phim  " << ten << endl;
    return ;
}
void danhsach::timkiemraptheoid(int c){
    RapPhim *l=head;
    while(l!=NULL){
    if(l->id==c){
    cout<<"da tim thay rap theo ID "<<c<<endl;
    l->in();
   return ;
    }
    l=l->next;
    } 
  cout<<"khong co rap theo id "<<c<<" ban can tim!\n";
  return ;
    }


void danhsach::timkiemrap() {
    cout << "Chon phuong thuc tim kiem:\n";
    cout << "1. Theo ten rap\n";
    cout << "2. Theo ID rap\n";
    cout << "0. Tro ve menu chinh\n";
    
    int luachon;
    cin>>luachon;

    switch(luachon){
          case 1:{
          string name;
          cout<<"nhap ten rap can tim :";
          cin.ignore();
          getline(cin,name);
          timkiemraptheoten(name);
          break;}
          case 2:{
          int i;
          cout<<"nhap id rap muon tim : ";
          cin>>i; 
          timkiemraptheoid(i);
           break;}
           default:
           break;
    }
 
}
 void danhsach::RapPhim::in(){
    cout << "-----------------------------------------\n";
    cout<<"Thong tin cua rap !\n";
    cout <<"ID cua rap :" <<id<< endl;
    cout <<"Ten rap :" <<tenrap<< endl;
    cout << "Ten phim :" <<tenphim << endl;
    cout << "Thoi gian bat dau phim  :" << start << endl;
    cout << "Thoi gian ket thuc phim: " << end << endl;
    cout << "Gia ve :" << giave << endl;
    cout << "So ghe trong 1 phong: " << soghe<< endl;
    cout << "So phong trong 1 rap: " << sophong << endl;
    cout << "So nhan vien trong 1 rap: " <<sonhanvien << endl;
    cout << "------------------------------------------\n";
}
void danhsach::RapPhim::nhap(){
    cout<<"Nhap thong tin cua rap\n";
     cout<<"Nhap ID cua rap :";
     cin>>id;
      cout<<"Nhap ten rap :";
      cin.ignore(1);
      getline(cin,tenrap);
      cout<<"Nhap ten phim :";
      getline(cin,tenphim);
      cout<<"Nhap thoi gian bat dau chieu phim :";
      getline(cin,start);
      cout<<"Nhap thoi gian ket thuc phim :";
      getline(cin,end);
      cout<<"Nhap gia ve cua phim :";
      cin>>giave;
      cout<<"Nhap so ghe ngoi trong 1 phong : ";
      cin>>soghe;
      cout<<"Nhap so phong cua 1 rap : ";
      cin>>sophong;
      cout<<"Nhap so nhan vien trong 1 rap :";
      cin>>sonhanvien;
}
void danhsach::AddRap(){
   RapPhim *newrap=new RapPhim;
   newrap->nhap();
   newrap->next=NULL;
   if(head==NULL){
   head=tail=newrap;}
   else{
    RapPhim *p=head;
    if(p->id!=newrap->id){
    while(p->next!=NULL){
        p=p->next;
    }
     p->next=newrap;
     tail=newrap;
   }
   else{
    cout<<"ID  "<< newrap->id<< " da ton tai vui long nhap lai ! \n";
    AddRap();
   }
   }

}
void danhsach::Xoarap(int a){
    int dem=0;
     if(head==NULL){
        cout<<"Danh sach rong! Khong the xoa"<<endl;
     }
     else{
        RapPhim *p=head;
        while(p!=NULL){
         if( p->id==a ){
                dem++;
             if(p==head){
                head=p->next;
                p->next=NULL;
                delete p;
                }
             else if(p==tail){
                   RapPhim *q=head;
                 while(q->next!=tail){
                     q=q->next;
                             }
                       q->next=NULL;
                       tail=q;
                       delete p;
                       p=tail;
                        } 
             else {
              RapPhim *q=head;
                while (q->next!=p){
                q=q->next;
                              }
                  q->next=p->next;
                  p->next=NULL;
                  delete p;
                  p=q;
                         }     
          cout<<"Da xoa rap co ID "<<a; 
                            }
        p=p->next;
          } }
          if(dem==0){
         cout<<"Khong co rap theo ID "<<a ; 
                    }    
          }
void danhsach::Sapxeptenrap() {
      
      for(RapPhim *i=head;i!=NULL;i=i->next){
        string catchuoi1=i->tenrap.substr(4,i->tenrap.length());
        for(RapPhim *j=i->next;j!=NULL;j=j->next){
            string catchuoi2=j->tenrap.substr(4,j->tenrap.length());
            if(catchuoi1.compare(catchuoi2) > 0){
                RapPhim temp=*i;
                *i=*j;
                *j=temp;
                temp.next = i->next;
                i->next = j->next;
                j->next = temp.next;
            }
        }        
      }
      cout<<"da duoc sap xep !";
}
   

void danhsach::Print(){
    RapPhim *a=head;
    while (a!=NULL){
      a->in();
      a=a->next;
                   }
                   }
int main() {
    danhsach a;
    int n;

    do{
        cout<<"\n-------------------MENU-----------------------";
        cout<<"\n1.Them rap "<<endl;
        cout<<"2.Xoa rap theo id "<<endl;
        cout<<"3.Hien thi toan bo danh sach rap"<<endl;
        cout<<"4.Tim kiem rap "<<endl;
        cout<<"5.Tinh doanh thu cua rap trong  1 ngay"<<endl;
        cout<<"6.Sua thong tin rap"<<endl;
        cout<<"7.Sap xep ten rap"<<endl;
        cout<<"0.Thoat"<<endl;
        cout<<"------------------------------------------------";

        cout<<"\nNhap so theo lua chon cua ban :";
        cin>>n;

        switch(n){
            case 1:
            a.AddRap();
            break;
            case 2:
            cout<<"ban muon xoa rap theo ID nao  : ";
            int k;
            cin>>k;
            a.Xoarap(k);
            break;
            case 3:
            a.Print();
            break;  
            case 4:
            a.timkiemrap();
             break;
            case 5:
            int ma;
            double b;
            cout<<" nhap id rap muon tinh doanh thu : "; cin>>ma;   
             b=a.doanhthutrong1ngay(ma);        
             if(b==0)   {
                cout<<"khong tim thay id !";
             }
             else{
             cout<<fixed<<setprecision(0)<<b<<" VND" ;
             }
             break;
            case 6:
            cout<<"Nhap id rap muon sua thong tin : ";
            int h;
            cin>>h;
            a.Suathongtinrap(h);
             break;
            case 7:
            a.Sapxeptenrap();
            break;    
     }   
    }while (n!=0);  
    return 0;
}