
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_STOREAPPCLIENTINFORMATION_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_STOREAPPCLIENTINFORMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/StoreAppClientInformation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/thirdparty/store/LongArrayIdentifierInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/AbeClientInformation.h"


StoreAppClientInformation::StoreAppClientInformation(std::string name, std::string version, std::string specialName, std::string shortName, std::vector<int64_t> longArrayIdentifier) : AbeClientInformation(name, version, specialName, shortName){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->longArrayIdentifier= longArrayIdentifier;
    
}


    auto StoreAppClientInformation::getLongArrayIdentifier() -> std::vector<int64_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->longArrayIdentifier;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_STOREAPPCLIENTINFORMATION_CPP
