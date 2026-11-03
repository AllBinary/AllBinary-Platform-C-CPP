
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOMNODELISTHELPER_CPP
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOMNODELISTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/dom/DomNodeListHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tree/dom/DomNodeHelper.h"


DomNodeListHelper::DomNodeListHelper() {
        }
        
    auto DomNodeListHelper::getVector(NodeList* nodeList) -> BasicArrayList*{

    BasicArrayList* vector = new BasicArrayListD();;
    

    int32_t size = nodeList->getLength();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
vector->add(DomNodeHelper::getTextNodeValue(nodeList->item(index)));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return vector;
    
}




        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOMNODELISTHELPER_CPP
