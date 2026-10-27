
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
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
