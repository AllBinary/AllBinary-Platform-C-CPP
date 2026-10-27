
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_CHARACTERFRICTIONPROPERTIES_H
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_CHARACTERFRICTIONPROPERTIES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/physics/FrictionProperties.h>
class FrictionData;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CharacterFrictionProperties: public FrictionProperties {

    private: int32_t WATER_FRICTION_NOMINATOR;

    private: int32_t AIR_FRICTION_NOMINATOR;

    private: int32_t COLLISION_FRICTION_NOMINATOR;

public: CharacterFrictionProperties(int32_t airFriction, int32_t waterFriction, int32_t collisionFriction);

    public: int32_t getWATER_FRICTION_NOMINATOR();

    public: int32_t getAIR_FRICTION_NOMINATOR();

    public: int32_t getCOLLISION_FRICTION_NOMINATOR();

};

            


        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_CHARACTERFRICTIONPROPERTIES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_CHARACTERFRICTIONPROPERTIES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_CHARACTERFRICTIONPROPERTIES_H_COMPLETE
        #if __has_include(<org/allbinary/game/physics/FrictionProperties.h>)
#include <org/allbinary/game/physics/FrictionProperties.h>
#endif
#if __has_include(<org/allbinary/game/physics/friction/FrictionData.h>)
#include <org/allbinary/game/physics/friction/FrictionData.h>
#endif

        #endif
    
