
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
        

    private: static const instance: HardwareFactory = new HardwareFactory();

    public static HardwareFactory getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const tsUtil: TsUtil = TsUtil.getInstance()!;

private constructor ();

                //@Throws(Exception.constructor)
            
    public HardwareInterface getInstance(GenericOperatingSystem os);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREFACTORY_H
