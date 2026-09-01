
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

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreWorkFlowInterface.h"

class StoreTagWorkFlowFactory
            : public Object
         {

    private: static StoreTagWorkFlowFactory instance() { return StoreTagWorkFlowFactory(); }

    public: static StoreTagWorkFlowFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreTagWorkFlowFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: StoreTagWorkFlowFactory(){
}


                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: StoreWorkFlowInterface getInstance(AbeClientInformationInterface abeClientInformation, HashMap<any, any> propertiesHashMap, PageContext pageContext){

        try {
            
    std::string workFlowClassName = propertiesHashMap.get(DynamicObjectData::NAME) as string;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORY))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Creating WorkFlow: ");
    
stringBuffer.append(workFlowClassName);
    
stringBuffer.append("->");
    
stringBuffer.append(StoreTagWorkFlowFactory::instance.constructor.name.toString()!);
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(stringBuffer.toString(), this, commonStrings.GET_INSTANCE);
    

                                    }
                                

    std::vector<Object*> params = new Array(2);;
    

    std::vector<Function> classes = new Array(2);;
    
classes[0]= propertiesHashMap.constructor;
    
classes[1]= AbeFactory::getInstance().constructor;
    
params[0]= propertiesHashMap;
    
params[1]= pageContext;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeFactory::getInstance().getInstance(abeClientInformation, workFlowClassName, classes, params) as StoreWorkFlowInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    std::string workFlowClassName = propertiesHashMap.get(DynamicObjectData::NAME) as string;;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Error Creating WorkFlow: ");
    
stringBuffer.append(workFlowClassName);
    
stringBuffer.append("->");
    
stringBuffer.append(StoreTagWorkFlowFactory::instance.constructor.name.toString()!);
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(stringBuffer.toString(), this, commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    std::string workFlowClassName = propertiesHashMap.get(DynamicObjectData::NAME) as string;;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Error Creating WorkFlow: ");
    
stringBuffer.append(workFlowClassName);
    
stringBuffer.append("->");
    
stringBuffer.append(StoreTagWorkFlowFactory::instance.constructor.name.toString()!);
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(stringBuffer.toString(), this, commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}
*/
}


};

            

