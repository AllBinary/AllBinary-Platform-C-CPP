
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CategoryHierarchyInterface;
#include <org/allbinary/data/tables/TableMappingInterface.h>
#include <org/allbinary/logic/control/validate/ValidationInterface.h>
class AbPath;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryPropertiesInterface: public TableMappingInterface, public ValidationInterface {

    public: virtual void setValue(std::string value) = 0;

    public: virtual std::string getValue() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual AbPath* getWebAppPath() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual AbPath* getPath(CategoryHierarchyInterface* categoryHierarchyInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string getFileName() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual bool isRoot() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual bool isRealRoot() = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>)
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>
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
    
