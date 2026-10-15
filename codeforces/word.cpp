/*Васю очень огорчает, что многие люди в интернете смешивают маленькие и большие буквы в одном
 слове. Поэтому он решил разработать расширение для своего любимого браузера, которое меняет регистр 
 букв в каждом слове так, чтобы оно либо состояло только из маленьких букв, либо, наоборот, только из 
 больших. При этом в слове должно измениться как можно меньше букв. Например, слово HoUse должно замениться
на house, а слово ViP — на VIP. В случае, если в слове содержится одинаковое количество маленьких и 
больших букв, нужно заменить все буквы на маленькие. Например, maTRIx нужно заменить на matrix. 
Ваша задача — обработать указанным способом одно заданное слово.*/
    #include <iostream>
    #include <string>
    int count_lower(char c){
        if(islower(c)){
            return 1;
        }
        return 0;
    }
    int count_higher(char c){
        if(isupper(c)){
            return 1;
        }
       return 0;
    }
    using namespace std;
    int main(){
        string c;
        int c_h=0, c_l=0;
        cin >> c;
        for(int i=0; i<c.length(); i++){
            c_h += count_higher(c[i]);
            c_l += count_lower(c[i]);
        }
        if(c_h > c_l){
            for(int i=0; i<c.length(); i++){
                c[i] = toupper(c[i]);
            }
        }
        else{
            for(int i=0; i<c.length(); i++){
                c[i] = tolower(c[i]);
            }
        }
        
        cout << c << endl;
        return 0;
    }