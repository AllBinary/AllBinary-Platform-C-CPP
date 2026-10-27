
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/hardware/HardwareFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/system/os/OperatingSystemInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/hardware/NoHardware.h"
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"

auto HardwareFactory::instance_owner() -> HardwareFactory* { static std::unique_ptr<HardwareFactory> value(new HardwareFactory()); return value.get(); }
HardwareFactory* HardwareFactory::instance = HardwareFactory::instance_owner();

    auto HardwareFactory::getInstance() -> HardwareFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HardwareFactory::instance;
    
}


HardwareFactory::HardwareFactory() : SINGLETON(NoHardware::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto HardwareFactory::getInstance(OperatingSystemInterface* os) -> HardwareInterface*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->SINGLETON;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREFACTORY_CPP
