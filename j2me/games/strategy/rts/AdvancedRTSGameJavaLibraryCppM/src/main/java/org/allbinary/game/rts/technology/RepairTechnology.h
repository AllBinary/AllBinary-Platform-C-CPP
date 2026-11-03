
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
        



        #ifndef ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_REPAIRTECHNOLOGY_H
        #define ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_REPAIRTECHNOLOGY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/RTSInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class UnitTechnologySingletonFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RepairTechnology
            : public virtual Object
        , public virtual RTSInterface {

    private: int32_t level= 0;

    private: int32_t maxLevel;

public: RepairTechnology(int32_t maxLevel);

    public: bool isCompleted();

    public: int32_t getPercentComplete();

    public: int32_t getLevel();

    public: int32_t getMaxLevel();

    public: int32_t getCost();

    public: void downgrade();

    public: int32_t getDowngradeCost();

    public: bool isDowngradeable();

    public: int32_t getUpgradeCost();

    public: bool isUpgradeable();

    public: void upgrade();

    public: bool isSelfUpgradeable();

};

            


        #endif //ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_REPAIRTECHNOLOGY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_REPAIRTECHNOLOGY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_REPAIRTECHNOLOGY_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/RTSInterface.h>)
#include <org/allbinary/game/layer/RTSInterface.h>
#endif
#if __has_include("org/allbinary/game/rts/technology/UnitTechnologySingletonFactory.h")
#include "org/allbinary/game/rts/technology/UnitTechnologySingletonFactory.h"
#endif

        #endif
    
