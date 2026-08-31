
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_DRIVER_H
        #define ORG_ALLBINARY_GAME_LAYER_DRIVER_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Aggression.h"

class Driver
            : public Object
         {
        

    public static const NULL_DRIVER: Driver = new Driver(SmallIntegerSingletonFactory.getInstance()!.getAt(0), SmallIntegerSingletonFactory.getInstance()!.getAt(0), new Aggression(SmallIntegerSingletonFactory.getInstance()!.getAt(0), SmallIntegerSingletonFactory.getInstance()!.getAt(0), SmallIntegerSingletonFactory.getInstance()!.getAt(0)));

    private: turnSpeed: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(0)!;

    private: trackPathSelectionSkill: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(0)!;

    private: aggression: Aggression;

public constructor (Integer turnSpeed, Integer trackPathSelectionSkill, Aggression aggression);

    public Integer getTurnSpeed();

    public setTurnSpeed(Integer turnSpeed);

    public Integer getTrackPathSelectionSkill();

    public setTrackPathSelectionSkill(Integer trackPathSelectionSkill);

    public Aggression getAggression();

    public setAggression(Aggression aggression);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_DRIVER_H
