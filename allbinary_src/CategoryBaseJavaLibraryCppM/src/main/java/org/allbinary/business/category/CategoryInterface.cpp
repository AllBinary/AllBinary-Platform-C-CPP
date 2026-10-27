
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CategoryInterface: public TableMappingInterface, public ValidationInterface {

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

            

