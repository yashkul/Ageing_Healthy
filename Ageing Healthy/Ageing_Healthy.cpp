
#include <bits/stdc++.h>
using namespace std;

class Plans
{
    public:
  
    string online_meditation,online_workout,online_funtime,online_keeping_updated,online_your_opinion,online_Meal;
    string offline_meditation,offline_workout,offline_funtime,offline_keeping_updated,offline_your_opinion,offline_Meal;
    
    void Process_Plan(char gender,char P_D,char blind,char hand,char leg,int age,int medium)
    {
        //Online Plans
        if(P_D == 'n' && age<=60 && medium == 2) 
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            online_workout = "Full-Body Workout, Fat Burning, Keep-Fit Workout, Only Walking";
            online_funtime ="Chess, Myth Or Fact, sudoku, Movie Buff, 2min Solution";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "2 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        if(P_D == 'n' && age>60 && age<=70 && medium == 2) 
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            online_workout = "Full-Body Workout (customized), Fat Burning (customized), Keep-Fit Workout, \n\t\t\t\tOnly Walking, Only SWK(Shoulder,Waist,Knee), HEART(Head-Ear-Abdomen-Rib-Toe) exercise";
            online_funtime ="Chess, Myth Or Fact, sudoku, Movie Buff, 2min Solution, We-Sing";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "3 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        if(P_D == 'n' && age>70 && age<=80 && medium == 2) 
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser, Goal-Peace";
            online_workout = "Full-Body Workout (customized), Keep-Fit Workout, Only Walking, \n\tOnly SWK(Shoulder,Waist,Knee), HEART(Head-Ear-Abdomen-Rib-Toe) exercise, eye exercise";
            online_funtime ="Chess, Myth Or Fact, sudoku, Movie Buff, 2min Solution, We-Sing";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "3 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        if(P_D == 'n' && age>80 && age<=90 && medium == 2) //Yet More to Research
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser, Goal-Peace";
            online_workout = "Full-Body Workout (customized), Keep-Fit Workout, Only Walking, \n\tOnly SWK(Shoulder,Waist,Knee), HEART(Head-Ear-Abdomen-Rib-Toe) exercise, eye exercise";
            online_funtime ="Chess, Myth Or Fact, sudoku, Movie Buff, 2min Solution, We-Sing";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "5 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        if(P_D == 'y' && blind=='y' && hand == 'n' && leg =='n' && age<=60 && medium == 2) 
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            online_workout = "Full-Body Workout (customized), Fat Burning, Keep-Fit Workout, Only Walking";
            online_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Guess-Me";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "2 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        if(P_D == 'y' && hand=='y' && blind =='n' && leg =='n' && age<=60 && medium == 2) 
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            online_workout = "Full-Body Workout (customized), Fat Burning, Keep-Fit Workout, Only Walking";
            online_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Head Ball";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "2 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        if(P_D == 'y' && leg=='y' && blind =='n' && hand =='n'&& age<=60 && medium == 2) 
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            online_workout = "Full-Body Workout (customized), Keep-Fit Workout, Single-leg exercises";
            online_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Hand Ball, arm wrestling";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "2 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        if(P_D == 'y' && blind=='y' && hand=='n' && leg =='n'&& age>60 && age<=70 && medium == 2) 
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            online_workout = "Full-Body Workout (customized), Fat Burning, Keep-Fit Workout,\n\tOnly Walking, Only SWK(Shoulder,Waist,Knee), HEART(Head-Ear-Abdomen-Rib-Toe) exercise";
            online_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Guess-Me";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "2 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        if(P_D == 'y' && hand=='y' && blind =='n' && leg =='n' && age>60 && age<=70 && medium == 2) 
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            online_workout = "Full-Body Workout (customized), Fat Burning, Keep-Fit Workout, Only Walking, Only SWK(Shoulder,Waist,Knee), Body-Ratio exercises";
            online_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Head Ball";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "2 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        if(P_D == 'y' && leg=='y' && blind =='n' && hand =='n' && age>60 && age<=70 && medium == 2) 
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            online_workout = "Full-Body Workout (customized), Keep-Fit Workout, Single-leg exercises, Body-Ratio Exercises, Eye exercise";
            online_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Hand Ball, arm wrestling";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "2 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        if(P_D == 'y' && blind=='y' && hand =='n' && leg =='n' && age>70 && age<=80 && medium == 2) 
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            online_workout = "Full-Body Workout (customized), Keep-Fit Workout,\n\tOnly Walking, Only SWK(Shoulder,Waist,Knee), HEART(Head-Ear-Abdomen-Rib-Toe) exercise";
            online_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Guess-Me";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "2 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        if(P_D == 'y' && hand=='y' && blind =='n' && leg =='n' && age>70 && age<=80 && medium == 2) 
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            online_workout = "Full-Body Workout (customized), Keep-Fit Workout, Only Walking, Only SWK(Shoulder,Waist,Knee), Body-Ratio exercises, Eye exercises";
            online_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "2 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        if(P_D == 'y' && leg=='y' && blind =='n' && hand =='n' && age>70 && age<=80 && medium == 2) 
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            online_workout = "Full-Body Workout (customized), Keep-Fit Workout, Single-leg exercises, Body-Ratio Exercises, Eye exercise";
            online_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Hand Ball, arm wrestling";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "2 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        if(P_D == 'y' && blind=='y' && leg =='n' && hand == 'n' && age>80 && age<=90 && medium == 2) //Yet More to Research 
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            online_workout = "Full-Body Workout (customized), Keep-Fit Workout,\n\tOnly Walking, Only SWK(Shoulder,Waist,Knee), HEART(Head-Ear-Abdomen-Rib-Toe) exercise";
            online_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Guess-Me";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "2 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        if(P_D == 'y' && hand=='y' && blind =='n' && leg =='n'&& age>80 && age<=90 && medium == 2) //Yet More to Research
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            online_workout = "Full-Body Workout (customized), Keep-Fit Workout, Only Walking, Only SWK(Shoulder,Waist,Knee), Body-Ratio exercises, Eye exercises";
            online_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "2 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        if(P_D == 'y' && leg=='y' && blind =='n' && hand =='n'&& age>80 && age<=90 && medium == 2) //Yet More to Research
        {
            online_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            online_workout = "Full-Body Workout (customized), Keep-Fit Workout, Single-leg exercises, Body-Ratio Exercises, Eye exercise";
            online_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Hand Ball, arm wrestling";
            online_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            online_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            online_Meal =  "2 Healthy Item Suugestions with 3 Your Favourite Ones";
            
            cout<<"\n\t Meditation (30 Min):- ["+online_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+online_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+online_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+online_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+online_your_opinion+"]\n";
            cout<<"\n\t Meal Time Suggestion And Reminder (15 Min):- ["+online_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
            
        }
        
        
        //Offline Plans
        if(P_D == 'n' && age<=70 && medium == 1)
        {
            offline_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            offline_workout = "Full-Body Workout (customized), Fat Burning (customized), Keep-Fit Workout, \n\tOnly Walking, Only SWK(Shoulder,Waist,Knee), HEART(Head-Ear-Abdomen-Rib-Toe) exercise";
            offline_funtime ="Chess, Myth Or Fact, sudoku, Movie Buff, 2min Solution, We-Sing";
            offline_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            offline_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            offline_Meal =  "Enjoy Today's Special From Us";
            
            cout<<"\n\t Meditation (30 Min):- ["+offline_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+offline_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+offline_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+offline_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+offline_your_opinion+"]\n";
            cout<<"\n\t Meal Time :- ["+offline_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";   
        }
        if(P_D == 'n' && age>70 && age<=80 && medium == 1)
        {
            offline_meditation = "Full Relaxation, Mind Only, Stress Releaser, Goal-Peace";
            offline_workout = "Full-Body Workout (customized), Fat Burning (customized), Keep-Fit Workout, \n\tOnly Walking, Only SWK(Shoulder,Waist,Knee), HEART(Head-Ear-Abdomen-Rib-Toe) exercise, Eye exercise";
            offline_funtime ="Chess, Myth Or Fact, sudoku, Movie Buff, 2min Solution, We-Sing";
            offline_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            offline_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            offline_Meal =  "Enjoy Today's Special From Us";
            
            cout<<"\n\t Meditation (30 Min):- ["+offline_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+offline_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+offline_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+offline_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+offline_your_opinion+"]\n";
            cout<<"\n\t Meal Time :- ["+offline_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";   
        }
        if(P_D == 'n' && age>80 && age<=90 && medium == 1)//Yet More To Research
        {
            offline_meditation = "Full Relaxation, Mind Only, Stress Releaser, Goal-Peace";
            offline_workout = "Full-Body Workout (customized), Fat Burning (customized), Keep-Fit Workout, \n\tOnly Walking, Only SWK(Shoulder,Waist,Knee), HEART(Head-Ear-Abdomen-Rib-Toe) exercise, Eye exercise";
            offline_funtime ="Chess, Myth Or Fact, sudoku, Movie Buff, 2min Solution, We-Sing";
            offline_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            offline_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            offline_Meal =  "Enjoy Today's Special From Us";
            
            cout<<"\n\t Meditation (30 Min):- ["+offline_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+offline_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+offline_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+offline_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+offline_your_opinion+"]\n";
            cout<<"\n\t Meal Time :- ["+offline_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";   
        }
        if(P_D == 'y' && blind =='y'&& leg =='n' && hand =='n' && age<=70 && medium == 1)
        {
            offline_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            offline_workout = "Full-Body Workout (customized), Fat Burning, Keep-Fit Workout,\n\tOnly Walking, Only SWK(Shoulder,Waist,Knee), HEART(Head-Ear-Abdomen-Rib-Toe) exercise";
            offline_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Guess-Me";
            offline_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            offline_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            offline_Meal =  "Enjoy Today's Special From Us";
            
            cout<<"\n\t Meditation (30 Min):- ["+offline_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+offline_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+offline_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+offline_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+offline_your_opinion+"]\n";
            cout<<"\n\t Meal Time :- ["+offline_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
        }
        if(P_D == 'y' && hand =='y'&& blind =='n' && leg =='n' && age<=70 && medium == 1)
        {
            offline_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            offline_workout = "Full-Body Workout (customized), Fat Burning, Keep-Fit Workout, Only Walking, Only SWK(Shoulder,Waist,Knee), Body-Ratio exercises";
            offline_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Head Ball";
            offline_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            offline_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            offline_Meal =  "Enjoy Today's Special From Us";
            
            cout<<"\n\t Meditation (30 Min):- ["+offline_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+offline_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+offline_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+offline_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+offline_your_opinion+"]\n";
            cout<<"\n\t Meal Time :- ["+offline_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
        }
        if(P_D == 'y' && leg =='y'&& blind =='n' && hand =='n'&& age<=70 && medium == 1)
        {
            offline_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            offline_workout = "Full-Body Workout (customized), Keep-Fit Workout, Single-leg exercises, Body-Ratio Exercises, Eye exercise";
            offline_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Hand Ball, arm wrestling";
            offline_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            offline_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Underst anding Others";
            offline_Meal =  "Enjoy Today's Special From Us";
            
            cout<<"\n\t Meditation (30 Min):- ["+offline_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+offline_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+offline_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+offline_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+offline_your_opinion+"]\n";
            cout<<"\n\t Meal Time :- ["+offline_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
        }
        if(P_D == 'y' && blind =='y'&& hand =='n' && leg =='n' && age>70 && age<=90 && medium == 1)
        {
            offline_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            offline_workout = "Full-Body Workout (customized), Fat Burning, Keep-Fit Workout,\n\tOnly Walking, Only SWK(Shoulder,Waist,Knee), HEART(Head-Ear-Abdomen-Rib-Toe) exercise";
            offline_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Guess-Me";
            offline_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            offline_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            offline_Meal =  "Enjoy Today's Special From Us";
            
            cout<<"\n\t Meditation (30 Min):- ["+offline_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+offline_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+offline_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+offline_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+offline_your_opinion+"]\n";
            cout<<"\n\t Meal Time :- ["+offline_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
        }
        if(P_D == 'y' && hand =='y'&& blind =='n'&& leg =='n'&& age>70 && age<=90 && medium == 1)
        {
            offline_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            offline_workout = "Full-Body Workout (customized), Fat Burning, Keep-Fit Workout, Only Walking, Only SWK(Shoulder,Waist,Knee), Body-Ratio exercises";
            offline_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Head Ball";
            offline_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            offline_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Understanding Others";
            offline_Meal =  "Enjoy Today's Special From Us";
            
            cout<<"\n\t Meditation (30 Min):- ["+offline_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+offline_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+offline_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+offline_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+offline_your_opinion+"]\n";
            cout<<"\n\t Meal Time :- ["+offline_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
        }
        if(P_D == 'y' && leg =='y'&& blind =='n' && hand =='n' && age>70 && age<=90 && medium == 1)
        {
            offline_meditation = "Full Relaxation, Mind Only, Stress Releaser";
            offline_workout = "Full-Body Workout (customized), Keep-Fit Workout, Single-leg exercises, Body-Ratio Exercises, Eye exercise";
            offline_funtime ="Myth Or Fact, Sound Play, Movie Buff, 2min Solution, Hand Ball, arm wrestling";
            offline_keeping_updated = "Todays News, Trending Tech/Topic, Local Progress, Only For You";
            offline_your_opinion = "Healthy Group Disscussions, Vote-on, Let-me-Speak, Underst anding Others";
            offline_Meal =  "Enjoy Today's Special From Us";
            
            cout<<"\n\t Meditation (30 Min):- ["+offline_meditation+"]\n";
            cout<<"\n\t Workout (30 Min):- ["+offline_workout+"]\n";
            cout<<"\n\t A Little Fun (15 Min):- ["+offline_funtime+"]\n";
            cout<<"\n\t Updating Me  (15 Min):- ["+offline_keeping_updated+"]\n";
            cout<<"\n\t Expressing (15 Min):- ["+offline_your_opinion+"]\n";
            cout<<"\n\t Meal Time :- ["+offline_Meal+"]\n";
            cout<<"\n\t\t Enjoy Your Day!! See You\n";
        }
    }
  
};

int main()
{
    Plans obj;
    
    char gender,P_D='n',blind='n',hand='n',leg='n';
    int age,medium;
    
    
    
    cout<<"\n\t**********Welcome To Ageing Healthy**********";
    cout<<"\n\tEnter Gender (Male = m & Female = f) :-\n--->"; //Gender is just taken to adjust Proper Grouping 
    cin>>gender;
    cout<<"\n\tEnter Age :-\n--->";
    cin>>age;
    cout<<"\n\tChoose Joining Medium :-\n\t1)Offline\n\t2)Online\n--->"; 
    cin>>medium;
    cout<<"\n\tDo You Have Any Physical Disability (Yes = y & No = n)?\n--->";
    cin>>P_D;
    if(P_D=='y') // Currently Only One Physical Disability Is Processed
    {
        cout<<"\n\tOk No Worries Please Answer Some Follow-up questions\n\t*Are You Blind (Yes = y & No = n)?\n--->";
        cin>>blind;
        cout<<"\n\t*Are You Lame (Yes = y & No = n)?\n--->";
        cin>>leg;
        cout<<"\n\t*Are You Armless (Yes = y & No = n)?\n--->";
        cin>>hand;
    }
    
    cout<<"\n\t*-*-*-*-*-*Welcome To Your New Community-*-*-*-*-*";
    cout<<"\n\tBased on Your Details The Recommended 2Hr Schedule is :-\n\n";
    obj.Process_Plan(gender,P_D,blind,hand,leg,age,medium);
    
    
    
    return 0;
}
