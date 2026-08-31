
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryMediaManager.h"
#include "SoundsFactoryInterface.h"

class AllBinaryMediaManagerShutdown
            : public Object
         {
        

    private: static const instance: AllBinaryMediaManagerShutdown = new AllBinaryMediaManagerShutdown();

                //@Throws(Exception.constructor)
            
    public static shutdown(SoundsFactoryInterface soundsFactoryInterface){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
logUtil!.putF(commonStrings!.START, instance, "shutdown");
    
AllBinaryMediaManager.shutdown(soundsFactoryInterface);
    
}


};

            

