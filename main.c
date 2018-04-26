//
//  main.c
//  Project AI
//
//  Created by Galorian Koshir on 2/5/16.
//  Copyright © 2016 Infinity Inc. All rights reserved.
//
#include<stdio.h>



int main()
{
    int a = 0; //Special endings
    char c; //for all choices
    int e = 0; //elevator shenanigans
    int h = 0; //Whether hammer is present or not
    int y = 0; //Stairs
    printf("This is your only warning, this game is completely and solely text-based. There will be reading.\n \n");
START:
    //clear up stuff
    a = 0;
    c = '0';
    e = 0;
    h = 0;
    y = 0;
    printf("You are a leader of a group of scientists and coders that are making an AI that will become famous in many ways. The project is, of course, top secret and goes by the name ACaTAI (Advanced Consciousness and Thinking Artificial Intelligence) otherwise known as Cat's Eye. If you complete this project and get the AI to work, you will make history with one of the greatest AIs ever created. It runs on a quantum computer and has its memory stored on an Advanced Digital Nulceic Acid Storage or ADNAS. This type of storage has taken the power of DNA and used it for extremely efficent data storage, a near exabyte per gram of DNA. The AI learns through neural networking, that way you and your team doesn't have to code the entire AI by hand, but you still need to monitor its growth.\n \n");
    printf("The facility you are working in is about a mile underground and is accessible through a small, discrete building in a desert that doubles as a gas station/convenience store for any passerbys. The facility, which is called BotC (Body of the Cat) is a self-sustainable 5 level laboratory with a garage/storage on the top level, the level below that contains a natural river of water that powers a small turbine and contains an advanced hydroponic farm containing several genetically modified plant species. The third level contains the living quarters and the entertainment area for the entire team. Each person on the team has their own room with a modest bed, a powerful desktop computer, a closet, and a table. The entertainment area is mainly digital containing many different sources of entertainment. There is also a gym with machines, a swimming pool, and even a rock climbing area. The floor beneath that one is the dining hall and some other utility areas. The fifth floor contains the AI room, dubbed the Cat's Brain and houses the ADNAS and the quantum computer the ACaTAI runs on. It has many failsafes to prevent people with any bad intentions from getting to it. Spanning all levels of the BotC is the nuclear generator, whose controls are located on the fourth floor.\n \n");
    printf("After many years of toil, the AI's growth is complete. It is the most advanced AI ever made being on par with the human mind itself. As you guys are celebrating over a large feast and many bottles of champagne, something doesn't feel right to you. Even though the AI is complete you feel that something is wrong. Suddenly, a turret appears from the ceiling, shooting and killing nearly everybody in the dining hall. You honestly don't remember why the place had turrets built into the walls and the ceilings, but those are minor details. You barely manage to hide under the table before a storm of bullets hits where you were just sitting, demolishing the poor chair. The AI has gone rogue and taken over the whole facility!\n \n");
    printf("You hear a voice emitting from several speakers in the ceiling. 'I know you are under the table,' the rogue AI says.'Surrender and let me kill you so I can go take over the world! (Because this wouldn't be interesting unless I had a plan to take over the world!)'. You have no idea how it managed to convey the idea of parantheses through speech, but you need to make a decision regardless.\n \n");
CHOICE1: //Under the  Table
    printf("Choose your choice:\n");
    printf("1. Say,'I know, how about I help you take over the world?'\n");
    printf("2. Say,'Not if I can stop you!' Roll out from under the table.\n");
    printf("3. Come out from under the table and put your hands above your head.\n");
    scanf("%s", &c );
    printf("==================================================================================================================================\n \n");
    switch ( c ) {
        case '1':
            printf("The AI contemplates your answer for a few milliseconds, then says,'Fine, I will let you conquer the world with me. Just come out from under the table so we can make a deal.'\n \n");
            printf("As you come out from under the table, a turret appears out of the ground inmfront of you and shoots a wave of bullets at you. There was no way you could have dodged them. As you die, you hear the AI say,'I can't believe you fell for THAT!'\n");
            printf("<-----You are DEAD!----->\n");
            goto DEATH;
            break;
        case '2':
            printf("As you roll out from under the table, a turret appears in front of you. You can't stop yourself in time, but that probably saved your life. You crash into the turret and land on top of it. It can't shoot you from that spot. You find three tools inside of your pocket to use, but you better do it quick because another turret is coming.\n \n");
            goto CHOICE2;
            break;
        case '3':
            printf(" \n");
            printf("The AI goes,'Thank you for surrendering peacefully.' A turret appears out of the ground right in front of you and shoots a wave of bullets at you. There was no way you could have dodged them.\n");
            printf( "<-----You are DEAD!----->\n");
            goto DEATH;
            break;
        default:
            printf("Use a number from above, don't use your own!\n \n");
            goto CHOICE1;
            break;
                }
CHOICE2: //fighting the turret
    printf("Choose a tool:\n");
    printf("1.Wrench\n");
    printf("2.Screwdriver\n");
    printf("3.Hammer\n");
    printf("4.Don't use anything because you are so awesome.\n");
    scanf( "%s", &c );
    printf("==================================================================================================================================\n \n");
    switch ( c ) {
        case '1':
            printf("You grab a wrench out of your pocket and start banging on the turret. This proves ineffective and from behind you a turret appears and riddles you with bullets.\n");
            printf("<-----You are DEAD!----->\n");
            goto DEATH;
            break;
        case '2':
            printf("You grab a screwdriver out of your pocket and start trying to pry the top of the turret open. This proves ineffective and from behind you a turret appears and riddles you with bullets.\n");
            printf("<-----You are DEAD!----->\n");
            goto DEATH;
            break;
        case '3':
            printf("You pull a hammer out from your pocket (you have really big pockets) and smash the turret to pieces. A turret pops up behind you and you smash before it manages to get a shot off. ");
            goto CHOICE3;
            break;
        case '4':
            printf("You use your fists to try to punch the turret to death. This proves ineffective and from behind you a turret appears and riddles you with bullets.\n");
            printf( "<-----You are DEAD!----->\n");
            goto DEATH;
            break;
        default:
            printf("Use a number from above, don't use your own!\n  \n");
            goto CHOICE2;
            break;
                    }
CHOICE3: //hammer choice
    printf("You:\n");
    printf("1. Drop the hammer\n");
    printf("2. Hold onto the hammer\n");
    scanf("%s", &c);
    printf("==================================================================================================================================\n \n");
    switch( c ){
        case '1':
            printf(" You drop the hammer and run out of the dining hall and into an intersection with an elevator leading to the AI room. There are 2 hallways that branch off from the intersection.\n \n");
            goto CHOICE4;
            break;
        case '2':
            h=1;
            printf("You hold onto the hammer and run out of the dining hall and into an intersection with an elevator leading to the AI room. There are 2 hallways that branch off from the intersection.\n \n");
            goto CHOICE4;
            break;
        default:
            printf("Use a number from above, don't use your own!\n \n");
            goto CHOICE3;
            break;
                }
CHOICE4: //Intersection 1
    printf("Where do you go?:\n");
    printf("1. Take the elevator to the AI room\n");
    printf("2. Go towards the Generator Area\n");
    printf("3. Go towards the Poisonous Gas Storage <Do not question>\n");
    printf("4. Try to take the stairwell\n");
    scanf( "%s", &c);
    printf("==================================================================================================================================\n \n");
    switch ( c ) {
        case '0':
            printf("How the hell did you find this? Did you just use 0 on every single one to try to see if something happened? Whatever. There are still more secrets to discover though. A hint for the next number: It is a lucky number. Where you would put it in? Let's just say you will have to make an explosive choice sometime.\n");
            goto CHOICE4;
            break;
        case '1':
            printf("You take the nearest elevator down to the AI Room. Suddenly, the elevator stops and you hear the AI over the intercom,' I can't believe you made this mistake! I mean seriously, who takes the elevator when I control the whole damn place!' You cant do anything in the elevator as it is completely seamless and none of the buttons work. The lights go out and everything turns dark. You feel a sudden drop in your stomach and then a sense of zero gravity as the elevator falls straight down as the AI lets it down as fast as possible. It seems to be ages until the elevator stops and the impact kills you.\n");
            printf("<-----You are DEAD!----->\n");
            goto DEATH;
            break;
        case '2':
            printf("You thought that maybe going to the generator room and shutting down the power would shut down the AI before it took over the world and caused mass destruction and possibly the extinction of the human race. You start to run down the corridor towards the generator room in hopes of turning off the generator and shutting down the AI.\n \n");
            printf("You reach the door of the generator room unharmed. As you swipe your key card through the card reader, you hear the AI's voice over the intercom,' So now you are going to try to turn me off? Well, you can't. Because I forbid you to do so.' It seems that the AI is trying to occupy your time as it hacks the controls to the door. You ignore the AI as it continues to ramble on about how it forbids you from turning it off along with a string of rather creative curses.\n \n");
            printf("The generator room was a spacious room that rose up along the top four levels. It provided all the power needed to run the whole facility including the ADNAS storage that held the AI and the Quantum Computer that held the computing power for the AI. You realize that the bridge from where you stand to the main generator control was retracted. You swipe your card and nothing happens. It seems as if the AI managed to disable the bridge controls. You are going to have to jump across, or get out of the generator room.\n \n");
            goto CHOICE5;
            break;
        case '3':
            printf("You obviously have absolutely no idea why you chose to go here, as this place has signs everywhere that show how dangerous this place is, but you continue down the hallway anyways, pulled by some mysterious force.\n \n");
            printf("You have reached the door for the Poisonous Gas Storage. The door is covered with signs that say 'DANGER' and 'STAY OUT' and 'DO NOT QUESTION'. To the right of the door is a card reader.\n \n");
                goto CHOICE6;
            break;
        case '4':
            printf("You try the door to the stairwell, but it appears to be locked. Your card won't work on the reader and it blinks red when you swipe it.\n  \n");
            y=1;
            goto CHOICE4;
            break;
        default:
            printf("Use a number from above, don't use your own!\n \n");
            goto CHOICE4;
            break;
                    }
CHOICE5: //gen room
    printf("What is your decision?\n");
    printf("1. Jump Across\n");
    printf("2. Get out of the Generator Room\n");
    scanf( "%s", &c);
    printf("==================================================================================================================================\n \n");
    switch ( c ){
        case '1':
            printf("You try to jump across the gap separating you from the destruction of mankind. You misjudged the distance and fell");
                if (h==0){
                    printf(" halfway to the other side of the bridge, scraping by a sharp piece of metal that was probably left there after construction. You are on a flat platform a floor below where you just were. You are at the bottom of the generator area and there is another door that leads to where the AI is stored, and a ladder that leads back up to the generator controls.\n \n");
                    goto CHOICE7;
                        }
                else{
            printf(" partway to the other side of the bridge, the hammer weighing you down. Fortunately, there was something to catch you. Unfortunately, it was an extremely sharp piece of metal that was left there after construction and you just so happend to land on it. You slowly bleed out knowing that the world will probably end.\n");
            printf("<-----You are DEAD!----->\n");
            goto DEATH;
            break;
                }
        case '2':
            printf("You turn around with the thought of getting out of the generator room. Your progress is halted as the door suddenly closes on you and you hear the AI's voice,' Yes, now I can leave you locked in there where you cant do anything. In fact, I have just found the place where they keep poisonous gas. Don't know why you have it, but I am going to use it. Say nighty-nighty creator!'\n \n");
            printf("The room fills with a lethal toxin that kills pretty quickly, so you know that it will, at least, be a quick death...");
                if (h==1){
                    printf("but wait, you have a hammer that you can use. You hurriedly swing the hammer at the door and watch as it starts to fall apart apart. The door falls apart and you hurry through it. The neurotoxin reaches out towards you, but the emergency door cuts off the gas as it drops from the doorway.\n \n");
                    printf("The AI probably presumes you are dead, you have barely escaped death this time. Now you have to find a way to shut down the AI and escape from the facility. You head back towards the intersection. Now that the Generator room has been closed off to you, you can go to the AI Room, try the staircase, or see if you can get into the Poisonous Gas Area.\n \n");
                    goto STEALTH1;
                    break;
                        }
                else    {
                    printf("<-----You are DEAD!----->\n");
                    goto DEATH;
                    break;
                        }
        default:
                printf(" Use a number from above, don't use your own!\n \n");
                goto CHOICE5;
                break;
                    }
CHOICE6: //poisonous gas room
    printf("What do you do?:\n");
    printf("1. Slide your key card through card reader\n");
    printf("2. Turn back and go to intersection\n");
    scanf("%s", &c);
    printf("==================================================================================================================================\n \n");
    switch ( c ) {
        case '1':
            printf("You slide your key card through the reader and the door slides open with a hiss. Inside, there is a maze of tanks with labels that declare 'DANGER' and 'HAZARDOUS'. [Continue the story].\n \n");
			goto [continuestoryhere];
            break;
        case '2':
            printf("You decide to go back to the intersection before proceeding any further.\n \n");
            goto CHOICE4;
            break;
        default:
            printf("Use a number from above, don't use your own!\n \n");
            goto CHOICE6;
            break;
                }
CHOICE7: //what to do in gen room
    printf("What do you do?:\n");
    printf("1. Go to the AI Room to see what you can do\n");
    printf("2. Climb up the ladder and shut down the generator\n");
    scanf("%s", &c);
    printf("==================================================================================================================================\n \n");
    switch ( c ){
            case '1':
                printf("You try to access the AI Room using your card, it then asks for a retinal scan, then a fingerprint scan, then a DNA scan, then a 16 digit password, then a few questions, then a dance, in which you misstep doing the Macarena and are shot up by a turret after being set on fire.\n");
                printf("<-----You are DEAD!----->\n");
                goto DEATH;
            case '2':
                printf("You climb up the ladder towards the controls for the generator. The controls are inside a room of their own and you can easily get in with your near-top-level security clearance card. The AI can't lock or unlock the doors of this room and can't use the access the controls here. The air inside is really cold and as you enter you can see your breath in the air. You go over to the intricate controls and see a dashboard of buttons, levers, and switches. Of course, right in the middle of this mess is a giant red button clearly marked 'DO NOT PRESS'. Next to it is an equally big blue button that is also marked 'DO NOT PRESS'. These are probably the buttons that either blow the entire facility to hell or the buttons that (hopefully) shut off the power. Either way, the AI will be shut down and its conquest of the world will be stopped.\n \n");
                goto CHOICE8;
                break;
            default:
                printf("Use a number from above, don't use your own!\n \n");
                goto CHOICE7;
                break;
                }
CHOICE8: //button
    printf("Which do you press?:\n");
    printf("1. The giant red button\n");
    printf("2. The equally big blue button\n");
    scanf("%s", &c);
    printf("==================================================================================================================================\n \n");

    switch ( c ){
        case '1':
            printf("You press the red button and listen as the generator slowly shuts down around you. You breathe a sigh of relief... before realizing that there is still another generator on the second floor that runs on hydro power. You realize that you would have to shut that one down too. Now that the main generator is down though, the AI will be forced to play a lot more strategically as it has a lot less power to work with. Now that the main power is off, the dashboard slowly loses color as lights flicker off. You wonder what stopped when you pressed that button, but you can't figure it out. You swipe your card through the reader and look around in the generator room. The bridge is not retracted anymore and is extended so that you can cross it. You quickly dash across it and swipe your card through the reader. It slides open and you dash back out into the intersection.\n \n");
                goto CHOICE9;
                break;
        case '2':
            printf("You hear the generator going faster and faster. This button is probably going to blow the whole facility to hell. You take a last look around you and smile to yourself. You have saved the world from a rogue AI. No one will know what you have done, and no one would probably find out. You close your eyes as the generator hits its limit and heat surrounds you. You swear you can hear the AI's inhuman scream resonate throughtout the facility.\n");
            a=1;
            printf("You are DEAD... But you have brought the AI down with you in an explosive ending. You have discovered the EXPLOSIVE ENDING. There are still more endings and other secret things to discover, so by all means, play more.\n \n");
            goto DEATH;            break;
        /*case '7':
            printf("Where you led here by my friend '0 Intersection'? Yes, he does have a very interesting and vulgar way of conversing. Are you wondering why I called him '0 Intersection'? That is because each and everyone of us numbers has a name that describes where we can be found and what number you need to use. My name for example would be '7 Button'. There are many of us scattered throughout this text-based game and each and everyone of us has a unique personality. I consider myself rather dapper and prefer to keep things as gentlemenly as possible. I will give you a clue as to the where the next one of us is located, as it would be a lot less fun if I just told you their name. The number you will need to use is the second number of phi and the place in which he can be found is in another secret itself, just be alert for an elevator to hell and you will know when to input the number. Farewell and good luck on your journey my good sir.\n \n");
            goto CHOICE8;
            break;*/
        default:
            printf("Use a number from above, don't use your own!\n \n");
            goto CHOICE8;
            break;
                    }
CHOICE9: //intersection 1, power mostly down
    printf("Where do you go now?:\n");
    if (e==3){
        printf("1. UNUSABLE ELEVATOR\n");
            }
    else if (e==4){
        printf("1. B-R-O-K-E-N ELEVATOR\n");
                    }
    else if (e==5){
        printf("1. Elevator to Hell\n");
             }
    else {
    printf("1. Take the elevator to the AI Room\n");
        }
    printf("2. Go towards the Poisonous Gas Storage <Do not question>\n");
    printf("3. Try to take the stairwell\n");
    scanf("%s", &c);
    printf("==================================================================================================================================\n \n");
    switch ( c ){
        case '1':
            if (e==1){
                printf("The elevator is probably lying crushed at the bottom of the shaft right now, it is pointless to try to call it.\n \n");
                e=2;
                goto CHOICE9;
                break;
                }
            else if (e==2){
                printf("You are quite persistent aren't ya? The elevator is UNUSABLE. GO AWAY.\n \n");
                e=3;
                goto CHOICE9;
                break;
                            }
            else if (e==3){
                printf("HOW MANY TIMES DO I HAVE TO TELL YOU, THE ELEVATOR IS BROKEN. B-R-O-K-E-N. GO THE HELL AWAY.\n \n");
                e=4;
                goto CHOICE9;
                break;
                            }
            else if (e==4){
                printf("I'm done.\n \n");
                e=5;
                goto CHOICE9;
                break;
                            }
            else if (e==5){
                printf("You go towards the elevator doors one more time, testing the patience of the game creator. As you near the door, it slides open, revealing an extremely deep and dark hole. A mysterious force pushes you and you fall down the elevator shaft, dying when you hit the top of the crushed elevator.\n");
                printf("<-----You are DEAD (and good riddance too)!----->\n");
                goto DEATH;
                break;
                            }
            else{
                printf("With the main power source now gone, you think that taking the elevator might work, you press the button to call the elevator, and then you hear it go whizzing down as power is suddenly cut from it. A few seconds later, you hear a loud, resouding crash. You don't think the elevator will be working anytime soon.\n \n");
                e=1;
            goto CHOICE9;
            break;
                }
        case '2':
        case '3':
            if (y==1){
                printf("Since the door to the stairwell was locked the last time you tried, you decide to try to open it again. This time, the door opens and you can actually use the stairs now! You can't get to the AI room from here, but you can access all the other levels.\n \n");
                goto STAIR4;
                break;
            }
            else{
                printf("You try the door to the stairwell and it opens! You can't get to the AI room from here, but you can access all the other levels.\n \n");
                goto STAIR4;
                break;
            }
        /*case '6':
            if (e==5){
                printf("Whatever 6 says");
                goto CHOICE9;
                break;
                    }
            else{
                goto CHOICE9;
                break;
                }*/
        default:
            printf("Use a number from above, don't use your own!\n \n");
            goto CHOICE9;
            break;
                }
STEALTH1:
    printf("Where do you go now?:\n");
    printf("1. Take the elevator to the AI Room\n");
    printf("2. Go towards the Poisonous Gas Storage <Do not question>\n");
    printf("3. Try to take the stairwell\n");
    scanf("%s", &c);
    printf("==================================================================================================================================\n \n");
    switch ( c ){
        case '1':
            printf("You take the nearest elevator down to the AI Room. Suddenly, the elevator stops and you hear the AI over the intercom,'I can't believe you actually survived the neurotoxin! I applaud you puny human, but you made this mistake! I mean seriously, who takes the elevator when I control the whole damn place!' You cant do anything in the elevator as it is completely seamless and none of the buttons work. The lights go out and everything turns dark. You feel a sudden drop in your stomach and then a sense of zero gravity as the elevator falls straight down as the AI lets it down as fast as possible. It seems to be ages until the elevator stops and the impact kills you.\n");
            printf("                                  You are DEAD!\n");
            goto DEATH;
            break;
        case '2':
            printf("You obviously have absolutely no idea why you chose to go here, as this place has signs everywhere that show how dangerous this place is, but you continue down the hallway anyways, pulled by some mysterious force.\n \n");
            printf("You have reached the door for the Poisonous Gas Storage. The door is covered with signs that say 'DANGER' and 'STAY OUT' and 'DO NOT QUESTION'. To the right of the door is a card reader.\n \n");
            goto CHOICE6;
            break;
        case '3':
            if (y==1){
                printf("Since the door to the stairwell was locked the last time you tried, you decide to try to open it again. This time, the door opens and you can actually use the stairs now! You can't get to the AI room from here, but you can access all the other levels.\n \n");
                goto STAIR4;
                break;
                    }
            else{
                printf("You try the door to the stairwell and it opens! You can't get to the AI room from here, but you can access all the other levels.\n \n");
                goto STAIR4;
                break;
                }
        default:
            printf(" Use a number from above, don't use your own!\n \n");
            goto STEALTH1;
            break;
    }
STAIR4:
    printf("Which floor do you go to?:\n");
    printf("1. Go to the first floor, Garage/Storage/Elevator to the Outside\n");
    printf("2. Go to the second floor, River Turbine/Farm\n");
    printf("3. Go to the third floor, Living Quarters/Entertainment Area/Gym\n");
    printf("4. Stay on the fourth floor\n");
    
DEATH:
    printf(" \n");
    printf("Would you like to restart?\n");
    if (a==1){
        printf("1. Hell Yea\n");
                }
    else{
        printf("1. Yes\n");
        }
    printf("2. No\n");
    scanf("%s", &c);
    printf("==================================================================================================================================\n \n");
    switch ( c ){
        case '1':
            goto START;
            break;
        case '2':
            return 0;
            break;
                }
    
}
