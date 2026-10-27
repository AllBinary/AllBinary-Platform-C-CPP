
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
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/hardware/android/AndroidHardware.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystems.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/hardware/NoHardware.h"
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"

auto HardwareFactory::instance_owner() -> HardwareFactory* { static std::unique_ptr<HardwareFactory> value(new HardwareFactory()); return value.get(); }
HardwareFactory* HardwareFactory::instance = HardwareFactory::instance_owner();

    auto HardwareFactory::getInstance() -> HardwareFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HardwareFactory::instance;
    
}


HardwareFactory::HardwareFactory() : logUtil(LogUtil::getInstance()), tsUtil(TsUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto HardwareFactory::getInstance(GenericOperatingSystem* os) -> HardwareInterface*{

        try {
            
    OperatingSystems* operatingSystems = OperatingSystems::getInstance();;
    

                        if(this->tsUtil->compareTo(os->getName(), operatingSystems->ANDROID) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AndroidHardware();
    

                                    }
                                
                             else 
                        if(this->tsUtil->compareTo(os->getName(), operatingSystems->HARMONY) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AndroidHardware();
    

                                    }
                                



                            throw Exception(JavaString::valueOf("No Hardware Imp for: ") +JavaString::valueOf(os->getName()));
                    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put("Ignoring Exception Returning NoHardware", this, commonStrings->GET_INSTANCE, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new NoHardware();
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREFACTORY_CPP
