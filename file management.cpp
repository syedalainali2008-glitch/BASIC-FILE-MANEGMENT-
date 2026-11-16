#include<iostream>
using namespace std ;
int main ()
{
    string file_1 = "PROGRAM.py" ;
    string file_2 = "PROGRAM.cpp" ;
    string file_3 = "INDEX.html" ;
    // BASIC OR MINI FILE MANAGEMENT SYSTEM 
    
    string ask ;
    cout << "ENTER YOUR FILE NAME :" ;
    getline(cin , ask) ;
    for(int s = 0 ; s <= 6 ; s++){
        cout << "PROCESSING ......" << endl ;
    }
// STARTING OF PROGRAM WHEN USER ENTER FIRST TIME FILE 1 OR PROGRAM.PY
    if (ask == file_1){
        cout << "HERE IS YOUR FILE : " << file_1 << endl ;
        cout << "YOU WANT TO SEARCH YOUR OTHER FILES ? : " ;
        string ask_again ;
        getline(cin , ask_again) ;
        if (ask_again == "Y" || ask_again =="YES" || ask_again == "SURE" || ask_again == "PLEASE" || ask_again == "WHY NOT" || ask_again == "OK" || ask_again == "DO" || ask_again == "DO IT" || ask_again == "DO IT PLEASE" || ask_again  == "DO IT AGAIN HURRY UP PLEASE"){
           cout << "ENTER FILE NAME :" ;
           string file_name ;
           getline(cin , file_name) ;
           for(int n = 0 ; n <= 6 ; n++){
               cout << "PROCESSING...." << endl ;
           }
// file 2 condtion run here AND THIS ONE WILL BE RUN WHEN USER SAID YES FOR SECOND TIME BUT ENTER OR FILE 2 OR PROGRAM.CPP
           if (file_name == file_2){
               cout << "HERE IS YOUR FILE : " << file_2 << endl ;
               cout << "NOW FOLDER HAVE ONE LAST FILE " << endl ;
               cout << "YOU WANT TO SEARCH YOUR ONE LAST FILE ? : "  ;
               string ask_last_time ;
               getline(cin , ask_last_time) ;
               if (ask_last_time == "Y" || ask_last_time =="YES" || ask_last_time == "SURE" || ask_last_time == "PLEASE" || ask_last_time == "WHY NOT" || ask_last_time == "OK" || ask_last_time == "DO" || ask_last_time == "DO IT" || ask_last_time == "DO IT PLEASE" || ask_last_time  == "DO IT AGAIN HURRY UP PLEASE"){
                   string filename ;
                   cout << "ENTER FILE NAME :" ;
                   getline(cin , filename) ;
                   for(int r = 0 ; r <= 6 ; r++){
                       cout << "PROCESSING...." << endl ;
                   }
                   if (filename == file_3){
                       cout << "HERE IS YOUR FILE : " << file_3 << endl ;
                       cout << "NOW THIS ONE IS LAST FILE OF YOUR FOLDER " << endl ;
                       cout << "FOLDER END." ;
                    }
                    else if (filename == file_1 || filename == file_2){
                        cout << "SORRY SIR , I ALREADY FOUND THIS FILE :" << endl ;
                    }
                    else{
                        cout << "SORRY SIR I THINK FILE NOT EXIST IN THIS FOLDER OR ANY OHTER PROBLEM :" << endl ;
                    }
                }
               else if (ask_last_time == "N" || ask_last_time =="LEAVE" || ask_last_time == "NO" || ask_last_time == "OFF" || ask_last_time == "FORGET" || ask_last_time == "STOP" || ask_last_time == "DON'T" || ask_last_time == "DON'T DO IT" || ask_last_time == "DON'T DO IT PLEASE" || ask_last_time  == "NEVER"){
                   cout << "COMMAND STOP " << endl ;
                   cout << "HAVE A NICE DAY " << endl ;
               }
               else{
                   cout << "I , THINK YOU HAVE MISS PRINT RETRY BY RUN PROGRAM AGAIN :" << endl ;
                   
               }
            }// THIS CONDITON WILL BE RUN WHEN USER TELL . YES FOR RUN SECOND TIME BUT ENTER FILE 3 OR FILE INDEX.HTML
            else if(file_name == file_3){
                cout << "HERE IS YOUR FILE :" << file_3 << endl ;
                cout << "NOW YOU HAVE JUST ONE FILE LEFT IN FOLDER " << endl ;
                cout << "YOU WANT TO SEARCH YOUR ONE LAST FILE ? : "  ; 
                string ask_last_time ;
                getline(cin , ask_last_time) ;
                if (ask_last_time == "Y" || ask_last_time =="YES" || ask_last_time == "SURE" || ask_last_time == "PLEASE" || ask_last_time == "WHY NOT" || ask_last_time == "OK" || ask_last_time == "DO" || ask_last_time == "DO IT" || ask_last_time == "DO IT PLEASE" || ask_last_time  == "DO IT AGAIN HURRY UP PLEASE"){
                    string filename ;
                    cout << "ENTER FILE NAME :" ;
                    getline(cin , filename) ;
                    if (filename == file_2){
                        cout << "THIS IS THE LAST FILE IN THIS  FOLDER :" << file_2 << endl ;
                        cout << "FOLDER END." << endl ;
                    }
                    else if (filename == file_3 || filename == file_1){
                        cout << "I ALREADY FOUND THIS FILE AND SHOW YOU :" << endl ;
                    }
                    else{
                        cout << "I THINK THERE HAVE A PROBLEM OR FILE WAS NOT IN FOLDER :" << endl ;
                    }
                }
                else if (ask_last_time == "N" || ask_last_time =="LEAVE" || ask_last_time == "NO" || ask_last_time == "OFF" || ask_last_time == "FORGET" || ask_last_time == "STOP" || ask_last_time == "DON'T" || ask_last_time == "DO IT" || ask_last_time == "DON'T DO IT PLEASE" || ask_last_time  == "NEVER"){
                   cout << "COMMAND STOP " << endl ;
                   cout << "HAVE A NICE DAY " << endl ;
                }
                else{
                    cout << "I , THINK YOU HAVE MISS PRINT RETRY BY RUN PROGRAM AGAIN :" << endl ;
                }
            }else if (file_name == file_1){
                for(int loop = 0 ; loop <= 5 ; loop++){
                    cout << "PROCESSING...." << endl ;
                }
                cout << "I AREADY SEND YOU THIS FILE . " << endl;
            }
            else{
                cout << "HERE HAVE ANY PROBLEM  \n OR YOU MISSPRINT IT :" << endl ; 
                
            }
            // AND THIS ELSE IF CONDITON WILL BE RUN WHE  USER SAID HE/SHE ENTER NO THEY NOT GO FOR SEARCH SECOND FILE 
        }else if (ask_again == "N" || ask_again =="LEAVE" || ask_again == "NO" || ask_again == "OFF" || ask_again == "FORGET" || ask_again == "STOP" || ask_again == "DON'T" || ask_again == "DO IT" || ask_again == "DON'T DO IT PLEASE" || ask_again  == "NEVER"){
                   cout << "COMMAND STOP " << endl ;
                   cout << "HAVE A NICE DAY " << endl ;
            
        }
        else{
            cout << "I , THINK YOU HAVE MISS PRINT RETRY BY RUN PROGRAM AGAIN :" << endl ;
                }
    
      
    }
// AND THIS WILL BE RUN WHEN USER ENTER FILE 2 OR PROGRAM.CPP ON FIRST TIME 
    else if(ask == file_2){
        for(int i = 1 ; i <= 5 ; i++){
            cout << "PROCESSING...."  << endl ;
        }
        cout << "HERE IS YOUR FILE :" << file_2 << endl ;
        cout << "DO YOU WANT TO SEARCH ANYTHING ELSE LIKE OHTER FILES IN A FOLDER ?(Y/N) : "  ;
        string ask_again ;
        getline(cin , ask_again) ;
        if (ask_again == "Y" || ask_again =="YES" || ask_again == "SURE" || ask_again == "PLEASE" || ask_again == "WHY NOT" || ask_again == "OK" || ask_again == "DO" || ask_again == "DO IT" || ask_again == "DO IT PLEASE" || ask_again  == "DO IT AGAIN HURRY UP PLEASE"){
            cout << "ENTER YOUR FILE NAME :" ;
            string file_name ;
            getline(cin , file_name) ;
// this line of code will be run when user want to find his second file as file 1 or file program.py
            if( file_name == file_1) {
                for(int i = 0 ; i <= 4 ; i++){
                    cout << "PROCESSING..."  << endl ; 
                }
                cout << "HERE IS YOUR FILE :" << file_1 << endl ;
                cout << "YOU WANT TO SEARCH SOMETHING ELSE BECAUSE YOU HAVE JUST LAST FILE ? (Y/N) : " ;
                string ask_last_time ;
                getline(cin , ask_last_time) ;
                // THIS CONDITON WILL BE RUN WHEN USER SAID HE WANT TO SEARCH HIS LAST FILE ALSO 
                if (ask_last_time == "Y" || ask_last_time =="YES" || ask_last_time == "SURE" || ask_last_time == "PLEASE" || ask_last_time == "WHY NOT" || ask_last_time == "OK" || ask_last_time == "DO" || ask_last_time == "DO IT" || ask_last_time == "DO IT PLEASE" || ask_last_time  == "DO IT AGAIN HURRY UP PLEASE"){
                    cout << "ENTER FILE NAME PLEASE :" ;
                    string filename ;
                    getline(cin , filename) ;
                    // THIS IS LAST TIME WHEN SEARCH ENGINE RUN TO FIND USERS FILE 
                    if (filename == file_3){
                        for(int i = 0 ; i <= 4 ; i++){
                            cout << "PROCESSING..."  << endl ; 
                        }
                    
                        cout << "HERE IS YOUR FILE :" << file_3 << endl ;
                        cout << "FOLDER END." ;
                    }
                    else if (filename == file_1 || filename == file_2){
                        cout << "SORRY I ALREADY FIND IT ." ;
                    }
                    else{
                        cout << "I THINK THIS FILE IS NOT IN THIS FOLDER OR YOU MISPRINT ,TRY AGAIN BY RUN BUTTOM ." ;
                    }
                    
                }else if (ask_last_time == "N" || ask_last_time =="LEAVE" || ask_last_time == "NO" || ask_last_time == "OFF" || ask_last_time == "FORGET" || ask_last_time == "STOP" || ask_last_time == "DON'T" || ask_last_time == "DO IT" || ask_last_time == "DON'T DO IT PLEASE" || ask_last_time  == "NEVER"){
                   cout << "OK AS YOU WISH :" << endl ;
                   cout << "COMMAND END ." ;
                 
                }
                else {
                    cout << "I THINK YOU HAVE MIS PRINT TRY AGAIN :" << endl ;
                    cout << "OR SOMETHING ELSE ISSUE :" ;
                }
                
                
            }// AND THIS WILL BE RUN  WHEN  USER ENTER SECOND  TIME BUT USER ENTER FILE 3 OR FILE INDEX.HTML
            else if (file_name == file_3){
                for(int i = 0 ; i <= 4 ; i++){
                    cout << "PROCESSING..."  << endl ; }
                cout << "HERE IS YOUR FILE :" << file_3 << endl ;
                cout << "YOU WANT TO SEARCH SOMETHING ELSE BECAUSE YOU HAVE JUST LAST FILE ? (Y/N) : " ;
                string ask_last_time ;
                getline(cin , ask_last_time) ;
                if (ask_last_time == "Y" || ask_last_time =="YES" || ask_last_time == "SURE" || ask_last_time == "PLEASE" || ask_last_time == "WHY NOT" || ask_last_time == "OK" || ask_last_time == "DO" || ask_last_time == "DO IT" || ask_last_time == "DO IT PLEASE" || ask_last_time  == "DO IT AGAIN HURRY UP PLEASE"){
                    string filename ;
                    cout << "ENTER FILE NAME :" ;
                    getline(cin , filename) ;
                    if (filename == file_1) {
                        for(int i = 0 ; i <= 4 ; i++){
                            cout << "PROCESSING..."  << endl ;
                        }
                        cout << "HERE IS YOUR FILE :" << file_1 << endl ;
                        cout << "FOLDR END." ;
                    }
                    else if(filename == file_3 || filename == file_2){
                        cout << "SORRY BUT I ALREADY GIVE THIS FILE :" ;
                    }
                    else{
                        cout << "I , THINK IN THIS FOLDER THIS FILE WAS NOT EXIST OR YOU HAVE MISS PRINT :" << endl ;
                    }
                    
                }else if (ask_last_time == "N" || ask_last_time =="LEAVE" || ask_last_time == "NO" || ask_last_time == "OFF" || ask_last_time == "FORGET" || ask_last_time == "STOP" || ask_last_time == "DON'T" || ask_last_time == "DO IT" || ask_last_time == "DON'T DO IT PLEASE" || ask_last_time  == "NEVER"){
                    cout << "COMMAND STOP " << endl ;
                    cout << "HAVE A NICE DAY " << endl ;
                    
                } 
                else{
                    cout << "THERE HAVE ANY ISSUE \n";
                    cout << "OR YOU MISS PRINT :";
                }
                
                
                
            }else if (file_name == file_2){
                cout << "I ALREADY SEND YOU THIS FILE :" << endl ;
                
            }
            else{
                cout << "HERE HAVE ANY ISSUE OR PROBLEM OR\n YOU MISS PRINT IT ." << endl ;
            }
            
                
                
        }else if (ask_again == "N" || ask_again =="LEAVE" || ask_again == "NO" || ask_again == "OFF" || ask_again == "FORGET" || ask_again == "STOP" || ask_again == "DON'T" || ask_again == "DO IT" || ask_again == "DON'T DO IT PLEASE" || ask_again  == "NEVER"){
            cout << "COMMAND STOP " << endl ;
            cout << "HAVE A NICE DAY " << endl ;
            
        }
        else{
            cout << "I , THINK YOU HAVE MISS PRINT RETRY BY RUN PROGRAM AGAIN :" << endl ;
                }
        
        
    }
    // NOW THIS CONDITON RUN WHEN USER ENTER FILE 3 IN HIS FIRST TIME 
    else if (ask == file_3){
        for(int l = 0 ; l <= 5 ; l++){
            cout << "PROCESSING...." << endl ;
        }
        cout << "HERE IS YOUR FILE :" << file_3 << endl ;
        cout << "YOU WANT TO SEARCH SOMETHING ELSE IN FOLDER ?(Y/N) : " ;
        string ask_again ;
        getline(cin , ask_again) ;
        if (ask_again == "Y" || ask_again =="YES" || ask_again == "SURE" || ask_again == "PLEASE" || ask_again == "WHY NOT" || ask_again == "OK" || ask_again == "DO" || ask_again == "DO IT" || ask_again == "DO IT PLEASE" || ask_again  == "DO IT AGAIN HURRY UP PLEASE"){
            string file_name ;
            cout << "ENTER FILE NAME :" ;
            getline(cin , file_name) ;
            if (file_name == file_2){
                for(int loop = 0 ; loop <= 5 ; loop++){
                    cout << "PROCESSING..." << endl ;
                }
                cout << "HERE IS YOUR FILE :" << file_2 << endl ;
                cout << "DO YOU WANT TO SEARCH SOMETHING ELSE FILES ? (Y/N) : " ;
                string ask_last_time ;
                getline(cin , ask_last_time) ;
                if (ask_last_time == "Y" || ask_last_time =="YES" || ask_last_time == "SURE" || ask_last_time == "PLEASE" || ask_last_time == "WHY NOT" || ask_last_time == "OK" || ask_last_time == "DO" || ask_last_time == "DO IT" || ask_last_time == "DO IT PLEASE" || ask_last_time  == "DO IT AGAIN HURRY UP PLEASE"){
                    string filename ;
                    cout << "ENTER FILE NAME :" ;
                    getline(cin ,filename ) ;
                    if (filename == file_1){
                        cout << "HERE IS YOUR FILE :" << file_1 << endl ;
                        cout << "FOLDER END ." ;
                    }
                    else if (filename == file_2 || filename == file_3){
                        cout << "SORRY BUT I ALREADY FOUND THIS FILE AND SEND IT TO YOU ." << endl ;
                        
                    }
                    else{
                        cout << "THERE HAVE ANNY PROBLEM OR \n MISS PRINT THIS " << endl ;
                    }
                } else if ( ask_last_time == "N" || ask_last_time =="LEAVE" || ask_last_time == "NO" || ask_last_time == "OFF" || ask_last_time == "FORGET" || ask_last_time == "STOP" || ask_last_time == "DON'T" || ask_last_time == "DO IT" || ask_last_time == "DON'T DO IT PLEASE" || ask_last_time  == "NEVER"){
                    cout << "COMMAND STOP " << endl ;
                    cout << "HAVE A NICE DAY " << endl ;
                    
                }
                
            }else if (file_name == file_1){
                for(int loops = 0 ; loops <= 5 ; loops++){
                    cout << "PROCESSING...." << endl ;
                }
                cout << "HERE IS YOUR FILE :" << file_1 << endl ;
                cout << "YOU HAVE JUST LAST FILE IN THE FOLDER YOU WANT TO SEARCH IT ? (Y/N) :" ;
                string ask_last_time ;
                getline(cin , ask_last_time) ;
                if (ask_last_time == "Y" || ask_last_time =="YES" || ask_last_time == "SURE" || ask_last_time == "PLEASE" || ask_last_time == "WHY NOT" || ask_last_time == "OK" || ask_last_time == "DO" || ask_last_time == "DO IT" || ask_last_time == "DO IT PLEASE" || ask_last_time  == "DO IT AGAIN HURRY UP PLEASE"){
                    string filename ;
                    cout << "ENTER FILE NAME :" ;
                    getline(cin , filename) ;
                    if (filename == file_2) {
                        for(int i = 0 ; i <= 5 ; i++){
                            cout << "PROCESSING...." << endl ;
                        }
                        cout << "HERE IS YOUR FILE :" << file_2 << endl ;  
                        cout << "FOLDER END ." ;
                        
                    }
                    else if (filename == file_3 || filename == file_1){
                        cout << "I ALREADY FOUND THIS FILE AND SEND IT TO YOU :" << endl ;
                    }
                    else {
                        cout << "THERE HAVE ANY PROBLEM OR YOU MISS PRINT IT :" ;
                    }
                }else if ( ask_last_time == "N" || ask_last_time =="LEAVE" || ask_last_time == "NO" || ask_last_time == "OFF" || ask_last_time == "FORGET" || ask_last_time == "STOP" || ask_last_time == "DON'T" || ask_last_time == "DO IT" || ask_last_time == "DON'T DO IT PLEASE" || ask_last_time  == "NEVER"){
                    cout << "COMMAND STOP " << endl ;
                    cout << "HAVE A NICE DAY " << endl ;
                    
                }
                else{
                    cout << "THERE HAVE ANY PROBLEM \n OR YOU MISS PRINT :" ;
                }
                
                
            }else if (file_name == file_3){
                cout << "I ALREADY SEND YOU THIS FILE :" << endl ;
                
            }
            else{
                cout << "HERE HAVE ANY ISSUE OR PROBLEM OR\n YOU MISS PRINT IT ."  << endl ;
            }
        }
        else if (ask_again == "N" || ask_again =="LEAVE" || ask_again == "NO" || ask_again == "OFF" || ask_again == "FORGET" || ask_again == "STOP" || ask_again == "DON'T" || ask_again == "DO IT" || ask_again == "DON'T DO IT PLEASE" || ask_again  == "NEVER"){
                   cout << "COMMAND STOP " << endl ;
                   cout << "HAVE A NICE DAY " << endl ;
            
        }
        else{
            cout << "I , THINK YOU HAVE MISS PRINT RETRY BY RUN PROGRAM AGAIN :" << endl ;
                }
        
    }else{
        for(int loop = 0 ; loop <= 5 ; loop++){
            cout << "PROCESSING...." << endl ;
        }
        cout << "THIS FILE WAS NOT IN THIS FOLDER \n OR YOU HAVE MISS PRINT :" << endl ;
    }
}
