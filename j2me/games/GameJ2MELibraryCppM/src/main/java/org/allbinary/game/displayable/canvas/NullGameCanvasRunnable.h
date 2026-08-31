
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVASRUNNABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVASRUNNABLE_H

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

    public string getTitle();

    public bool isInitialized();

    public bool isPaused();

    public unPause();

    public pause();

    public bool isHighScoreSubmitted();

                //@Throws(Exception.constructor)
            
    public setHighScoreSubmitted(bool highScoreSubmitted);

                //@Throws(Exception.constructor)
            
    public processGameOver();

    public bool isGameOver();

    public initCommands(CommandListener cmdListener);

                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> getCurrentStateHashtable();

                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> getLoadStateHashtable();

                //@Throws(Exception.constructor)
            
    public setLoadStateHashtable(Hashtable<any, any> hashtable);

    public int32_t getType();

                //@Throws(Exception.constructor)
            
    public setGameState(GameState gameState);

    public GameState getGameState();

    public itemStateChanged(Item item);

    public paint(Graphics graphics);

    public paintThreed(Graphics graphics);

    public bool isRunning();

    public setRunning(bool isRunning);

                //@Throws(Exception.constructor)
            
    public setThread(Thread thread);

    public run();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVASRUNNABLE_H
