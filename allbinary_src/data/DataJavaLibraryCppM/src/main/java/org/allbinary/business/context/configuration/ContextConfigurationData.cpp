
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
        
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ContextConfigurationData
            : public Object
         {

    private: static ContextConfigurationData* instance() { static std::unique_ptr<ContextConfigurationData> value(new ContextConfigurationData()); return value.get(); }

    public: static ContextConfigurationData* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ContextConfigurationData::instance();
    
}


private: ContextConfigurationData(){
}


    public: const std::string NAME = "CONTEXT_CONFIGURATION_NAME";

    public: const std::string UNCRYPTED_EXTENSION = CommonDataFileStrings::getInstance()->UNCRYPTED_EXTENSION;

    public: const std::string ENCRYPTED_EXTENSION = CommonDataFileStrings::getInstance()->ENCRYPTED_EXTENSION;

};

            

