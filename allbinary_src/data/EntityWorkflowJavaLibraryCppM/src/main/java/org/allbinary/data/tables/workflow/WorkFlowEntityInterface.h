
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_WORKFLOW_WORKFLOWENTITYINTERFACE_H
        #define ORG_ALLBINARY_DATA_TABLES_WORKFLOW_WORKFLOWENTITYINTERFACE_H

            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
#include <org/allbinary/logic/control/workflow/WorkFlowInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WorkFlowEntityInterface: public BasicDataTableInterface {

    Vector get(std::string storeName);

                //@Throws(Exception.constructor, LicensingException.constructor)
            
    WorkFlowInterface get(std::string name, std::string storeName);

    void delete_(std::string name, std::string storeName);

    void insert(Vector values);

    void update(HashMap<any, any> updatedValues);

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_WORKFLOW_WORKFLOWENTITYINTERFACE_H
