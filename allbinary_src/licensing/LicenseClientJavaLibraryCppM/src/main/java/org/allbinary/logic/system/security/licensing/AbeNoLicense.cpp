
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABENOLICENSE_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABENOLICENSE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/AbeNoLicense.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h"
#include "org/allbinary/logic/system/security/licensing/LicenseTypeFactory.h"
#include "org/allbinary/logic/system/security/licensing/LicenseType.h"

auto AbeNoLicense::abeNoLicense_owner() -> AbeNoLicense* { static std::unique_ptr<AbeNoLicense> value(new AbeNoLicense()); return value.get(); }
AbeNoLicense* AbeNoLicense::abeNoLicense = AbeNoLicense::abeNoLicense_owner();

AbeNoLicense::AbeNoLicense() : serverVector(new BasicArrayListD()){
}


    auto AbeNoLicense::getInstance() -> AbeNoLicense*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeNoLicense::abeNoLicense;
    
}


    auto AbeNoLicense::hasKey() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto AbeNoLicense::getKey(std::string keyName) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto AbeNoLicense::getLicenseId() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto AbeNoLicense::getSpecial() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto AbeNoLicense::getServers() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->serverVector;
    
}


    auto AbeNoLicense::isValid() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto AbeNoLicense::getLicenseType() -> LicenseType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LicenseTypeFactory::getInstance()->UNKNOWN;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABENOLICENSE_CPP
