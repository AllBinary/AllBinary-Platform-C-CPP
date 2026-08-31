
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
        



        #ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTH_H
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTH_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HealthInterface.h"
#include "NullHealthListener.h"
#include "HealthListenerInterface.h"

class Health
            : public Object
        : public HealthInterface {
        

    public static const NULL_HEALTH: Health = new Health(0);

    public static const NAME: string = "Health Resource";

    private: static const HEALTH_LABEL: string = "Health: ";

    private: static const MAX_HEALTH_LABEL: string = " Max: ";

    private: health: int32_t= 0;

    private: maxHealth: int32_t= 0;

    private: healthListenerInterface: HealthListenerInterface = NullHealthListener.NULL_HEALTH_LISTENER;

public constructor (int32_t maxHealth);

    public heal(int32_t ahealth);

    public healMax();

    public bool isDamaged();

    public damage(int32_t ahealth);

    public bool isAlive();

    public int32_t getMaxHealth();

    public setMaxHealth(int32_t maxHealth);

    public setHealth(int32_t health);

    public int32_t getHealth();

    public addListener(HealthListenerInterface healthGraphic);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTH_H
