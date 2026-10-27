
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYFACTORYINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYFACTORYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/util/HashMap.h>
class AbPath;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CategoryInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryFactoryInterface
            : public virtual Object
         {

    public: virtual CategoryInterface* getRootInstance() = 0;

    public: virtual CategoryInterface* getRootInstance(AbPath* categoryPath) = 0;

    public: virtual CategoryInterface* getRootInstanceFromNode(Node* node) = 0;

    public: virtual CategoryInterface* getInstance(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, std::string name) = 0;

    public: virtual CategoryInterface* getInstance(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, Node* node) = 0;

    public: virtual CategoryInterface* getInstance(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, HashMap<Object*, Object*>* categoryPropertiesHashMap) = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYFACTORYINTERFACE_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/category/CategoryInterface.h")
#include "org/allbinary/business/category/CategoryInterface.h"
#endif

        #endif
    
