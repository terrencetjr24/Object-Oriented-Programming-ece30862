//
//  Set.h
//  HW07_proj
//
//  Created by terrence on 9/29/19.
//  Copyright © 2019 terrence. All rights reserved.
//

#include <iostream>
using namespace std;
#ifndef Set_h
#define Set_h

class Set {
public:
    int* arr;
    int inpNumber;
    int valuesHeld;
    int copyCount;
    Set(int number){
        copyCount = 0;
        inpNumber = number;
        arr = new int[number];
        for(int i = 0; i < number; i++)
            arr[i] = 0;
    }
    //
    Set (const Set &S){
        arr = new int[S.inpNumber];
        for(int z = 0; z < S.inpNumber; z++)
            arr[z] = S.arr[z];
        copyCount = S.copyCount + 1;
        inpNumber = S.inpNumber;
        valuesHeld = S.valuesHeld;
    }
    //
    friend Set operator +(Set &arg1 ,int arg2);
    friend Set operator -(Set &arg1, int arg2);
    friend Set operator &(Set &arg1, Set &arg2);
    friend Set operator ~(Set &arg1);
    friend Set operator /(Set &arg1, Set &arg2);
    friend ostream &operator <<(ostream &arg1, const Set &arg2);
    int getCopyCount (){
        return copyCount;
    }
};
ostream &operator <<(ostream &arg1, const Set &arg2){
    int ValuesLeft = arg2.valuesHeld;
    for(int q = 0; q < arg2.inpNumber; q++){
        if(arg2.arr[q]) {
            if(ValuesLeft != 1){
                arg1 << q+1;
                arg1 << ", ";
                ValuesLeft--;
            }
            else
                arg1 << q+1 << endl;
        }
    }
    return arg1;
}

Set operator +(Set &arg1, int arg2){
    if(!arg1.arr[arg2-1]){
        arg1.arr[arg2 -1] = 1;
        arg1.valuesHeld+= 1;
    }
    return arg1;
}
Set operator -(Set &arg1, int arg2){
    if(arg1.arr[arg2-1]){
        arg1.arr[arg2 -1] = 0;
        arg1.valuesHeld--;
    }
    return arg1;
}

Set operator ~(Set &arg1){
    arg1.valuesHeld = arg1.inpNumber - arg1.valuesHeld;
    for(int q = 0; q < arg1.inpNumber; q++){
        if(arg1.arr[q])
            arg1.arr[q] = 0;
        else
            arg1.arr[q] = 1;
    }
    return arg1;
}
Set operator &(Set &arg1, Set &arg2){
    arg1.valuesHeld = 0;
    for(int q = 0; q < arg1.inpNumber; q++){
        if((arg1.arr[q] == 1) && (arg2.arr[q] == 1)){
            arg1.arr[q] = 1;
            arg1.valuesHeld++;
        }
        else
            arg1.arr[q] = 0;
    }
    return arg1;
}


Set operator /(Set &arg1, Set &arg2){
    for(int i = 0; i < arg1.inpNumber; i++){
        if((arg1.arr[i] == 1) && (arg2.arr[i] == 1)){
            arg1.arr[i] = 0;
            arg1.valuesHeld--;
        }
    }
    return arg1;
}

#endif /* Set_h */
