
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Thread.h"
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <org/allbinary/game/state/GameState.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameCanvasRunnableInterface.h"

class NullGameCanvasRunnable
            : public Object
        : public GameCanvasRunnableInterface {
        

    public static const NULL_GAME_CANVAS_RUNNABLE: NullGameCanvasRunnable = new NullGameCanvasRunnable();

    const gameStateFactory: GameStateFactory = GameStateFactory.getInstance()!;

    public string getTitle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    
}


    public bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isPaused(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public unPause(){
}


    public pause(){
}


    public bool isHighScoreSubmitted(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public setHighScoreSubmitted(bool highScoreSubmitted){
}


                //@Throws(Exception.constructor)
            
    public processGameOver(){
}


    public bool isGameOver(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public initCommands(CommandListener cmdListener){
}


                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> getCurrentStateHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_TABLE;
    
}


                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> getLoadStateHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_TABLE;
    
}


                //@Throws(Exception.constructor)
            
    public setLoadStateHashtable(Hashtable<any, any> hashtable){
}


    public int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


                //@Throws(Exception.constructor)
            
    public setGameState(GameState gameState){
}


    public GameState getGameState(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameStateFactory!.NO_GAME_STATE;
    
}


    public itemStateChanged(Item item){
}


    public paint(Graphics graphics){
}


    public paintThreed(Graphics graphics){
}


    public bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public setRunning(bool isRunning){
}


                //@Throws(Exception.constructor)
            
    public setThread(Thread thread){
}


    public run(){
}


};

            

