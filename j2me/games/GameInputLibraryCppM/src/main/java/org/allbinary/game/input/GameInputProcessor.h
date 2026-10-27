
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class GameKeyEvent;
class AllBinaryLayerManager;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameInputProcessor
            : public virtual Object
         {

    private: static GameInputProcessor* instance_owner();
    private: static GameInputProcessor* instance;

    public: static GameInputProcessor* getInstance();

/*protected*/ public: GameInputProcessor();

                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void processReleasedEvent(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void processAnalog(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t analogValue);

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager* allbinaryLayerManager, int32_t keyAsInteger);

                //@Throws(Exception.constructor)
            
    public: void processReleased(AllBinaryLayerManager* allbinaryLayerManager, int32_t keyAsInteger);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif

        #endif
    
