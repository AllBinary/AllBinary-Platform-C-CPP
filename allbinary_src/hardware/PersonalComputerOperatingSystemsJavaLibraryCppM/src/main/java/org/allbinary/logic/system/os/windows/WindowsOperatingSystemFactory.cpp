
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/NoOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystems.h>

      
#include <org/allbinary/logic/system/os/SystemProperties.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WindowsOS.h"

class WindowsOperatingSystemFactory
            : public Object
         {
        

    private: static const instance: WindowsOperatingSystemFactory = new WindowsOperatingSystemFactory();

    public static WindowsOperatingSystemFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WindowsOperatingSystemFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


    public GenericOperatingSystem getOperatingSystemInstance(){

        try {
            
    operatingSystems: OperatingSystems = OperatingSystems.getInstance()!;;
    

    osName: string = SystemProperties.getInstance()!.getName()!;;
    

    operatingSystemInterface: GenericOperatingSystem;;
    

                        if(osName!.compareTo(operatingSystems!.WINDOWS_NT) == 0)
                        
                                    {
                                    operatingSystemInterface= new WindowsOS();
    

                                    }
                                
                             else 
                        if(osName!.compareTo(operatingSystems!.WINDOWS_10) == 0)
                        
                                    {
                                    operatingSystemInterface= new WindowsOS();
    

                                    }
                                
                             else 
                        if(osName!.compareTo(operatingSystems!.WINDOWS_11) == 0)
                        
                                    {
                                    operatingSystemInterface= new WindowsOS();
    

                                    }
                                
                             else 
                        if(osName!.compareTo(operatingSystems!.WINDOWS2000) == 0)
                        
                                    {
                                    operatingSystemInterface= new WindowsOS();
    

                                    }
                                
                             else 
                        if(osName!.compareTo(operatingSystems!.WINDOWS_XP) == 0)
                        
                                    {
                                    operatingSystemInterface= new WindowsOS();
    

                                    }
                                
                             else 
                        if(osName!.compareTo(operatingSystems!.WINDOWS_VISTA) == 0)
                        
                                    {
                                    operatingSystemInterface= new WindowsOS();
    

                                    }
                                
                        else {
                            
                        if(operatingSystems!.isUnknownSpecificOSAllowed())
                        
                                    {
                                    operatingSystemInterface= new WindowsOS();
    

                                    }
                                
                        else {
                            


                            throw new Exception("Specific Windows OS Not Supported: " +osName);
                    

                        }
                            

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return operatingSystemInterface;
    

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.FACTORYERROR))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.GET_INSTANCE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoOperatingSystem.NO_OPERATING_SYSTEM;
    
}

}


};

            

