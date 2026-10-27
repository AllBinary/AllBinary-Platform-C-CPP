
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
        



        #ifndef ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICE_CPP
        #define ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/bundle/logic/system/loader/CryptService.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/globals/Globals.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/gui/dialog/BasicTextJDialog.h>

      
#include <org/allbinary/gui/dialog/ExitCloseListener.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/AbCryptUtil.h>

      
#include <org/allbinary/logic/system/security/AbKeys.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeLicenseInterfaceFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeNoLicense.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CryptService::CryptService() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), abCryptUtil(AbCryptUtil::getInstance()){
Globals::getInstance()->init(this->getClass()getClassLoader(), "./");
    
this->logUtil->putF(JavaString::valueOf("Set Globals: ") +JavaString::valueOf(URLGLOBALS::getWebappPath()), this, this->commonStrings->CONSTRUCTOR);
    
}


    auto CryptService::getDecryptedInputStream(AbeClientInformationInterface* abeClientInformation, std::string name, InputStream* inputStream) -> InputStream*{

        try {
            
    std::string key = AbKeys::getInstance()->getKey(abeClientInformation, name);;
    

    std::vector<int8_t> decrypted = this->abCryptUtil->decrypt(inputStream, key);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ByteArrayInputStream(decrypted);
    

                //: 
} catch(LicensingException& e) 
            {
this->showLicenseDialog(abeClientInformation, &e);
    
}

                //: 
 catch(Exception& e) 
            {
this->showLicenseDialog(abeClientInformation, &e);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto CryptService::showLicenseDialog(AbeClientInformationInterface* abeClientInformation, Exception* e) -> void{

        try {
            this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, e);
    

    BasicTextJDialog* basicTextJDialog = new BasicTextJDialog(e->message);;
    

        try {
            
    AbeLicenseInterface* abeLicenseInterface = AbeLicenseInterfaceFactory::getInstance()->getLicenseInstance(abeClientInformation);;
    

                        if(abeLicenseInterface != AbeNoLicense::getInstance())
                        
                                    {
                                    
                        if(abeLicenseInterface->isValid())
                        
                                    {
                                    basicTextJDialog->setText("Subscription Invalid");
    

                                    }
                                

                                    }
                                

                //: 
} catch(LicensingException& e2) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, &e2);
    
}

basicTextJDialog->addCloseListener(new ExitCloseListener());
    
basicTextJDialog->setVisible(true);
    

                //: 
} catch(Exception& e3) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, &e3);
    
}

}




        #endif //ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICE_CPP
