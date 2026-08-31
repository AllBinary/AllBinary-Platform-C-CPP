
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_HIERARCHY_CATEGORYHIERARCHY_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_HIERARCHY_CATEGORYHIERARCHY_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryHierarchyInterface.h"

class CategoryHierarchy
            : public Object
        : public CategoryHierarchyInterface {
        

    private: rootCategoryInterface: CategoryInterface;

    private: parentCategoryInterface: CategoryInterface;

    private: level: int32_t;

public constructor (CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface);

public constructor (CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, int32_t level);

public constructor (CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, HashMap<any, any> categoryPropertiesHashMap);

    public int32_t getLevel();

    public string getLevelString();

    public setLevel(int32_t level);

    public setParent(CategoryInterface categoryInterface);

    public setRoot(CategoryInterface categoryInterface);

    public CategoryInterface getRoot();

    public CategoryInterface getParent();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_HIERARCHY_CATEGORYHIERARCHY_H
