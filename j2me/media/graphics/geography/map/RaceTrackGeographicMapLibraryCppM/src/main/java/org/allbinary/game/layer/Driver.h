
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_DRIVER_H
        #define ORG_ALLBINARY_GAME_LAYER_DRIVER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class SmallIntegerSingletonFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Aggression;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Driver
            : public virtual Object
         {

    private: static Driver* NULL_DRIVER_owner();
    public: static Driver* NULL_DRIVER;

    private: int32_t turnSpeed;

    private: int32_t trackPathSelectionSkill;

    private: Aggression* aggression;

public: Driver(int32_t turnSpeed, int32_t trackPathSelectionSkill, Aggression* aggression);

    public: int32_t getTurnSpeed();

    public: void setTurnSpeed(int32_t turnSpeed);

    public: int32_t getTrackPathSelectionSkill();

    public: void setTrackPathSelectionSkill(int32_t trackPathSelectionSkill);

    public: Aggression* getAggression();

    public: void setAggression(Aggression* aggression);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_DRIVER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_DRIVER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_DRIVER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include("org/allbinary/game/layer/Aggression.h")
#include "org/allbinary/game/layer/Aggression.h"
#endif

        #endif
    
