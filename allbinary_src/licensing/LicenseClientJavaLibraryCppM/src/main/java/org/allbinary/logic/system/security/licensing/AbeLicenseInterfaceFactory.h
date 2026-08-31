
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABELICENSEINTERFACEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABELICENSEINTERFACEFACTORY_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/io/IOException.h>

      
#include <java/util/Calendar.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/client/AbeLicenseClient.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeLicenseInterface.h"
#include "AbeClientInformationInterface.h"
#include "AbeNoLicense.h"
#include "AbeClientInformationData.h"
#include "LicensingException.h"

class AbeLicenseInterfaceFactory
            : public Object
         {
        

    private: static const SINGLETON: AbeLicenseInterfaceFactory = new AbeLicenseInterfaceFactory();

    public static AbeLicenseInterfaceFactory getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: time: int64_t = 0;

    private: check: bool = false;

    private: checkPeriod: int32_t = 36000000;

    private: abeLicenseInterface: AbeLicenseInterface = 
                null
            ;

private constructor ();

                //@Throws(LicensingException.constructor)
            
    public AbeLicenseInterface getLicenseInstance(AbeClientInformationInterface abeClientInformation);

                //@Throws(LicensingException.constructor)
            
    AbeLicenseInterface get(AbeClientInformationInterface abeClientInformation);

    bool isTimeToGetKey();

    public setCheck(bool check);

    bool isCheck();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABELICENSEINTERFACEFACTORY_H
