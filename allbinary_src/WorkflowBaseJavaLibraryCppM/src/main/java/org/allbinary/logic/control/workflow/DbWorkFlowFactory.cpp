
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

    public: static DbWorkFlowFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DbWorkFlowFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: DbWorkFlowFactory(){
}


                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: WorkFlowInterface getInstance(AbeClientInformationInterface abeClientInformation, HashMap<any, any> hashMap){

        try {
            
    std::string className = hashMap.get(DynamicObjectData::NAME) as string;;
    

    std::vector<Object*> params = new Array(1);;
    

    std::vector<Function> classes = new Array(1);;
    
classes[0]= hashMap.constructor;
    
params[0]= hashMap;
    

    Object* anyType = AbeFactory::getInstance().getInstance(abeClientInformation, className, classes, params);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WorkFlowWrapper(anyType) as WorkFlowInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "getInstance(HashMap)", e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "getInstance(HashMap)", e);
    

                                    }
                                



                            throw e;
                    
}
*/
}


};

            

