
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PartnerIdentifierFileUtil
            : public Object
         {

    private: static PartnerIdentifierFileUtil* instance() { static std::unique_ptr<PartnerIdentifierFileUtil> value(new PartnerIdentifierFileUtil()); return value.get(); }

    public: static PartnerIdentifierFileUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PartnerIdentifierFileUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    public: const std::string FILE_NAME = "partner.txt";

    public: std::string get(){

        try {
            
    ResourceUtil* resourceUtil = ResourceUtil::getInstance();;
    

    std::string partnerString = StringUtil::getInstance()->EMPTY_STRING;;
    



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


};

            

