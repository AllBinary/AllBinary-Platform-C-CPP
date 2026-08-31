
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
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NoOperatingSystem.h"
#include "GenericOperatingSystem.h"

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

private constructor (){

            super();
        }

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public GenericOperatingSystem getOperatingSystemInstance(){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

        try {
            
    osString: string = new StringMaker().append("OperatingSystem Info: ")!.append(this.genericOperatingSystem!.toString())!.toString()!;;
    
console.log(osString);
    
this.logUtil!.putF(osString, this, commonStrings!.GET_INSTANCE);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.GET_INSTANCE, e);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return genericOperatingSystem;
    
}


};

            

