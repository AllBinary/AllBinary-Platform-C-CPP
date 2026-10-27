
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_BOTTOMLIMITER_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_BOTTOMLIMITER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GameAdState;
class DisplayInfoSingleton;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameAdStateFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BottomLimiter
            : public virtual Object
         {

    private: static BottomLimiter* instance_owner();
    private: static BottomLimiter* instance;

    public: static BottomLimiter* getInstance();

    private: int32_t bottom= 0;

    private: int32_t deltaY= 0;

    private: int32_t lower= 0;

    private: int32_t higher= 0;

private: BottomLimiter();

    public: void init(int32_t lower, int32_t higher);

    public: void update();

    public: int32_t getDeltaY();

    public: int32_t getBottom();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_BOTTOMLIMITER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_BOTTOMLIMITER_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_BOTTOMLIMITER_H_COMPLETE
        #if __has_include(<org/allbinary/game/GameAdState.h>)
#include <org/allbinary/game/GameAdState.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include("org/allbinary/business/advertisement/GameAdStateFactory.h")
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"
#endif

        #endif
    
