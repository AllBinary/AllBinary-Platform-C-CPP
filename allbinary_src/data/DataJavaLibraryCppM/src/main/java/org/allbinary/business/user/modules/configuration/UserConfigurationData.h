
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONDATA_H
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONDATA_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UserConfigurationData
            : public Object
         {

    public: static const std::string NAME = "USER_CONFIGURATION_NAME";

    public: static const std::string UNCRYPTED_EXTENSION = CommonDataFileStrings::getInstance().UNCRYPTED_EXTENSION;

    public: static const std::string ENCRYPTED_EXTENSION = CommonDataFileStrings::getInstance().ENCRYPTED_EXTENSION;

private: UserConfigurationData();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONDATA_H
