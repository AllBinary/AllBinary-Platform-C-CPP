
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
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
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
        #include "WorkFlowInterface.h"

class TagWorkFlowFactory
            : public Object
         {

    private: static TagWorkFlowFactory instance() { return TagWorkFlowFactory(); }

    public: static TagWorkFlowFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TagWorkFlowFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: TagWorkFlowFactory(){
}


                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: WorkFlowInterface getInstance(AbeClientInformationInterface abeClientInformation, HashMap<Object*, Object*> propertiesHashMap, PageContext pageContext){

        try {
            
    std::string workFlowClassName = propertiesHashMap.get(DynamicObjectData::NAME);;
    

    std::vector<Object*> params = std::vector<Object*>(2);;
    

    std::vector<Class*> classes = std::vector<Class>(2);;
    
classes[0]= propertiesHashMap.getClass();
    
classes[1]= AbeFactory::getInstance().getClass();
    
params[0]= propertiesHashMap;
    
params[1]= pageContext;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeFactory::getInstance().getInstance(abeClientInformation, workFlowClassName, classes, params);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    std::string workFlowClassName = propertiesHashMap.get(DynamicObjectData::NAME);;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Failed To Get Instance: ");
    
stringBuffer.append(workFlowClassName);
    
stringBuffer.append("->");
    
stringBuffer.append(TagWorkFlowFactory::instance.constructor.name.toString());
    

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
                                    
    std::string workFlowClassName = propertiesHashMap.get(DynamicObjectData::NAME);;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Failed To Get Instance: ");
    
stringBuffer.append(workFlowClassName);
    
stringBuffer.append("->");
    
stringBuffer.append(TagWorkFlowFactory::instance.constructor.name.toString());
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(stringBuffer.toString(), this, commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}
*/
}


};

            

