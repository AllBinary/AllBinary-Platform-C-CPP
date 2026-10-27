
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
        



            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/NoOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystems.h>

      
#include <org/allbinary/logic/system/os/SystemProperties.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/os/android/AndroidOS.h"

class AndroidOperatingSystemFactory
            : public Object
         {

    private: static AndroidOperatingSystemFactory* instance() { static std::unique_ptr<AndroidOperatingSystemFactory> value(new AndroidOperatingSystemFactory()); return value.get(); }

    public: static AndroidOperatingSystemFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidOperatingSystemFactory::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: TsUtil* tsUtil = TsUtil::getInstance();

private: AndroidOperatingSystemFactory(){
}


                //@Throws(Exception.constructor)
            
    public: GenericOperatingSystem* getOperatingSystemInstance(){

        try {
            
    GenericOperatingSystem* GenericOperatingSystem;;
    

    SystemProperties* systemProperties = SystemProperties::getInstance();;
    

    std::string osName = systemProperties->getName();;
    

                        if(this->tsUtil->compareTo(osName, OperatingSystems::getInstance()->ANDROID) == 0)
                        
                                    {
                                    GenericOperatingSystem= new AndroidOS();
    

                                    }
                                
                        else {
                            
                        if(OperatingSystems::getInstance()->isUnknownSpecificOSAllowed())
                        
                                    {
                                    GenericOperatingSystem= new AndroidOS();
    

                                    }
                                
                        else {
                            


                            throw new Exception("Specific Android OS Not Supported: " +osName);
                    

                        }
                            

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GenericOperatingSystem;
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put("Failed to get OperatingSystem returning NoOperatingSystem", this, commonStrings->GET_INSTANCE, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoOperatingSystem::NO_OPERATING_SYSTEM;
    
}

}


};

            

