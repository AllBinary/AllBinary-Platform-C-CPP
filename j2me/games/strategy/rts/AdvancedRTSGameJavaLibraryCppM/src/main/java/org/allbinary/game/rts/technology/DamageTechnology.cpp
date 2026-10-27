
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/RTSInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/rts/technology/UnitTechnologySingletonFactory.h"

class DamageTechnology
            : public Object
        , public RTSInterface {

    private: int32_t level= 0;

    private: int32_t maxLevel;

public: DamageTechnology(int32_t maxLevel){
this->maxLevel= maxLevel;
    
}


    public: bool isCompleted(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: int32_t getPercentComplete(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: int32_t getLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->level;
    
}


    public: int32_t getMaxLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxLevel;
    
}


    public: int32_t getCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: void downgrade(){
}


    public: int32_t getDowngradeCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: bool isDowngradeable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: int32_t getUpgradeCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (this->getLevel() *this->getLevel()) *1000;
    
}


    public: bool isUpgradeable(){

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


    public: void upgrade(){
this->level++;
    

    UnitTechnologySingletonFactory* unitTechnologySingletonFactory = UnitTechnologySingletonFactory::getInstance();;
    
unitTechnologySingletonFactory->setDamage(unitTechnologySingletonFactory->getDamage() +(this->getLevel() *100));
    
}


    public: bool isSelfUpgradeable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

