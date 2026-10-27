
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_INITINFO2_CPP
        #define ORG_ALLBINARY_BUSINESS_INIT_INITINFO2_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/init/InitInfo2.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

InitInfo2::InitInfo2() : directory(Directory::getInstance()) {
        }
        auto InitInfo2::instance_owner() -> InitInfo2* { static std::unique_ptr<InitInfo2> value(new InitInfo2()); return value.get(); }
InitInfo2* InitInfo2::instance = InitInfo2::instance_owner();

    auto InitInfo2::getInstance() -> InitInfo2*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InitInfo2::instance;
    
}


    auto InitInfo2::isTestHtmlPathValid(AbPath* value) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directory->create(value);;
    
}


    auto InitInfo2::isMainPathValid(AbPath* value) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directory->create(value);;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_INIT_INITINFO2_CPP
