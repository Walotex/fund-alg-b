#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//temperatura con condiciones//
// frui: 16
// caliente: 29
int frio = 16;
int caliente = 29;
int sofa = 7000;


int main (int argc, char** argv){
        int inputTemp = atoi (argv [1]);
        int inputMoney = atoi(argv[2]);
        char inputName = argv[3][0];                      //---> "Female" ---> { 'F', 'a', 'm', 'a', 'l', 'e', '\0'}
        bool temp_condition =  (inputTemp == frio);
        bool temp_condition2 = (inputTemp == caliente);
        bool temp_condition3 = (inputTemp >= caliente);
        bool isAbleToWalk = (inputTemp <= caliente);
        bool hasUserMoney = (inputMoney >= sofa);
        bool isUserMale = (inputName != 'F');
        

        if(isAbleToWalk){
            //Robot.move(x_coord, y_coord);
        } else {
            //Robot.Stop(x_coord, y_coord);
        }

        if(hasUserMoney){
            //Allows to buy
        } else {
            //Reject buy
        }

        if(inputTemp <= 29){
            //Robot.move(x.axis, y.axis);
        } else {
            //Robot.stop(x.axis, y.axis);
        }

        return 0;
}