
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREFACTORY_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class OperatingSystemInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NoHardware;
class HardwareInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HardwareFactory
            : public virtual Object
         {

    private: static HardwareFactory* instance_owner();
    private: static HardwareFactory* instance;

    public: static HardwareFactory* getInstance();

    private: HardwareInterface* SINGLETON;

private: HardwareFactory();

                //@Throws(Exception.constructor)
            
    public: HardwareInterface* getInstance(OperatingSystemInterface* os);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/system/os/OperatingSystemInterface.h>)
#include <org/allbinary/logic/system/os/OperatingSystemInterface.h>
#endif
#if __has_include("org/allbinary/logic/system/hardware/NoHardware.h")
#include "org/allbinary/logic/system/hardware/NoHardware.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/HardwareInterface.h")
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"
#endif

        #endif
    
