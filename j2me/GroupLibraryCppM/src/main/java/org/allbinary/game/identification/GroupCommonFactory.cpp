
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPCOMMONFACTORY_CPP
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPCOMMONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/identification/GroupCommonFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GroupCommonFactory::GroupCommonFactory() : ID(SmallIntegerSingletonFactory::getInstance()->getAt(10)) {
        }
        Object* GroupCommonFactory::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto GroupCommonFactory::getInstance() -> GroupCommonFactory*{

                        if(GroupCommonFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    GroupCommonFactory::instance= new GroupCommonFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GroupCommonFactory*>(GroupCommonFactory::instance);
    
}




        #endif //ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPCOMMONFACTORY_CPP
