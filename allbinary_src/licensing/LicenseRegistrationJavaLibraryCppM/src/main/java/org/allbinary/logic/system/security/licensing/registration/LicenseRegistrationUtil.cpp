
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/canvas/SpecialMessageUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RegistrationConfiguration.h"
#include "XmlRpcRemoteLicenseRegistrationClient.h"

class LicenseRegistrationUtil
            : public Object
         {
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void process(AbeClientInformationInterface abeClientInformation, std::string registrationId){

        try {
            
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::put(CommonLabels::getInstance().START_LABEL +"License Registration", "LicenseRegistrationUtil", commonStrings.PROCESS);
    
RegistrationConfiguration::getInstance().setRegistrationCode(registrationId);
    
RegistrationConfiguration::getInstance().write();
    

    Hashtable<any, any> hashtable = abeClientInformation.toHashtable();;
    
hashtable.put(RegistrationConfiguration::getInstance().NAME, registrationId);
    
hashtable.put("message", SpecialMessageUtil::getInstance().get());
    
XmlRpcRemoteLicenseRegistrationClient(abeClientInformation).get(hashtable);
    

                //: 
} catch(e) 
            {
PreLogUtil::putOE("License Registration Exception", "LicenseRegistrationUtil", "License Registration", e);
    
}

}


private: LicenseRegistrationUtil(){
}


};

            

