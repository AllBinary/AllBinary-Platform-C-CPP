
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_DBWORKFLOWFACTORY_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_DBWORKFLOWFACTORY_H

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WorkFlowWrapper.h"
#include "WorkFlowInterface.h"

class DbWorkFlowFactory
            : public Object
         {

    private: static DbWorkFlowFactory instance() { return DbWorkFlowFactory(); }

    public: static DbWorkFlowFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: DbWorkFlowFactory();

                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: WorkFlowInterface getInstance(AbeClientInformationInterface abeClientInformation, HashMap<any, any> hashMap);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_DBWORKFLOWFACTORY_H
