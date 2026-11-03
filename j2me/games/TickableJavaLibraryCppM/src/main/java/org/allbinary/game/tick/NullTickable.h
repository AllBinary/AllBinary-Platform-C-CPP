
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
        



        #ifndef ORG_ALLBINARY_GAME_TICK_NULLTICKABLE_H
        #define ORG_ALLBINARY_GAME_TICK_NULLTICKABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllBinaryLayerManager;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/tick/TickableInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullTickable
            : public virtual Object
        , public virtual TickableInterface {

    private: static NullTickable* SINGLETON_owner();
    private: static NullTickable* SINGLETON;

    public: static NullTickable* getInstance();


            
    public: NullTickable();
        
                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager);

    private: const std::string NAME = "NulLTickable";

    public: std::string getName();

};

            


        #endif //ORG_ALLBINARY_GAME_TICK_NULLTICKABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_TICK_NULLTICKABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_TICK_NULLTICKABLE_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include("org/allbinary/game/tick/TickableInterface.h")
#include "org/allbinary/game/tick/TickableInterface.h"
#endif

        #endif
    
