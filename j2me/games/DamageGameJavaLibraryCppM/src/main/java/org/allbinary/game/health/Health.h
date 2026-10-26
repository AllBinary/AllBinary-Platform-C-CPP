
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

            #include "java/lang/Object.h"
        
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

    public: static const Health NULL_HEALTH = Health(0);

    public: static const std::string NAME = "Health Resource";

    private: static const std::string HEALTH_LABEL = "Health: ";

    private: static const std::string MAX_HEALTH_LABEL = " Max: ";

    private: int32_t health= 0;

    private: int32_t maxHealth= 0;

    private: HealthListenerInterface healthListenerInterface = NullHealthListener::NULL_HEALTH_LISTENER;

public: Health(int32_t maxHealth);

    public: void heal(int32_t ahealth);

    public: void healMax();

    public: bool isDamaged();

    public: void damage(int32_t ahealth);

    public: bool isAlive();

    public: int32_t getMaxHealth();

    public: void setMaxHealth(int32_t maxHealth);

    public: void setHealth(int32_t health);

    public: int32_t getHealth();

    public: void addListener(HealthListenerInterface healthGraphic);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTH_H
