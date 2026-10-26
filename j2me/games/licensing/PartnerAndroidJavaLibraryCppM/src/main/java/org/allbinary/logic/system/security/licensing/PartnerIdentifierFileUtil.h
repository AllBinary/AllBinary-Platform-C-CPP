
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PARTNERIDENTIFIERFILEUTIL_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PARTNERIDENTIFIERFILEUTIL_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <java/io/InputStreamReader.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PartnerIdentifierFileUtil
            : public Object
         {

    private: static PartnerIdentifierFileUtil instance() { return PartnerIdentifierFileUtil(); }

    public: static PartnerIdentifierFileUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: const std::string FILE_NAME = "partner.txt";

    public: std::string get();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PARTNERIDENTIFIERFILEUTIL_H
