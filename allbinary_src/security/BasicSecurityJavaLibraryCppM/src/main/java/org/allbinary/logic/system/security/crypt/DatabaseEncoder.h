
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_DATABASEENCODER_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_DATABASEENCODER_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/tokens/Tokenizer.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DatabaseEncoder
            : public Object
         {

    public: static std::string encode(std::vector<int8_t> value);

    public: static std::vector<int8_t> decode(std::string value);

private: DatabaseEncoder();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_DATABASEENCODER_H
