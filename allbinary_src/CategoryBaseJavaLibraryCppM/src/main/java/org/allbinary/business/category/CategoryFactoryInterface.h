
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

#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryInterface.h"

class CategoryFactoryInterface {

    CategoryInterface getRootInstance();

    CategoryInterface getRootInstance(AbPath categoryPath);

    CategoryInterface getRootInstanceFromNode(Node node);

    CategoryInterface getInstance(CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, std::string name);

    CategoryInterface getInstance(CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, Node node);

    CategoryInterface getInstance(CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, HashMap<any, any> categoryPropertiesHashMap);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYFACTORYINTERFACE_H
