
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UnitTechnologySingletonFactory
            : public Object
         {

    private: static UnitTechnologySingletonFactory* instance() { static std::unique_ptr<UnitTechnologySingletonFactory> value(new UnitTechnologySingletonFactory()); return value.get(); }

    public: static UnitTechnologySingletonFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UnitTechnologySingletonFactory::instance();
    
}


    private: int32_t damage= 0;

    private: int32_t health= 0;

    private: int32_t reload= 0;

    private: int32_t repair= 0;

    private: int32_t speed= 0;

private: UnitTechnologySingletonFactory(){
}


    public: void init(){
this->setDamage(0);
    
this->setHealth(0);
    
this->setReload(0);
    
this->setRepair(0);
    
this->setSpeed(0);
    
}


    public: int32_t getDamage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->damage;
    
}


    public: void setDamage(int32_t damage){
this->damage= damage;
    
}


    public: int32_t getHealth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->health;
    
}


    public: void setHealth(int32_t health){
this->health= health;
    
}


    public: int32_t getReload(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->reload;
    
}


    public: void setReload(int32_t reload){
this->reload= reload;
    
}


    public: int32_t getRepair(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->repair;
    
}


    public: void setRepair(int32_t repair){
this->repair= repair;
    
}


    public: int32_t getSpeed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->speed;
    
}


    public: void setSpeed(int32_t speed){
this->speed= speed;
    
}


};

            

