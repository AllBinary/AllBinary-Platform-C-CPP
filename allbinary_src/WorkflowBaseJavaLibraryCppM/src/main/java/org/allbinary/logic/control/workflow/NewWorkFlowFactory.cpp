
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

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WorkFlowWrapper.h"
#include "WorkFlowInterface.h"

class NewWorkFlowFactory
            : public Object
         {

    private: static NewWorkFlowFactory instance() { return NewWorkFlowFactory(); }

    public: static NewWorkFlowFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NewWorkFlowFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: NewWorkFlowFactory(){
}


                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: WorkFlowInterface getInstance(AbeClientInformationInterface abeClientInformation, HashMap<Object*, Object*> hashMap, PageContext pageContext){

        try {
            
    std::string className = hashMap.get(DynamicObjectData::NAME);;
    

    std::vector<Object*> params = std::vector<Object*>(2);;
    

    std::vector<Class*> classes = std::vector<Class>(2);;
    
classes[0]= hashMap.getClass();
    
classes[1]= AbeFactory::getInstance().getClass();
    
params[0]= hashMap;
    
params[1]= pageContext;
    

    Object* anyType = AbeFactory::getInstance().getInstance(abeClientInformation, className, classes, params);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WorkFlowWrapper(anyType);
    

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


                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: WorkFlowInterface getInstance(AbeClientInformationInterface abeClientInformation, std::string className){

        try {
            
    StringUtil stringUtil = StringUtil::getInstance();;
    

                        if(true && className.compare(stringUtil.EMPTY_STRING) != 0)
                        
                                    {
                                    
    Object* anyType = AbeFactory::getInstance().getInstance(abeClientInformation, className, 
                            nullptr, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WorkFlowWrapper(anyType);
    

                                    }
                                
                             else 
                        if()
                        

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}
*/
}


};

            

