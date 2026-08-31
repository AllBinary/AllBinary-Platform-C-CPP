
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
        



        #ifndef ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_UNITTECHNOLOGYSINGLETONFACTORY_H
        #define ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_UNITTECHNOLOGYSINGLETONFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UnitTechnologySingletonFactory
            : public Object
         {
        

    private: static const instance: UnitTechnologySingletonFactory = new UnitTechnologySingletonFactory();

    public static UnitTechnologySingletonFactory getInstance();

    private: damage: int32_t= 0;

    private: health: int32_t= 0;

    private: reload: int32_t= 0;

    private: repair: int32_t= 0;

    private: speed: int32_t= 0;

private constructor ();

    public init();

    public int32_t getDamage();

    public setDamage(int32_t damage);

    public int32_t getHealth();

    public setHealth(int32_t health);

    public int32_t getReload();

    public setReload(int32_t reload);

    public int32_t getRepair();

    public setRepair(int32_t repair);

    public int32_t getSpeed();

    public setSpeed(int32_t speed);

};

            


        #endif //ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_UNITTECHNOLOGYSINGLETONFACTORY_H
