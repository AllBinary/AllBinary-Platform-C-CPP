
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
        



        #ifndef ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_DAMAGETECHNOLOGY_CPP
        #define ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_DAMAGETECHNOLOGY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/rts/technology/DamageTechnology.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/RTSInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/rts/technology/UnitTechnologySingletonFactory.h"


DamageTechnology::DamageTechnology(int32_t maxLevel){
this->maxLevel= maxLevel;
    
}


    auto DamageTechnology::isCompleted() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto DamageTechnology::getPercentComplete() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto DamageTechnology::getLevel() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->level;
    
}


    auto DamageTechnology::getMaxLevel() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxLevel;
    
}


    auto DamageTechnology::getCost() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto DamageTechnology::downgrade() -> void{
}


    auto DamageTechnology::getDowngradeCost() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto DamageTechnology::isDowngradeable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto DamageTechnology::getUpgradeCost() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return (this->getLevel() *this->getLevel()) *1000;
    
}


    auto DamageTechnology::isUpgradeable() -> bool{

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


    auto DamageTechnology::upgrade() -> void{
this->level++;
    

    UnitTechnologySingletonFactory* unitTechnologySingletonFactory = UnitTechnologySingletonFactory::getInstance();;
    
unitTechnologySingletonFactory->setDamage(unitTechnologySingletonFactory->getDamage() +(this->getLevel() *100));
    
}


    auto DamageTechnology::isSelfUpgradeable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}




        #endif //ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_DAMAGETECHNOLOGY_CPP
