
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTINFORMATIONDATA_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTINFORMATIONDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/AbeClientInformationData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto AbeClientInformationData::instance_owner() -> AbeClientInformationData* { static std::unique_ptr<AbeClientInformationData> value(new AbeClientInformationData()); return value.get(); }
AbeClientInformationData* AbeClientInformationData::instance = AbeClientInformationData::instance_owner();

    auto AbeClientInformationData::getInstance() -> AbeClientInformationData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeClientInformationData::instance;
    
}


AbeClientInformationData::AbeClientInformationData(){
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTINFORMATIONDATA_CPP
