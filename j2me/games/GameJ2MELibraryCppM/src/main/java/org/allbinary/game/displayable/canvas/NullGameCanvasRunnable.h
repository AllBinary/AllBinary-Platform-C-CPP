
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <org/allbinary/game/state/GameState.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"

class NullGameCanvasRunnable
            : public Object
        , public GameCanvasRunnableInterface {

    public: static NullGameCanvasRunnable* NULL_GAME_CANVAS_RUNNABLE() { static std::unique_ptr<NullGameCanvasRunnable> value(new NullGameCanvasRunnable()); return value.get(); }

    protected: GameStateFactory* gameStateFactory = GameStateFactory::getInstance();

    public: std::string getTitle();

    public: bool isInitialized();

    public: bool isPaused();

    public: void unPause();

    public: void pause();

    public: bool isHighScoreSubmitted();

                //@Throws(Exception.constructor)
            
    public: void setHighScoreSubmitted(bool highScoreSubmitted);

                //@Throws(Exception.constructor)
            
    public: void processGameOver();

    public: bool isGameOver();

    public: void initCommands(CommandListener* cmdListener);

                //@Throws(Exception.constructor)
            
    public: ABHashtable<Object*, Object*>* getCurrentStateHashtable();

                //@Throws(Exception.constructor)
            
    public: ABHashtable<Object*, Object*>* getLoadStateHashtable();

                //@Throws(Exception.constructor)
            
    public: void setLoadStateHashtable(ABHashtable<Object*, Object*>* hashtable);

    public: int32_t getType();

                //@Throws(Exception.constructor)
            
    public: void setGameState(GameState* gameState);

    public: GameState* getGameState();

    public: void itemStateChanged(Item* item);

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

    public: bool isRunning();

    public: void setRunning(bool isRunning);

                //@Throws(Exception.constructor)
            
    public: void setThread(Thread* thread);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVASRUNNABLE_H
