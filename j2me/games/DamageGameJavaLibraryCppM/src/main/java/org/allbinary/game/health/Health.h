
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class ForcedLogUtil;
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/health/HealthInterface.h"
class NullHealthListener;
class HealthListenerInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Health
            : public virtual Object
        , public HealthInterface {

    private: static Health* NULL_HEALTH_owner();
    public: static Health* NULL_HEALTH;

    public: static inline const std::string NAME = "Health Resource";

    private: static inline const std::string HEALTH_LABEL = "Health: ";

    private: static inline const std::string MAX_HEALTH_LABEL = " Max: ";

    private: int32_t health= 0;

    private: int32_t maxHealth= 0;

    private: HealthListenerInterface* healthListenerInterface;

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

    public: void addListener(HealthListenerInterface* healthGraphic);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTH_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_HEALTH_HEALTH_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTH_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/game/health/HealthInterface.h")
#include "org/allbinary/game/health/HealthInterface.h"
#endif
#if __has_include("org/allbinary/game/health/NullHealthListener.h")
#include "org/allbinary/game/health/NullHealthListener.h"
#endif
#if __has_include("org/allbinary/game/health/HealthListenerInterface.h")
#include "org/allbinary/game/health/HealthListenerInterface.h"
#endif

        #endif
    
