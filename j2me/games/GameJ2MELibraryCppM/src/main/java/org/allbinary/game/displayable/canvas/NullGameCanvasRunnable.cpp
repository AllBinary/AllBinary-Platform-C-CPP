
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVASRUNNABLE_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVASRUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/NullGameCanvasRunnable.h"
        

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


NullGameCanvasRunnable::NullGameCanvasRunnable() : gameStateFactory(GameStateFactory::getInstance()) {
        }
        auto NullGameCanvasRunnable::NULL_GAME_CANVAS_RUNNABLE_owner() -> NullGameCanvasRunnable* { static std::unique_ptr<NullGameCanvasRunnable> value(new NullGameCanvasRunnable()); return value.get(); }
NullGameCanvasRunnable* NullGameCanvasRunnable::NULL_GAME_CANVAS_RUNNABLE = NullGameCanvasRunnable::NULL_GAME_CANVAS_RUNNABLE_owner();

    auto NullGameCanvasRunnable::getTitle() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto NullGameCanvasRunnable::isInitialized() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto NullGameCanvasRunnable::isPaused() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto NullGameCanvasRunnable::unPause() -> void{
}


    auto NullGameCanvasRunnable::pause() -> void{
}


    auto NullGameCanvasRunnable::isHighScoreSubmitted() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto NullGameCanvasRunnable::setHighScoreSubmitted(bool highScoreSubmitted) -> void{
}


                //@Throws(Exception.constructor)
            
    auto NullGameCanvasRunnable::processGameOver() -> void{
}


    auto NullGameCanvasRunnable::isGameOver() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto NullGameCanvasRunnable::initCommands(CommandListener* cmdListener) -> void{
}


                //@Throws(Exception.constructor)
            
    auto NullGameCanvasRunnable::getCurrentStateHashtable() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StdUtil::getInstance()->NULL_TABLE;
    
}


                //@Throws(Exception.constructor)
            
    auto NullGameCanvasRunnable::getLoadStateHashtable() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StdUtil::getInstance()->NULL_TABLE;
    
}


                //@Throws(Exception.constructor)
            
    auto NullGameCanvasRunnable::setLoadStateHashtable(ABHashtable<Object*, Object*>* hashtable) -> void{
}


    auto NullGameCanvasRunnable::getType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    
}


                //@Throws(Exception.constructor)
            
    auto NullGameCanvasRunnable::setGameState(GameState* gameState) -> void{
}


    auto NullGameCanvasRunnable::getGameState() -> GameState*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameStateFactory->NO_GAME_STATE;
    
}


    auto NullGameCanvasRunnable::itemStateChanged(Item* item) -> void{
}


    auto NullGameCanvasRunnable::paint(Graphics* graphics) -> void{
}


    auto NullGameCanvasRunnable::paintThreed(Graphics* graphics) -> void{
}


    auto NullGameCanvasRunnable::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto NullGameCanvasRunnable::setRunning(bool isRunning) -> void{
}


                //@Throws(Exception.constructor)
            
    auto NullGameCanvasRunnable::setThread(Thread* thread) -> void{
}


    auto NullGameCanvasRunnable::run() -> void{
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVASRUNNABLE_CPP
