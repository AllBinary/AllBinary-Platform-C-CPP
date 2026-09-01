
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/hardware/android/AndroidHardware.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystems.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NoHardware.h"
#include "HardwareInterface.h"

class HardwareFactory
            : public Object
         {

    private: static HardwareFactory instance() { return HardwareFactory(); }

    public: static HardwareFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HardwareFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const TsUtil tsUtil = TsUtil::getInstance();

private: HardwareFactory(){
}


                //@Throws(Exception.constructor)
            
    public: HardwareInterface getInstance(GenericOperatingSystem os){

        try {
            
    OperatingSystems operatingSystems = OperatingSystems::getInstance();;
    

                        if(this->tsUtil.compareTo(os.getName(), operatingSystems.ANDROID) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidHardware();
    

                                    }
                                
                             else 
                        if(this->tsUtil.compareTo(os.getName(), operatingSystems.HARMONY) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidHardware();
    

                                    }
                                



                            throw Exception("No Hardware Imp for: " +os.getName());
                    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put("Ignoring Exception Returning NoHardware", this, commonStrings.GET_INSTANCE, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoHardware();
    
}

}


};

            

