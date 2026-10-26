
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryHierarchyInterface.h"

class CategoryHierarchy
            : public Object
        : public CategoryHierarchyInterface {

    private: CategoryInterface rootCategoryInterface;

    private: CategoryInterface parentCategoryInterface;

    private: int32_t level;

public: CategoryHierarchy(CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface){
this->level= 0;
    
this->setRoot(rootCategoryInterface);
    
this->setParent(parentCategoryInterface);
    
}


public: CategoryHierarchy(CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, int32_t level){
this->level= level;
    
this->setRoot(rootCategoryInterface);
    
this->setParent(parentCategoryInterface);
    
}


public: CategoryHierarchy(CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, HashMap<Object*, Object*> categoryPropertiesHashMap){

    std::string levelString = StringUtil::getInstance().getNonNull(categoryPropertiesHashMap.get(CategoryData::getInstance().LEVEL));;
    
this->level= Integer::valueOf(levelString).intValue();
    
this->setRoot(rootCategoryInterface);
    
this->setParent(parentCategoryInterface);
    
}


    public: int32_t getLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->level;
    
}


    public: std::string getLevelString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return std::to_string(level);;
    
}


    public: void setLevel(int32_t level){
this->level= level;
    
}


    public: void setParent(CategoryInterface categoryInterface){
this->parentCategoryInterface= categoryInterface;
    
}


    public: void setRoot(CategoryInterface categoryInterface){
this->rootCategoryInterface= categoryInterface;
    
}


    public: CategoryInterface getRoot(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rootCategoryInterface;
    
}


    public: CategoryInterface getParent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->parentCategoryInterface;
    
}


};

            

