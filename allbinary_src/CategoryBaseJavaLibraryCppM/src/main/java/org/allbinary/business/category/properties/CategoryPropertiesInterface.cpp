
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CategoryPropertiesInterface: public TableMappingInterface, public ValidationInterface {

    void setValue(std::string value)

    std::string getValue()

                //@Throws(Exception.constructor)
            
    AbPath getWebAppPath()

                //@Throws(Exception.constructor)
            
    AbPath getPath(CategoryHierarchyInterface categoryHierarchyInterface)

                //@Throws(Exception.constructor)
            
    std::string getFileName()

                //@Throws(Exception.constructor)
            
    bool isRoot()

                //@Throws(Exception.constructor)
            
    bool isRealRoot()

};

            

