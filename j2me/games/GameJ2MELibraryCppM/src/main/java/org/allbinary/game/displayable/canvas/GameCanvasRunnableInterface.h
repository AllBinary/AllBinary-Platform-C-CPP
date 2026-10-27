
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASRUNNABLEINTERFACE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASRUNNABLEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class CommandListener;
#include <javax/microedition/lcdui/ItemStateListener.h>
#include <org/allbinary/game/state/GameStateCompositeInterface.h>
#include <org/allbinary/graphics/paint/PaintableInterface.h>
#include <org/allbinary/thread/RunnableInterface.h>
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameCanvasRunnableInterface: public RunnableInterface, public PaintableInterface, public ItemStateListener, public GameStateCompositeInterface {

    public: virtual std::string getTitle() = 0;

    public: virtual bool isInitialized() = 0;

    public: virtual bool isPaused() = 0;

    public: virtual void unPause() = 0;

    public: virtual void pause() = 0;

    public: virtual bool isHighScoreSubmitted() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setHighScoreSubmitted(bool highScoreSubmitted) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void processGameOver() = 0;

    public: virtual bool isGameOver() = 0;

    public: virtual void initCommands(CommandListener* cmdListener) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual ABHashtable<Object*, Object*>* getCurrentStateHashtable() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual ABHashtable<Object*, Object*>* getLoadStateHashtable() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setLoadStateHashtable(ABHashtable<Object*, Object*>* hashtable) = 0;

    public: virtual int32_t getType() = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASRUNNABLEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASRUNNABLEINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASRUNNABLEINTERFACE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/ItemStateListener.h>)
#include <javax/microedition/lcdui/ItemStateListener.h>
#endif
#if __has_include(<org/allbinary/game/state/GameStateCompositeInterface.h>)
#include <org/allbinary/game/state/GameStateCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/PaintableInterface.h>)
#include <org/allbinary/graphics/paint/PaintableInterface.h>
#endif
#if __has_include(<org/allbinary/thread/RunnableInterface.h>)
#include <org/allbinary/thread/RunnableInterface.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif

        #endif
    
