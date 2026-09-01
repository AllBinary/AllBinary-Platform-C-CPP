
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/business/init/LicenseInitInfo.h>

      
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ClientInformation.h"
// This is the information sent to the license server
class AbeClientInformation: public ClientInformation {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: AbeClientInformation(std::string name, std::string version, std::string specialName, std::string shortName){
            super(name, version, specialName, shortName);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void init(){

        try {
            this->setOperatingSystemInterface(OperatingSystemFactory::getInstance().getOperatingSystemInstance());
    

    LicenseInitInfo licenseInitInfo = LicenseInitInfoUtil::getInstance().read();;
    
this->setLicenseId(licenseInitInfo.getLicenseId());
    
this->setLicenseServers(licenseInitInfo.getServerList());
    

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(stringValidationUtil.isEmpty(this->getLicenseId()))
                        
                                    {
                                    
    std::string NONE = "No License Id";;
    
this->setLicenseId(NONE);
    

                                    }
                                

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::put(StringMaker().append("Special Name: ").append(this->getSpecialName()).toString(), this, commonStrings.CONSTRUCTOR);
    

                //: 
} catch(e) 
            {

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.CONSTRUCTOR, e);
    
}

}


};

            

