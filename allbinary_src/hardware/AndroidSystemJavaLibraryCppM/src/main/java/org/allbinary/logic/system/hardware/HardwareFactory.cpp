
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

class HardwareFactory
            : public Object
         {

    private: static HardwareFactory* instance() { static std::unique_ptr<HardwareFactory> value(new HardwareFactory()); return value.get(); }

    public: static HardwareFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HardwareFactory::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: TsUtil* tsUtil = TsUtil::getInstance();

private: HardwareFactory(){
}


                //@Throws(Exception.constructor)
            
    public: HardwareInterface* getInstance(GenericOperatingSystem* os){

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
                                



                            throw new Exception("No Hardware Imp for: " +os->getName());
                    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put("Ignoring Exception Returning NoHardware", this, commonStrings->GET_INSTANCE, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new NoHardware();
    
}

}


};

            

