
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/communication/http/request/NameSpaceRequestParams.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/includes/style/css/template/retail/CssStyleValidation.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/customizer/CustomizerUtil.h>

      
#include <views/business/context/modules/storefront/customizer/StoreCustomizerComponentUtil.h>

      
#include <views/business/context/modules/storefront/customizer/includes/style/css/CssCustomizerView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InsertCssValidationView: public CssCustomizerView, public ValidationComponentInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: InsertCssValidationView(TransformInfoInterface transformInfoInterface) : CssCustomizerView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    HashMap<Object*, Object*> requestHashMap = NameSpaceRequestParams(this->getPageContext()).toHashMap();;
    
this->styleValidationInterface= CssStyleValidation(requestHashMap);
    
}


                //@Throws(Exception.constructor)
            
    public: Document toXmlDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Boolean isValid(){

        try {
            
    Boolean isValid = Boolean::TRUE;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Started Validation", this, this->commonStrings.IS_VALID);
    

                                    }
                                

                        if(isValid == Boolean::TRUE)
                        
                                    {
                                    CustomizerUtil::getInstance().insert(this->getTransformInfoInterface(), this->styleValidationInterface);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isValid;
    

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


                //@Throws(Exception.constructor)
            
    public: std::string view(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreCustomizerComponentUtil::getInstance().generate(this->abeClientInformation, this->getTransformInfoInterface());;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "view()", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

