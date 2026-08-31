
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_MOBILECLIENTINFORMATION_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_MOBILECLIENTINFORMATION_H

            #include "../../../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/registration/RegistrationConfiguration.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeClientInformation.h"
#include "PartnerIdentifierFileUtil.h"

class MobileClientInformation: public AbeClientInformation {
        

    static const DESC: string = "Mobile";

    static const ANDROID_DESC: string = "Android" +MobileClientInformation.DESC;

public constructor (string name, string version, string specialName, string shortName);

    public Hashtable<any, any> toHashtable();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_MOBILECLIENTINFORMATION_H
