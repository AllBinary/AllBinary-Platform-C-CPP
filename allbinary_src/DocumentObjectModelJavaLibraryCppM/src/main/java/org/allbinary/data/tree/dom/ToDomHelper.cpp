
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_TODOMHELPER_CPP
        #define ORG_ALLBINARY_DATA_TREE_DOM_TODOMHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/dom/ToDomHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ToDomHelper::ToDomHelper(){
}


    auto ToDomHelper::convertNull(std::string value) -> std::string{

                        if(false)
                        
                                    {
                                    value= StringUtil::getInstance()->NULL_STRING;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    
}




        #endif //ORG_ALLBINARY_DATA_TREE_DOM_TODOMHELPER_CPP
