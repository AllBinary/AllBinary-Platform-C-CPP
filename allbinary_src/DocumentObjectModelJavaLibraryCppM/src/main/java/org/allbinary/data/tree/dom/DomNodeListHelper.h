
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOMNODELISTHELPER_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOMNODELISTHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicArrayList;
class BasicArrayListD;

class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DomNodeHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DomNodeListHelper
            : public virtual Object
         {

    public: static BasicArrayList* getVector(NodeList* nodeList);


            
    public: DomNodeListHelper();
        
};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOMNODELISTHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_DOM_DOMNODELISTHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOMNODELISTHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif
#if __has_include("org/allbinary/data/tree/dom/DomNodeHelper.h")
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#endif

        #endif
    
