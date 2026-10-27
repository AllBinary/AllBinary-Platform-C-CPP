
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMS_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/os/OperatingSystems.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto OperatingSystems::instance_owner() -> OperatingSystems* { static std::unique_ptr<OperatingSystems> value(new OperatingSystems()); return value.get(); }
OperatingSystems* OperatingSystems::instance = OperatingSystems::instance_owner();

OperatingSystems::OperatingSystems() : ANDROID(this->LINUX){
}


    auto OperatingSystems::isUnknownSpecificOSAllowed() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->unknownSpecificOSAllowed;
    
}


    auto OperatingSystems::setUnknownSpecificOSAllowed(bool aUnknownSpecificOSAllowed) -> void{
this->unknownSpecificOSAllowed= aUnknownSpecificOSAllowed;
    
}


    auto OperatingSystems::getInstance() -> OperatingSystems*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OperatingSystems::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMS_CPP
