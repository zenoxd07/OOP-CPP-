#include<iostream>
using namespace std;


class Item{
    public:
int price;
int display(int price){
   
    cout<<price;

}

};


int main(){
    int price;
    // cout<<"Enter price: "<<endl;
    // cin>>price;
    // Item i1;
    // i1.price;
    // i1.display(price);




    Item *ptr=new Item;
    ptr->display(price);
    

}