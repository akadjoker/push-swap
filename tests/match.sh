#!/bin/bash

printf "\n Teste  0 .. 5 "
ARG=`ruby -e "puts (0..5).to_a.shuffle.join(' ')"`
NBRCOUP=$(./push_swap $ARG | wc -l);
printf "\n"
echo " Result : " $NBRCOUP
TEST=$(./push_swap $ARG | ./checker $ARG);
if [ $TEST = "OK" ]
then
    printf "\033[0;32m OK \033[0;0m\n"
    
else
    printf "\033[0;31m KO \033[0;0m\n"
fi;

printf "\n Teste  0 .. 25 "
ARG=`ruby -e "puts (0..25).to_a.shuffle.join(' ')"`
NBRCOUP=$(./push_swap $ARG | wc -l);
printf "\n"
echo " Result : " $NBRCOUP
TEST=$(./push_swap $ARG | ./checker $ARG);
if [ $TEST = "OK" ]
then
    printf "\033[0;32m OK \033[0;0m\n"
    
else
    printf "\033[0;31m KO \033[0;0m\n"
fi;


printf "\n Teste  -25 .. 25 "
ARG=`ruby -e "puts (-25..25).to_a.shuffle.join(' ')"`
NBRCOUP=$(./push_swap $ARG | wc -l);
printf "\n"
echo " Result : " $NBRCOUP
TEST=$(./push_swap $ARG | ./checker $ARG);
if [ $TEST = "OK" ]
then
    printf "\033[0;32m OK \033[0;0m\n"
    
else
    printf "\033[0;31m KO \033[0;0m\n"
fi;


printf "\n Teste  0 .. 80 "
ARG=`ruby -e "puts (0..80).to_a.shuffle.join(' ')"`
NBRCOUP=$(./push_swap $ARG | wc -l);
printf "\n"
echo " Result : " $NBRCOUP
TEST=$(./push_swap $ARG | ./checker $ARG);
if [ $TEST = "OK" ]
then
    printf "\033[0;32m OK \033[0;0m\n"
    
else
    printf "\033[0;31m KO \033[0;0m\n"
fi;

printf "\n Teste  -50 .. 50 "
ARG=`ruby -e "puts (-50..50).to_a.shuffle.join(' ')"`
NBRCOUP=$(./push_swap $ARG | wc -l);
printf "\n"
echo " Result : " $NBRCOUP
TEST=$(./push_swap $ARG | ./checker $ARG);
if [ $TEST = "OK" ]
then
    printf "\033[0;32m OK \033[0;0m\n"
    
else
    printf "\033[0;31m KO \033[0;0m\n"
fi;

printf "\n Teste  -250 .. 250 "
ARG=`ruby -e "puts (-250..250).to_a.shuffle.join(' ')"`
NBRCOUP=$(./push_swap $ARG | wc -l);
printf "\n"
echo " Result : " $NBRCOUP
TEST=$(./push_swap $ARG | ./checker $ARG);
if [ $TEST = "OK" ]
then
    printf "\033[0;32m OK \033[0;0m\n"
    
else
    printf "\033[0;31m KO \033[0;0m\n"
fi;

printf "\n Teste  -550 .. 550 "
ARG=`ruby -e "puts (-550..550).to_a.shuffle.join(' ')"`
NBRCOUP=$(./push_swap $ARG | wc -l);
printf "\n"
echo " Result : " $NBRCOUP
TEST=$(./push_swap $ARG | ./checker $ARG);
if [ $TEST = "OK" ]
then
    printf "\033[0;32m OK \033[0;0m\n"
    
else
    printf "\033[0;31m KO \033[0;0m\n"
fi;

printf "\n Teste  -1250 .. 1250 "
ARG=`ruby -e "puts (-1250..1250).to_a.shuffle.join(' ')"`
NBRCOUP=$(./push_swap $ARG | wc -l);
printf "\n"
echo " Result : " $NBRCOUP
TEST=$(./push_swap $ARG | ./checker $ARG);
if [ $TEST = "OK" ]
then
    printf "\033[0;32m OK \033[0;0m\n"
    
else
    printf "\033[0;31m KO \033[0;0m\n"
fi;


printf "\n Teste  0 .. 1500 "
ARG=`ruby -e "puts (0..1500).to_a.shuffle.join(' ')"`
NBRCOUP=$(./push_swap $ARG | wc -l);
printf "\n"
echo " Result : " $NBRCOUP
TEST=$(./push_swap $ARG | ./checker $ARG);
if [ $TEST = "OK" ]
then
    printf "\033[0;32m OK \033[0;0m\n"
    
else
    printf "\033[0;31m KO \033[0;0m\n"
fi;