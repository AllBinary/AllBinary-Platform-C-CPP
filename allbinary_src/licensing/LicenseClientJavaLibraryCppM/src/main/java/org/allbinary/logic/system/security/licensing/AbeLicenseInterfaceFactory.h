
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/IOException.h>

      
#include <java/util/Calendar.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/client/AbeLicenseClient.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/AbeNoLicense.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationData.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"

class AbeLicenseInterfaceFactory
            : public Object
         {

    private: static AbeLicenseInterfaceFactory* SINGLETON() { static std::unique_ptr<AbeLicenseInterfaceFactory> value(new AbeLicenseInterfaceFactory()); return value.get(); }

    public: static AbeLicenseInterfaceFactory* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: int64_t time = 0;

    private: bool check = false;

    private: int32_t checkPeriod = 36000000;

    private: AbeLicenseInterface* abeLicenseInterface = 
                nullptr
            ;

private: AbeLicenseInterfaceFactory();

                //@Throws(LicensingException.constructor)
            
    public: AbeLicenseInterface* getLicenseInstance(AbeClientInformationInterface* abeClientInformation);

                //@Throws(LicensingException.constructor)
            
    private: AbeLicenseInterface* get(AbeClientInformationInterface* abeClientInformation);

    private: bool isTimeToGetKey();

    public: void setCheck(bool check);

    private: bool isCheck();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABELICENSEINTERFACEFACTORY_H
