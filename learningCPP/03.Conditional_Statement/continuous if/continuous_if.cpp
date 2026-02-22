  #include<iostream>
  #include<string>

  using namespace std;
  /*3. if(condition){  
       if(condition){
       if true this will be excuted
       }
       if(condition){
       if true this will be excuted
       }
    }
       else{
       
       }
    
    */
   int main(){
  
   string wanna_order;
   int number;
    string drink;
    string ordered_drinks[5];
    string Avaiabledrinks[4]={"Borhani","Mango Sarbat","Cococola","Laban"};

    cout << "do you want to order for yourself as drinks? " <<endl;
    getline(cin,wanna_order);

    if("yes"==wanna_order || "YES"==wanna_order || "Yes"==wanna_order){

        cout << "How many drinks you wanna? " <<endl;
        cin >> number ;
        cin.ignore();
        ordered_drinks[number];
    
        for(int i=0;i<number;i++){
            cout << "which drinks you wanna order?" <<endl;
            getline(cin,drink);


            if(Avaiabledrinks[0]==drink){
             ordered_drinks[i]=Avaiabledrinks[0];
            }

            if(Avaiabledrinks[1]==drink){
             ordered_drinks[i]=Avaiabledrinks[1];
            }

            if(Avaiabledrinks[2]==drink){
             ordered_drinks[i]=Avaiabledrinks[2];
            }

            if(Avaiabledrinks[3]==drink){
             ordered_drinks[i]=Avaiabledrinks[3];
            }

            if(Avaiabledrinks[4]==drink){
             ordered_drinks[i]=Avaiabledrinks[4];
            }

            if(Avaiabledrinks[5]==drink){
             ordered_drinks[i]=Avaiabledrinks[5];
            }


        }
    }
    else{
        cout << "you ordered no drinks" << endl;
    }

     cout << "You ordered drinks: " <<endl;
    
    for(int j=0; j < number;j++){
        cout << ordered_drinks[j] << ","  ;
    }
}
    
