
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class LogConfigTypes;
class LogConfigTypeFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LogConfigType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LogConfigTypeFactory
            : public virtual Object
         {

    private: static LogConfigTypeFactory* instance_owner();
    private: static LogConfigTypeFactory* instance;

    public: static LogConfigTypeFactory* getInstance();

    private: const std::string NO_DESCRIPTION = "No Description";

    public: LogConfigType* INIT_SERVER;

    public: LogConfigType* LOBBY_SERVER;

    public: LogConfigType* GAME_SERVER;

    public: LogConfigType* GAME_SIMULATOR;

    public: LogConfigType* CUSTOM_TYPES;

private: LogConfigTypeFactory();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
#endif
#if __has_include("org/allbinary/logic/communication/log/config/type/LogConfigType.h")
#include "org/allbinary/logic/communication/log/config/type/LogConfigType.h"
#endif

        #endif
    
