
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
        



        #ifndef ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYSTOREFACTORY_CPP
        #define ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYSTOREFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thirdparty/store/ThirdPartyStoreFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thirdparty/store/NoThirdPartyStore.h"
#include "org/allbinary/thirdparty/store/ThirdPartyStore.h"

auto ThirdPartyStoreFactory::instance_owner() -> NoThirdPartyStore* { static std::unique_ptr<NoThirdPartyStore> value(new NoThirdPartyStore()); return value.get(); }
NoThirdPartyStore* ThirdPartyStoreFactory::instance = ThirdPartyStoreFactory::instance_owner();

    auto ThirdPartyStoreFactory::getInstance() -> ThirdPartyStore*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ThirdPartyStoreFactory::instance;
    
}


ThirdPartyStoreFactory::ThirdPartyStoreFactory(){
}




        #endif //ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYSTOREFACTORY_CPP
