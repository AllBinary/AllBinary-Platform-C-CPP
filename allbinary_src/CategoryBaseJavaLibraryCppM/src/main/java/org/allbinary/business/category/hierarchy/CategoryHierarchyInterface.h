
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class CategoryInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryHierarchyInterface
            : public virtual Object
         {

    public: virtual int32_t getLevel() = 0;

    public: virtual std::string getLevelString() = 0;

    public: virtual CategoryInterface* getRoot() = 0;

    public: virtual CategoryInterface* getParent() = 0;

    public: virtual void setLevel(int32_t level) = 0;

    public: virtual void setRoot(CategoryInterface* categoryInterface) = 0;

    public: virtual void setParent(CategoryInterface* categoryInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_HIERARCHY_CATEGORYHIERARCHYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_HIERARCHY_CATEGORYHIERARCHYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_HIERARCHY_CATEGORYHIERARCHYINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/business/category/CategoryInterface.h>)
#include <org/allbinary/business/category/CategoryInterface.h>
#endif

        #endif
    
