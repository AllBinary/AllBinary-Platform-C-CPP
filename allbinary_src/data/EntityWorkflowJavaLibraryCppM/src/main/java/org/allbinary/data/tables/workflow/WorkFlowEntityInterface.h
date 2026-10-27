
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
#include <org/allbinary/logic/control/workflow/WorkFlowInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WorkFlowEntityInterface: public BasicDataTableInterface {

    public: virtual BasicArrayList* get(std::string storeName) = 0;

                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: virtual WorkFlowInterface* get(std::string name, std::string storeName) = 0;

    public: virtual void delete_(std::string name, std::string storeName) = 0;

    public: virtual void insert(BasicArrayList* values) = 0;

    public: virtual void update(HashMap<Object*, Object*>* updatedValues) = 0;

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_WORKFLOW_WORKFLOWENTITYINTERFACE_H
