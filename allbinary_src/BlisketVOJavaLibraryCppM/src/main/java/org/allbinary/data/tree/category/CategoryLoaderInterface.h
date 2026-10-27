
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADERINTERFACE_H
        #define ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADERINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class CategoryInterface;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tree/category/CategoryModifierTreeInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryLoaderInterface: public CategoryModifierTreeInterface {

    public: virtual Document* getDoc(CategoryInterface* categoryInterface) = 0;

    public: virtual CategoryInterface* get(CategoryInterface* categoryInterface) = 0;

    public: virtual CategoryInterface* getAll(CategoryInterface* categoryInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADERINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADERINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADERINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/business/category/CategoryInterface.h>)
#include <org/allbinary/business/category/CategoryInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include("org/allbinary/data/tree/category/CategoryModifierTreeInterface.h")
#include "org/allbinary/data/tree/category/CategoryModifierTreeInterface.h"
#endif

        #endif
    
