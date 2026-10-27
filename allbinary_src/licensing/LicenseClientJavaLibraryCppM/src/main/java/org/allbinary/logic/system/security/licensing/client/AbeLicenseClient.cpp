
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENT_ABELICENSECLIENT_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENT_ABELICENSECLIENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/client/AbeLicenseClient.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/init/LicenseInitInfo.h>

      
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/client/XmlRpcAbeLicenseRetrievalClient.h"


AbeLicenseClient::AbeLicenseClient() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbeLicenseClient::get(AbeClientInformationInterface* abeClientInformation) -> AbeLicenseInterface*{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->GET);
    

    XmlRpcAbeClient* xmlRpcAbeLicenseClient = new XmlRpcAbeLicenseRetrievalClient(abeClientInformation);;
    

    AbeLicenseInterface* abeLicenseInterface = dynamic_cast<AbeLicenseInterface*>(xmlRpcAbeLicenseClient->get(
                            nullptr));;
    

    std::string licenseId = abeLicenseInterface->getLicenseId();;
    

    BasicArrayList* servers = abeLicenseInterface->getServers();;
    

    bool isNewLicenseId = false;;
    

    bool isBetterServerList = false;;
    

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(stringValidationUtil->isEmpty(abeClientInformation->getLicenseId()) && !abeClientInformation->isSameId(licenseId))
                        
                                    {
                                    isNewLicenseId= true;
    

                                    }
                                

                        if(servers->size() >= this->MINSERVERS && abeClientInformation->isLargerOrDifferentServerList(servers))
                        
                                    {
                                    isBetterServerList= true;
    

                                    }
                                

                        if(isBetterServerList || isNewLicenseId)
                        
                                    {
                                    
    LicenseInitInfo* initInfo = LicenseInitInfoUtil::getInstance()->read();;
    
initInfo->setLicenseId(licenseId);
    
initInfo->setServerList(servers);
    
LicenseInitInfoUtil::getInstance()->write(initInfo);
    
abeClientInformation->init();
    

                                    }
                                
this->logUtil->putF(this->commonStrings->END, this, this->commonStrings->GET);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return abeLicenseInterface;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENT_ABELICENSECLIENT_CPP
