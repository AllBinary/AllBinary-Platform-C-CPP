
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
        
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/control/workflow/NewWorkFlowFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WorkFlowView.h"

class NewView: public WorkFlowView, public ValidationComponentInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

public: NewView(TransformInfoInterface transformInfoInterface) : WorkFlowView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    TransformInfoHttpInterface httpTransformInfoInterface = this->getTransformInfoInterface();;
    
this->workFlowInterface= NewWorkFlowFactory::getInstance().getInstance(this->abeClientInformation, httpTransformInfoInterface.getPropertiesHashMap().get(DynamicObjectData::NAME));
    
}


    public: Boolean isValid(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put("Failed to validate", this, this->commonStrings.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    public: std::string validationInfo(){

        try {
            
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Please Contact Administrator");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put("Failed to generate validation error info", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Getting Validation Info";
    
}

}


    public: Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

