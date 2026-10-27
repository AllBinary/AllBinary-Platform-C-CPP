
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
        



        #ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHINTERFACE_H
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTHINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/health/HealthListenerInterface.h"

class HealthInterface {

    public: virtual bool isAlive() = 0;

    public: virtual void damage(int32_t ahealth) = 0;

    public: virtual void heal(int32_t ahealth) = 0;

    public: virtual void healMax() = 0;

    public: virtual int32_t getMaxHealth() = 0;

    public: virtual void setMaxHealth(int32_t maxHealth) = 0;

    public: virtual int32_t getHealth() = 0;

    public: virtual void addListener(HealthListenerInterface* healthListenerInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTHINTERFACE_H
