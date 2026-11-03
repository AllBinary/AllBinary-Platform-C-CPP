
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
        



        #ifndef ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_UNITTECHNOLOGYSINGLETONFACTORY_CPP
        #define ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_UNITTECHNOLOGYSINGLETONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/rts/technology/UnitTechnologySingletonFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto UnitTechnologySingletonFactory::instance_owner() -> UnitTechnologySingletonFactory* { static std::unique_ptr<UnitTechnologySingletonFactory> value(new UnitTechnologySingletonFactory()); return value.get(); }
UnitTechnologySingletonFactory* UnitTechnologySingletonFactory::instance = UnitTechnologySingletonFactory::instance_owner();

    auto UnitTechnologySingletonFactory::getInstance() -> UnitTechnologySingletonFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return UnitTechnologySingletonFactory::instance;
    
}


UnitTechnologySingletonFactory::UnitTechnologySingletonFactory(){
}


    auto UnitTechnologySingletonFactory::init() -> void{
this->setDamage(0);
    
this->setHealth(0);
    
this->setReload(0);
    
this->setRepair(0);
    
this->setSpeed(0);
    
}


    auto UnitTechnologySingletonFactory::getDamage() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->damage;
    
}


    auto UnitTechnologySingletonFactory::setDamage(int32_t damage) -> void{
this->damage= damage;
    
}


    auto UnitTechnologySingletonFactory::getHealth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->health;
    
}


    auto UnitTechnologySingletonFactory::setHealth(int32_t health) -> void{
this->health= health;
    
}


    auto UnitTechnologySingletonFactory::getReload() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->reload;
    
}


    auto UnitTechnologySingletonFactory::setReload(int32_t reload) -> void{
this->reload= reload;
    
}


    auto UnitTechnologySingletonFactory::getRepair() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->repair;
    
}


    auto UnitTechnologySingletonFactory::setRepair(int32_t repair) -> void{
this->repair= repair;
    
}


    auto UnitTechnologySingletonFactory::getSpeed() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->speed;
    
}


    auto UnitTechnologySingletonFactory::setSpeed(int32_t speed) -> void{
this->speed= speed;
    
}




        #endif //ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_UNITTECHNOLOGYSINGLETONFACTORY_CPP
