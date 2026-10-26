
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSOR_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInputProcessor
            : public Object
         {

    private: static GameInputProcessor instance() { return GameInputProcessor(); }

    public: static GameInputProcessor getInstance();

protected: GameInputProcessor();

                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void processReleasedEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void processAnalog(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent, int32_t analogValue);

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager allbinaryLayerManager, Integer keyAsInteger);

                //@Throws(Exception.constructor)
            
    public: void processReleased(AllBinaryLayerManager allbinaryLayerManager, Integer keyAsInteger);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSOR_H
