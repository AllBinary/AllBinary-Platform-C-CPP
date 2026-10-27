
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_HIERARCHY_CATEGORYHIERARCHYINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_HIERARCHY_CATEGORYHIERARCHYINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/business/category/CategoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CategoryHierarchyInterface {

    public: virtual int32_t getLevel() = 0;

    public: virtual std::string getLevelString() = 0;

    public: virtual CategoryInterface* getRoot() = 0;

    public: virtual CategoryInterface* getParent() = 0;

    public: virtual void setLevel(int32_t level) = 0;

    public: virtual void setRoot(CategoryInterface* categoryInterface) = 0;

    public: virtual void setParent(CategoryInterface* categoryInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_HIERARCHY_CATEGORYHIERARCHYINTERFACE_H
