
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PlatformRecordIdUtil
            : public Object
         {
        

    private: static const instance: PlatformRecordIdUtil = new PlatformRecordIdUtil();

    public static PlatformRecordIdUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PlatformRecordIdUtil.instance;
    
}


    private: const PLATFORM_SHORT_NAME: string = "JSE";

    public string getRecordId(AbeClientInformationInterface abeClientInformation, string baseRecordId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StringMaker().append(abeClientInformation!.toShortString())!.append(CommonSeps.getInstance()!.UNDERSCORE)!.append(this.PLATFORM_SHORT_NAME)!.append(baseRecordId)!.toString();;
    
}


};

            

