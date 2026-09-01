
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
        



        #ifndef ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_RELOADTECHNOLOGY_H
        #define ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_RELOADTECHNOLOGY_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/layer/RTSInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UnitTechnologySingletonFactory.h"

class ReloadTechnology
            : public Object
        : public RTSInterface {

    private: int32_t level= 0;

    private: int32_t maxLevel;

public: ReloadTechnology(int32_t maxLevel);

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

            


        #endif //ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_RELOADTECHNOLOGY_H
