
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>
class CategoryData;
class CategoryInterface;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryHierarchy
            : public virtual Object
        , public CategoryHierarchyInterface {

    private: CategoryInterface* rootCategoryInterface;

    private: CategoryInterface* parentCategoryInterface;

    private: int32_t level;

public: CategoryHierarchy(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface);

public: CategoryHierarchy(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, int32_t level);

public: CategoryHierarchy(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, HashMap<Object*, Object*>* categoryPropertiesHashMap);

    public: int32_t getLevel();

    public: std::string getLevelString();

    public: void setLevel(int32_t level);

    public: void setParent(CategoryInterface* categoryInterface);

    public: void setRoot(CategoryInterface* categoryInterface);

    public: CategoryInterface* getRoot();

    public: CategoryInterface* getParent();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_HIERARCHY_CATEGORYHIERARCHY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_HIERARCHY_CATEGORYHIERARCHY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_HIERARCHY_CATEGORYHIERARCHY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryData.h>)
#include <org/allbinary/business/category/CategoryData.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryInterface.h>)
#include <org/allbinary/business/category/CategoryInterface.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h")
#include "org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h"
#endif

        #endif
    
