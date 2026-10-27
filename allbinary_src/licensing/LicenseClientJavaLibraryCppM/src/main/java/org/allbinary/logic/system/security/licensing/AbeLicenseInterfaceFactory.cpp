
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABELICENSEINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABELICENSEINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/AbeLicenseInterfaceFactory.h"
        

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

auto AbeLicenseInterfaceFactory::SINGLETON_owner() -> AbeLicenseInterfaceFactory* { static std::unique_ptr<AbeLicenseInterfaceFactory> value(new AbeLicenseInterfaceFactory()); return value.get(); }
AbeLicenseInterfaceFactory* AbeLicenseInterfaceFactory::SINGLETON = AbeLicenseInterfaceFactory::SINGLETON_owner();

    auto AbeLicenseInterfaceFactory::getInstance() -> AbeLicenseInterfaceFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeLicenseInterfaceFactory::SINGLETON;
    
}


AbeLicenseInterfaceFactory::AbeLicenseInterfaceFactory() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}


                //@Throws(LicensingException.constructor)
            
    auto AbeLicenseInterfaceFactory::getLicenseInstance(AbeClientInformationInterface* abeClientInformation) -> AbeLicenseInterface*{

                        if(isTimeToGetKey())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->get(abeClientInformation);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->abeLicenseInterface;
    

                        }
                            
}


                //@Throws(LicensingException.constructor)
            
    auto AbeLicenseInterfaceFactory::get(AbeClientInformationInterface* abeClientInformation) -> AbeLicenseInterface*{

        try {
            this->logUtil->putF("Getting Keys", this, this->commonStrings->GET);
    
this->abeLicenseInterface= AbeNoLicense::getInstance();
    

    AbeLicenseClient* licenseClient = new AbeLicenseClient();;
    
this->abeLicenseInterface= licenseClient->get(abeClientInformation);
    

                        if(this->abeLicenseInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Default Key: ") +JavaString::valueOf(this->abeLicenseInterface->getKey(AbeClientInformationData::getInstance()->KEY)), this, this->commonStrings->GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->abeLicenseInterface;
    

                //: 
} catch(IOException& e) 
            {
this->logUtil->put("Licensing IO Error", this, this->commonStrings->GET, &e);
    



                            throw LicensingException("License Server Connection Error");
                    
}

                //: 
 catch(Exception& e) 
            {
this->logUtil->put("Licensing Failure", this, this->commonStrings->GET, &e);
    



                            throw LicensingException(JavaString::valueOf("Unknown License Failure: ") +JavaString::valueOf(this->getClass()->getName()));
                    
}

}


    auto AbeLicenseInterfaceFactory::isTimeToGetKey() -> bool{

    Calendar* calendar = Calendar::getInstance();;
    

    int64_t currentTime = calendar->getTimeInMillis();;
    

                        if(this->abeLicenseInterface == 
                                    nullptr
                                 || this->abeLicenseInterface == AbeNoLicense::getInstance() || !this->abeLicenseInterface->hasKey() || isCheck() || currentTime -checkPeriod > time)
                        
                                    {
                                    this->abeLicenseInterface= 
                                        nullptr
                                    ;
    
this->time= currentTime;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if()
                        
}


    auto AbeLicenseInterfaceFactory::setCheck(bool check) -> void{
this->check= check;
    
}


    auto AbeLicenseInterfaceFactory::isCheck() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->check;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABELICENSEINTERFACEFACTORY_CPP
