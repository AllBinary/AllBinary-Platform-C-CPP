
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
class CommandListener;
class Graphics;
class Item;
class GameState;
class GameStateFactory;
class StdUtil;
class StringUtil;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullGameCanvasRunnable
            : public virtual Object
        , public virtual GameCanvasRunnableInterface {

    private: static NullGameCanvasRunnable* NULL_GAME_CANVAS_RUNNABLE_owner();
    public: static NullGameCanvasRunnable* NULL_GAME_CANVAS_RUNNABLE;


            
    public: NullGameCanvasRunnable();
        
    /*protected*/ public: GameStateFactory* gameStateFactory;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVASRUNNABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVASRUNNABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Item.h>)
#include <javax/microedition/lcdui/Item.h>
#endif
#if __has_include(<org/allbinary/game/state/GameState.h>)
#include <org/allbinary/game/state/GameState.h>
#endif
#if __has_include(<org/allbinary/game/state/GameStateFactory.h>)
#include <org/allbinary/game/state/GameStateFactory.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h")
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#endif

        #endif
    
