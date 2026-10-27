
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/CategoryInterface.h"

class CategoryFactoryInterface {

    public: virtual CategoryInterface* getRootInstance() = 0;

    public: virtual CategoryInterface* getRootInstance(AbPath* categoryPath) = 0;

    public: virtual CategoryInterface* getRootInstanceFromNode(Node* node) = 0;

    public: virtual CategoryInterface* getInstance(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, std::string name) = 0;

    public: virtual CategoryInterface* getInstance(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, Node* node) = 0;

    public: virtual CategoryInterface* getInstance(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, HashMap<Object*, Object*>* categoryPropertiesHashMap) = 0;

};

            

