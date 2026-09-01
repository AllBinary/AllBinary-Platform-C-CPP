
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/ItemStateListener.h>

      
#include <org/allbinary/game/state/GameStateCompositeInterface.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/thread/RunnableInterface.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameCanvasRunnableInterface: public RunnableInterface, public PaintableInterface, public ItemStateListener, public GameStateCompositeInterface {

    std::string getTitle()

    bool isInitialized()

    bool isPaused()

    void unPause()

    void pause()

    bool isHighScoreSubmitted()

                //@Throws(Exception.constructor)
            
    void setHighScoreSubmitted(bool highScoreSubmitted)

                //@Throws(Exception.constructor)
            
    void processGameOver()

    bool isGameOver()

    void initCommands(CommandListener cmdListener)

                //@Throws(Exception.constructor)
            
    Hashtable<any, any> getCurrentStateHashtable()

                //@Throws(Exception.constructor)
            
    Hashtable<any, any> getLoadStateHashtable()

                //@Throws(Exception.constructor)
            
    void setLoadStateHashtable(Hashtable<any, any> hashtable)

    int32_t getType()

};

            

