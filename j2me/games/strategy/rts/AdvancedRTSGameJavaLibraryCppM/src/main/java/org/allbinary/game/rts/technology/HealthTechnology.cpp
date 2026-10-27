
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
        



        #ifndef ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_HEALTHTECHNOLOGY_CPP
        #define ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_HEALTHTECHNOLOGY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/rts/technology/HealthTechnology.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/RTSInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/rts/technology/UnitTechnologySingletonFactory.h"


HealthTechnology::HealthTechnology(int32_t maxLevel){
this->maxLevel= maxLevel;
    
}


    auto HealthTechnology::isCompleted() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto HealthTechnology::getPercentComplete() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto HealthTechnology::getLevel() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->level;
    
}


    auto HealthTechnology::getMaxLevel() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxLevel;
    
}


    auto HealthTechnology::getCost() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto HealthTechnology::downgrade() -> void{
}


    auto HealthTechnology::getDowngradeCost() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto HealthTechnology::isDowngradeable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto HealthTechnology::getUpgradeCost() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (this->getLevel() *this->getLevel()) *1000;
    
}


    auto HealthTechnology::isUpgradeable() -> bool{

                        if(this->getLevel() < this->getMaxLevel())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto HealthTechnology::upgrade() -> void{
this->level++;
    

    UnitTechnologySingletonFactory* unitTechnologySingletonFactory = UnitTechnologySingletonFactory::getInstance();;
    
unitTechnologySingletonFactory->setHealth(unitTechnologySingletonFactory->getHealth() +(this->getLevel() *100));
    
}


    auto HealthTechnology::isSelfUpgradeable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}




        #endif //ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_HEALTHTECHNOLOGY_CPP
