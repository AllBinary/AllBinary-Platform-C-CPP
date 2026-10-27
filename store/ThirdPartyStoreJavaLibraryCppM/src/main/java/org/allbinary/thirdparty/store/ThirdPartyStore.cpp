
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
        



        #ifndef ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYSTORE_CPP
        #define ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYSTORE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thirdparty/store/ThirdPartyStore.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ThirdPartyStore::ThirdPartyStore(std::string name){
this->name= name;
    
}


    auto ThirdPartyStore::authorize(AbeClientInformationInterface* clientInformationInterface) -> void{
}


    auto ThirdPartyStore::isAuthorized() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->authorized;
    
}


    auto ThirdPartyStore::setAuthorized(bool authorized) -> void{
this->authorized= authorized;
    
}


    auto ThirdPartyStore::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}




        #endif //ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYSTORE_CPP
