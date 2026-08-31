
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

            #include "../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CategoryInterface: public TableMappingInterface, public ValidationInterface {
        

    Vector getChildNodes();

    bool addChildProperty(CategoryPropertiesInterface categoryPropertiesInterface);

    bool addChild(CategoryInterface categoryInterface);

    bool removeChild(CategoryInterface categoryInterface);

                //@Throws(Exception.constructor)
            
    bool isLeaf();

    CategoryPropertiesInterface getProperties();

    setProperties(CategoryPropertiesInterface categoryPropertiesInterface);

    CategoryHierarchyInterface getHierarchy();

    setHierarchy(CategoryHierarchyInterface categoryHierarchyInterface);

                //@Throws(Exception.constructor)
            
    AbPath getPath();

                //@Throws(Exception.constructor)
            
    AbPath getFilePath();

                //@Throws(Exception.constructor)
            
    AbPath getWebAppPath();

                //@Throws(Exception.constructor)
            
    AbPath getRootFilePath();

                //@Throws(Exception.constructor)
            
    log();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYINTERFACE_H
