
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
        



        #ifndef ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYMESSAGEFACTORY_CPP
        #define ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYMESSAGEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thirdparty/store/ThirdPartyMessageFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ThirdPartyMessageFactory::ThirdPartyMessageFactory() {
        }
        auto ThirdPartyMessageFactory::instance_owner() -> ThirdPartyMessageFactory* { static std::unique_ptr<ThirdPartyMessageFactory> value(new ThirdPartyMessageFactory()); return value.get(); }
ThirdPartyMessageFactory* ThirdPartyMessageFactory::instance = ThirdPartyMessageFactory::instance_owner();

    auto ThirdPartyMessageFactory::getInstance() -> ThirdPartyMessageFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ThirdPartyMessageFactory::instance;
    
}




        #endif //ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYMESSAGEFACTORY_CPP
