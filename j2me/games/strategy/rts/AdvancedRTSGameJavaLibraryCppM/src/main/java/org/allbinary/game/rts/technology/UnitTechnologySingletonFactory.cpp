
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
        



            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UnitTechnologySingletonFactory
            : public Object
         {
        

    private: static const instance: UnitTechnologySingletonFactory = new UnitTechnologySingletonFactory();

    public static UnitTechnologySingletonFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UnitTechnologySingletonFactory.instance;
    
}


    private: damage: int32_t= 0;

    private: health: int32_t= 0;

    private: reload: int32_t= 0;

    private: repair: int32_t= 0;

    private: speed: int32_t= 0;

private constructor (){

            super();
        }


    public init(){
this.setDamage(0);
    
this.setHealth(0);
    
this.setReload(0);
    
this.setRepair(0);
    
this.setSpeed(0);
    
}


    public int32_t getDamage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.damage;
    
}


    public setDamage(int32_t damage){
this.damage= damage;
    
}


    public int32_t getHealth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.health;
    
}


    public setHealth(int32_t health){
this.health= health;
    
}


    public int32_t getReload(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.reload;
    
}


    public setReload(int32_t reload){
this.reload= reload;
    
}


    public int32_t getRepair(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.repair;
    
}


    public setRepair(int32_t repair){
this.repair= repair;
    
}


    public int32_t getSpeed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.speed;
    
}


    public setSpeed(int32_t speed){
this.speed= speed;
    
}


};

            

