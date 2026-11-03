
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_HIERARCHY_CATEGORYHIERARCHY_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_HIERARCHY_CATEGORYHIERARCHY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/hierarchy/CategoryHierarchy.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h"


CategoryHierarchy::CategoryHierarchy(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface){
this->level= 0;
    
this->setRoot(rootCategoryInterface);
    
this->setParent(parentCategoryInterface);
    
}


CategoryHierarchy::CategoryHierarchy(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, int32_t level){
this->level= level;
    
this->setRoot(rootCategoryInterface);
    
this->setParent(parentCategoryInterface);
    
}


CategoryHierarchy::CategoryHierarchy(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, HashMap<Object*, Object*>* categoryPropertiesHashMap){

    std::string levelString = StringUtil::getInstance()->getNonNull(JavaBoxes::unbox<std::string>(categoryPropertiesHashMap->get(CategoryData::getInstance()->LEVEL)));;
    
this->level= JavaBoxes::value<int32_t>(Integer.valueOf(levelString));
    
this->setRoot(rootCategoryInterface);
    
this->setParent(parentCategoryInterface);
    
}


    auto CategoryHierarchy::getLevel() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->level;
    
}


    auto CategoryHierarchy::getLevelString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return std::to_string(this->level);;
    
}


    auto CategoryHierarchy::setLevel(int32_t level) -> void{
this->level= level;
    
}


    auto CategoryHierarchy::setParent(CategoryInterface* categoryInterface) -> void{
this->parentCategoryInterface= categoryInterface;
    
}


    auto CategoryHierarchy::setRoot(CategoryInterface* categoryInterface) -> void{
this->rootCategoryInterface= categoryInterface;
    
}


    auto CategoryHierarchy::getRoot() -> CategoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rootCategoryInterface;
    
}


    auto CategoryHierarchy::getParent() -> CategoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->parentCategoryInterface;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_HIERARCHY_CATEGORYHIERARCHY_CPP
