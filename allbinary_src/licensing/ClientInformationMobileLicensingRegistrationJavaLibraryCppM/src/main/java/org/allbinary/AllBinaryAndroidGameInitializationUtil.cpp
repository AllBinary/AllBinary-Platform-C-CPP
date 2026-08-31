
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
        



            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Integer.h"
        
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/PartnerIdentifierFileUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AndroidResources.h"

class AllBinaryAndroidGameInitializationUtil
            : public Object
         {
        

    public static init(){

    resourceUtil: ResourceUtil = ResourceUtil.getInstance()!;;
    

    androidResources: AndroidResources = AndroidResources.getInstance()!;;
    

    licenseInitInfoUtil: LicenseInitInfoUtil = LicenseInitInfoUtil.getInstance()!;;
    
resourceUtil!.addResource(licenseInitInfoUtil!.INITFILENAME, Integer.valueOf(androidResources!.raw.licenseinitdata));
    
resourceUtil!.addResource(PartnerIdentifierFileUtil.getInstance()!.FILE_NAME, Integer.valueOf(androidResources!.raw.partner));
    
}


};

            

