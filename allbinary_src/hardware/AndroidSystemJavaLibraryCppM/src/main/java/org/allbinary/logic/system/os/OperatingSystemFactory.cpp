
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
        
#include <org/allbinary/logic/system/os/android/AndroidOperatingSystemFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NoOperatingSystem.h"
#include "GenericOperatingSystem.h"
#include "SystemProperties.h"
#include "OperatingSystems.h"

class OperatingSystemFactory
            : public Object
         {
        

    private: static const instance: OperatingSystemFactory = new OperatingSystemFactory();

    public static OperatingSystemFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OperatingSystemFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: genericOperatingSystem: GenericOperatingSystem = NoOperatingSystem.NO_OPERATING_SYSTEM;

    private: hasDetected: bool = false;

private constructor (){

            super();
        }

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public GenericOperatingSystem getOperatingSystemInstance(){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

        try {
            
    systemProperties: SystemProperties = SystemProperties.getInstance()!;;
    

    osName: string = systemProperties!.getName()!;;
    

                        if(!this.hasDetected)
                        
                                    {
                                    this.hasDetected= true;
    

                        if(osName!.indexOf(OperatingSystems.getInstance()!.ANDROID) >= 0)
                        
                                    {
                                    this.logUtil!.putF("Found a Android OS", this, commonStrings!.GET_INSTANCE);
    
this.genericOperatingSystem= AndroidOperatingSystemFactory.getInstance()!.getOperatingSystemInstance();
    
this.logUtil!.putF(new StringMaker().append("Operating System Info: ")!.append(this.genericOperatingSystem!.toString())!.toString(), this, commonStrings!.GET_INSTANCE);
    

                                    }
                                
                             else 
                        if(osName!.indexOf(OperatingSystems.getInstance()!.HARMONY) >= 0)
                        
                                    {
                                    this.logUtil!.putF("Found a Harmony OS", this, commonStrings!.GET_INSTANCE);
    
this.genericOperatingSystem= AndroidOperatingSystemFactory.getInstance()!.getOperatingSystemInstance();
    
this.logUtil!.putF(new StringMaker().append("Operating System Info: ")!.append(this.genericOperatingSystem!.toString())!.toString(), this, commonStrings!.GET_INSTANCE);
    

                                    }
                                
                        else {
                            


                            throw new Exception(new StringMaker().append("OS Not Supported: ")!.append(osName)!.toString());
                    

                        }
                            

                                    }
                                

                //: 
} catch(e) 
            {
this.genericOperatingSystem= NoOperatingSystem.NO_OPERATING_SYSTEM;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.GET_INSTANCE, e);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.genericOperatingSystem;
    
}


};

            

