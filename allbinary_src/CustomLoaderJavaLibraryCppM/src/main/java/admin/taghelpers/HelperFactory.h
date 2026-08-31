
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
        



        #ifndef ADMIN_TAGHELPERS_HELPERFACTORY_H
        #define ADMIN_TAGHELPERS_HELPERFACTORY_H

            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Class.h"
        
            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HelperFactory
            : public Object
         {
        

                //@Throws(LicensingException.constructor)
            
    public static any getInstance(AbeClientInformationInterface abeClientInformation, string factoryName, string className, HashMap<any, any> hashMap, HttpServletRequest httpServletRequest);

                //@Throws(LicensingException.constructor)
            
    public static any getInstance(AbeClientInformationInterface abeClientInformation, string factoryName, string className, HashMap<any, any> hashMap, PageContext pageContext);

                //@Throws(LicensingException.constructor)
            
    public static any getInstance(AbeClientInformationInterface abeClientInformation, string factoryName, string className, HashMap<any, any> hashMap, HashMap<any, any> specialhashMap, PageContext pageContext);

                //@Throws(LicensingException.constructor)
            
    public static any getInstance(AbeClientInformationInterface abeClientInformation, string factoryName, string className);

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor ();

};

            


        #endif //ADMIN_TAGHELPERS_HELPERFACTORY_H
