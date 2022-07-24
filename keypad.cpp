#include<iostream>
using namespace std;

int main(){
    char two[3] = {'A' ,'B', 'C'};
    char three[3] = {'D', 'E', 'F'};
    char four[3] = {'G', 'H', 'I'};
    char five[3] = {'J', 'K', 'L'};
    char six[3] = {'M', 'N', 'o'};
    char seven[4] = {'P', 'Q', 'R', 'S'};
    char eight[3] ={'T', 'U', 'V'};
    char nine[4] = {'W', 'X', 'Y', 'Z'}; 
    
    string key;
    
    cout<<"Enter the keyword equivalent of the word you want to type: (indicate the end of the letter using a dot)"<<endl;
    cin>>key;
    
    int count[7];
    int i=0;
    //looping through given numbers until end
    while(key[i]!='\0'){
        if(key[i] == '.'){//denoting end of the keystrikes
            i++;
            continue;
        }
        
        
        int counting=0;//no need waste can just use count[..] = 1,2.....

        switch(key[i]){
            //checking the numbers
            case '2':
                if(key[i] == '2' && key[i+1] == '2' && key[i+2] == '2'){
                    counting = 2;
                    count[0] = counting;
                    i=i+3;
                }else if(key[i]=='2' && key[i+1] == '2'){
                    counting++;
                    count[0] = counting;
                    i=i+2;
                }else{
                    count[0] = 0;
                    i++;
                }
                cout<<two[count[0]];
                break;
            case '3':
                if(key[i] == '3' && key[i+1] == '3' && key[i+2] == '3'){
                    counting = 2;
                    count[1] = counting;
                    i=i+3;
                }else if(key[i]=='3' && key[i+1] == '3'){
                    counting++;
                    count[1] = counting;
                    i=i+2;
                }else{
                    count[1] = 0;
                    i++;
                }
                cout<<three[count[1]];
                break;
            
            case '4':
                if(key[i] == '4' && key[i+1] == '4' && key[i+2] == '4'){
                    counting = 2;
                    count[2] = counting;
                    i=i+3;
                }else if(key[i] = '4' && key[i+1] == '4'){
                    counting++;
                    count[2] = counting;
                    i=i+2;
                }else{
                    count[2] = 0;
                    i++;
                }
                cout<<four[count[2]];
                break;
            
            case '5':
                if(key[i] == '5' && key[i+1] == '5' && key[i+2] == '5'){
                    counting = 2;
                    count[3] = counting;
                    i=i+3;
                }else if(key[i] == '5' && key[i+1] == '5'){
                    counting++;
                    count[3] = counting;
                    i=i+2;
                }else{
                    count[3] = 0;
                    i++;
                }
                cout<<five[count[3]];
                break;
            
            case '6':
                if(key[i] == '6' && key[i+1] == '6' && key[i+2] == '6'){
                    counting = 2;
                    count[4] = counting;
                    i=i+3;
                }else if(key[i] == '6' && key[i+1] == '6'){
                    counting++;
                    count[4] = counting;
                    i=i+2;
                }else{
                    count[4] = 0;
                    i++;
                }
                cout<<six[count[4]];
                break;
            
            case '7':
                if(key[i] == '7' && key[i+1] == '7' && key[i+2] == '7' && key[i+3] == '7'){
                    counting = 3;
                    count[5] = counting;
                    i=i+4;
                }else if(key[i] == '7' && key[i+1] == '7' && key[i+2] == '7'){
                    counting = 2;
                    count[5] = counting;
                    i=i+3;
                    }
                else if(key[i] && key[i+1] == '7'){
                    counting++;
                    count[5] = counting;
                    i=i+2;
                }else{
                    count[5] = 0;
                    i++;
                }
                cout<<seven[count[5]];
                break;
            
            case '8':
                if(key[i] == '8' && key[i+1] == '8' && key[i+2] == '8'){
                    counting = 2;
                    count[6] = counting;
                    i=i+3;
                }else if(key[i] == '8' && key[i+1] == '8'){
                    counting++;
                    count[6] = counting;
                    i=i+2;
                }else{
                    count[6] = 0;
                    i++;
                }
                cout<<eight[count[6]];
                break;

            case '9':
                if(key[i] == '9' && key[i+1] == '9' && key[i+2] == '9' && key[i+3] == '9'){
                    counting = 3;
                    count[7] = counting;
                    i=i+4;
                }else if(key[i] == '9' && key[i+1] == '9' && key[i+2] == '9'){
                    counting = 2;
                    count[7] = counting;
                    i = i+3;
                }else if(key[i] && key[i+1] == '9'){
                    counting++;
                    count[7] = counting;
                    i=i+2;
                }else{
                    count[7] = 0;
                    i++;
                }
                cout<<nine[count[7]];
                break;
            
            default:
                cout<<"Try again."<<endl;
                i++;
                break;
                
        }
    }
    cout<<endl; 

}
