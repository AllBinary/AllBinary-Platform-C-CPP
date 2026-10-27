
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_MULTIKEYPRESSESAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_MULTIKEYPRESSESAI_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class GameInput;
class AllBinaryLayer;
class AllBinaryLayerManager;
class GameTickTimeDelayHelper;
class GameTickTimeDelayHelperFactory;
class TimeDelayHelper;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/ai/KeyPressesAI.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MultiKeyPressesAI: public KeyPressesAI {

    private: TimeDelayHelper* toggleTimeHelper;

    private: GameTickTimeDelayHelper* gameTickTimeDelayHelper;

public: MultiKeyPressesAI(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager* allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    private: void update();

                //@Throws(Exception.constructor)
            
    public: void toggle();

                //@Throws(Exception.constructor)
            
    public: void disable();

                //@Throws(Exception.constructor)
            
    public: void enable();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_MULTIKEYPRESSESAI_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_MULTIKEYPRESSESAI_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_MULTIKEYPRESSESAI_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/GameInput.h>)
#include <org/allbinary/game/input/GameInput.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelper.h>)
#include <org/allbinary/time/GameTickTimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelperFactory.h>)
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/ag/ai/KeyPressesAI.h")
#include "org/allbinary/game/ag/ai/KeyPressesAI.h"
#endif

        #endif
    
