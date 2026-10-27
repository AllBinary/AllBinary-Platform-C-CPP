
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MEUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_MEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/MEUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Item.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Handle the differences in the public platform vs the raw JS build

MEUtil::MEUtil() {
        }
        
    auto MEUtil::getInstance() -> MEUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MEUtil::instance;
    
}

auto MEUtil::instance_owner() -> MEUtil* { static std::unique_ptr<MEUtil> value(new MEUtil()); return value.get(); }
MEUtil* MEUtil::instance = MEUtil::instance_owner();

    auto MEUtil::appendItem(CommandForm* form, Item* item) -> void{
form->append(item);
    
}




        #endif //ORG_ALLBINARY_LOGIC_MEUTIL_CPP
