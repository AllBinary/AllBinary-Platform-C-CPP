
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
        
            #include "../../../../../java/lang/System.h"
        
#include <org/allbinary/logic/communication/log/Log.h>

      
#include <org/allbinary/logic/communication/log/LogFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/os/linux/LinuxOperatingSystemFactory.h>

      
#include <org/allbinary/logic/system/os/solaris/SolarisOperatingSystemFactory.h>

      
#include <org/allbinary/logic/system/os/windows/WindowsOperatingSystemFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NoOperatingSystem.h"
#include "GenericOperatingSystem.h"
#include "OperatingSystems.h"
#include "SystemProperties.h"

class OperatingSystemFactory
            : public Object
         {
        

    private: static const instance: OperatingSystemFactory = new OperatingSystemFactory();

    public static OperatingSystemFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OperatingSystemFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: genericOperatingSystem: GenericOperatingSystem = NoOperatingSystem.NO_OPERATING_SYSTEM;

    private: hasDetected: bool = false;

private constructor (){

            super();
        }

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public GenericOperatingSystem getOperatingSystemInstance(){

        try {
            
    operatingSystems: OperatingSystems = OperatingSystems.getInstance()!;;
    

    systemProperties: SystemProperties = SystemProperties.getInstance()!;;
    

    osName: string = systemProperties!.getName()!;;
    

    osArch: string = systemProperties!.getArch()!;;
    

    osVersion: string = systemProperties!.getVersion()!;;
    

                        if(!this.hasDetected)
                        
                                    {
                                    this.logUtil!.putF("osName: " +osName, this, this.commonStrings!.GET_INSTANCE);
    
this.hasDetected= true;
    

                        if(osName!.indexOf(operatingSystems!.LINUX) >= 0)
                        
                                    {
                                    
                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.FACTORYERROR))
                        
                                    {
                                    this.logUtil!.putF("Found a Linux OS", this, this.commonStrings!.GET_INSTANCE);
    

                                    }
                                
this.genericOperatingSystem= LinuxOperatingSystemFactory.getInstance()!.getOperatingSystemInstance();
    

                                    }
                                
                             else 
                        if(osName!.indexOf(operatingSystems!.WINDOWS) >= 0)
                        
                                    {
                                    
                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.FACTORYERROR))
                        
                                    {
                                    this.logUtil!.putF("Found a Windows OS", this, this.commonStrings!.GET_INSTANCE);
    

                                    }
                                
this.genericOperatingSystem= WindowsOperatingSystemFactory.getInstance()!.getOperatingSystemInstance();
    

                                    }
                                
                             else 
                        if(osName!.indexOf(operatingSystems!.SOLARIS) >= 0)
                        
                                    {
                                    
                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.FACTORYERROR))
                        
                                    {
                                    this.logUtil!.putF("Found a Solaris OS", this, this.commonStrings!.GET_INSTANCE);
    

                                    }
                                
this.genericOperatingSystem= SolarisOperatingSystemFactory.getInstance()!.getOperatingSystemInstance();
    

                                    }
                                
                        else {
                            


                            throw new Exception(new StringMaker().append("OS Not Supported: ")!.append(osName)!.toString());
                    

                        }
                            

    log: Log = LogFactory.getInstanceF(new StringMaker().append("OperatingSystem Info: ")!.append(StringUtil.getInstance()!.toString(this.genericOperatingSystem))!.toString(), this, this.commonStrings!.GET_INSTANCE)!;;
    
console.log(log.toString());
    
this.logUtil!.putL(log);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.genericOperatingSystem;
    

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.FACTORYERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.GET_INSTANCE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoOperatingSystem.NO_OPERATING_SYSTEM;
    
}

}


};

            

