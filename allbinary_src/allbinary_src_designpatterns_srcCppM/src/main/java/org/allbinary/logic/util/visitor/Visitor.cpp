
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITOR_CPP
        #define ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/util/visitor/Visitor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/visitor/VisitorInterface.h"


Visitor::Visitor() : nullUtil(NullUtil::getInstance()) {
        }
        auto Visitor::instance_owner() -> Visitor* { static std::unique_ptr<Visitor> value(new Visitor()); return value.get(); }
Visitor* Visitor::instance = Visitor::instance_owner();

    auto Visitor::visit(Object* anyType) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(this->nullUtil->NULL_OBJECT);
    
}


    auto Visitor::getInstance() -> Visitor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Visitor::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITOR_CPP
