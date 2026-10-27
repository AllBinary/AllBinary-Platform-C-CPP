
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
        



        #ifndef ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_RELOADTECHNOLOGY_CPP
        #define ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_RELOADTECHNOLOGY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/rts/technology/ReloadTechnology.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/RTSInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/rts/technology/UnitTechnologySingletonFactory.h"


ReloadTechnology::ReloadTechnology(int32_t maxLevel){
this->maxLevel= maxLevel;
    
}


    auto ReloadTechnology::isCompleted() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto ReloadTechnology::getPercentComplete() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto ReloadTechnology::getLevel() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->level;
    
}


    auto ReloadTechnology::getMaxLevel() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxLevel;
    
}


    auto ReloadTechnology::getCost() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto ReloadTechnology::downgrade() -> void{
}


    auto ReloadTechnology::getDowngradeCost() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto ReloadTechnology::isDowngradeable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto ReloadTechnology::getUpgradeCost() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (this->getLevel() *this->getLevel()) *1000;
    
}


    auto ReloadTechnology::isUpgradeable() -> bool{

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


    auto ReloadTechnology::upgrade() -> void{
this->level++;
    

    UnitTechnologySingletonFactory* unitTechnologySingletonFactory = UnitTechnologySingletonFactory::getInstance();;
    
unitTechnologySingletonFactory->setReload(unitTechnologySingletonFactory->getReload() +(this->getLevel() *10));
    
}


    auto ReloadTechnology::isSelfUpgradeable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}




        #endif //ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_RELOADTECHNOLOGY_CPP
