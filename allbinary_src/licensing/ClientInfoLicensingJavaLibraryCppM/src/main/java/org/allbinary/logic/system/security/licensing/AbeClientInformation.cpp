
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTINFORMATION_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTINFORMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/AbeClientInformation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/init/LicenseInitInfo.h>

      
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/ClientInformation.h"
// This is the information sent to the license server

AbeClientInformation::AbeClientInformation(std::string name, std::string version, std::string specialName, std::string shortName) : ClientInformation(name, version, specialName, shortName), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto AbeClientInformation::init() -> void{

        try {
            this->setOperatingSystemInterface(OperatingSystemFactory::getInstance()->getOperatingSystemInstance());
    

    LicenseInitInfo* licenseInitInfo = LicenseInitInfoUtil::getInstance()->read();;
    
this->setLicenseId(licenseInitInfo->getLicenseId());
    
this->setLicenseServers(licenseInitInfo->getServerList());
    

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(stringValidationUtil->isEmpty(this->getLicenseId()))
                        
                                    {
                                    
    std::string NONE = "No License Id";;
    
this->setLicenseId(NONE);
    

                                    }
                                

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::put(JavaString::valueOf((new StringMaker())->append("Special Name: ")->append(this->getSpecialName())), this, commonStrings->CONSTRUCTOR);
    

                //: 
} catch(Exception& e) 
            {

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, &e);
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTINFORMATION_CPP
