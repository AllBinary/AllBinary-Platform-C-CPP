
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PARTNERIDENTIFIERFILEUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PARTNERIDENTIFIERFILEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/PartnerIdentifierFileUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <java/io/InputStreamReader.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PartnerIdentifierFileUtil::PartnerIdentifierFileUtil() : logUtil(LogUtil::getInstance()) {
        }
        auto PartnerIdentifierFileUtil::instance_owner() -> PartnerIdentifierFileUtil* { static std::unique_ptr<PartnerIdentifierFileUtil> value(new PartnerIdentifierFileUtil()); return value.get(); }
PartnerIdentifierFileUtil* PartnerIdentifierFileUtil::instance = PartnerIdentifierFileUtil::instance_owner();

    auto PartnerIdentifierFileUtil::getInstance() -> PartnerIdentifierFileUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PartnerIdentifierFileUtil::instance;
    
}


    auto PartnerIdentifierFileUtil::get() -> std::string{

        try {
            
    ResourceUtil* resourceUtil = ResourceUtil::getInstance();;
    

    InputStream* inputStream = resourceUtil->getResourceAsStream(this->FILE_NAME);;
    

    InputStreamReader* inputStreamReader = new InputStreamReader(inputStream);;
    

    std::vector<char> chars = std::vector<char>(30);;
    

    int32_t size = inputStreamReader->read(chars);;
    

    std::string partnerString = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(size > 0)
                        
                                    {
                                    partnerString= JavaString::fromChars(chars, 0, size);
    

                                    }
                                
inputStreamReader->close();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return partnerString;
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->NULL_STRING;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PARTNERIDENTIFIERFILEUTIL_CPP
