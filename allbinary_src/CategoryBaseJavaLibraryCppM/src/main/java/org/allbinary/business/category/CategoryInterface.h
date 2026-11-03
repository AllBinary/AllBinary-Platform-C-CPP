
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class BasicArrayList;

class CategoryHierarchyInterface;
class CategoryPropertiesInterface;
#include <org/allbinary/data/tables/TableMappingInterface.h>
#include <org/allbinary/logic/control/validate/ValidationInterface.h>
class AbPath;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryInterface: public virtual TableMappingInterface, public virtual ValidationInterface {

    public: virtual BasicArrayList* getChildNodes() = 0;

    public: virtual bool addChildProperty(CategoryPropertiesInterface* categoryPropertiesInterface) = 0;

    public: virtual bool addChild(CategoryInterface* categoryInterface) = 0;

    public: virtual bool removeChild(CategoryInterface* categoryInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual bool isLeaf() = 0;

    public: virtual CategoryPropertiesInterface* getProperties() = 0;

    public: virtual void setProperties(CategoryPropertiesInterface* categoryPropertiesInterface) = 0;

    public: virtual CategoryHierarchyInterface* getHierarchy() = 0;

    public: virtual void setHierarchy(CategoryHierarchyInterface* categoryHierarchyInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual AbPath* getPath() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual AbPath* getFilePath() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual AbPath* getWebAppPath() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual AbPath* getRootFilePath() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void log() = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>)
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/properties/CategoryPropertiesInterface.h>)
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>
#endif
#if __has_include(<org/allbinary/data/tables/TableMappingInterface.h>)
#include <org/allbinary/data/tables/TableMappingInterface.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/ValidationInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif

        #endif
    
