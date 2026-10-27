
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/admin/storefront/StoreFrontComponent.h"

class EditValidationStoreFrontView: public StoreFrontComponent, public ValidationComponentInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

public: EditValidationStoreFrontView(TransformInfoInterface* transformInfoInterface) : StoreFrontComponent(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: bool isValid(){

        try {
            
    bool valid = Boolean::TRUE;;
    

                        if(this->newStoreFrontInterface.isNameValid() == Boolean::FALSE)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(StoreFrontFactory::getInstance(this->newStoreFrontInterface.getName()) == 
                                    nullptr
                                )
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                
this->newStoreFrontInterface= StoreFrontFactory::getInstance(this->newStoreFrontInterface.getName());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return valid;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, this->commonStrings.IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    public: std::string validationInfo(){

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    

                        if(this->newStoreFrontInterface.isNameValid() == Boolean::FALSE)
                        
                                    {
                                    stringBuffer->append(this->newStoreFrontInterface.nameValidationInfo());
    

                                    }
                                

                        if(StoreFrontFactory::getInstance(this->newStoreFrontInterface.getName()) == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(this->newStoreFrontInterface +" does not exist.<br>");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Unkown Error";
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Form";
    
}

}


    public: Document* toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Node* toValidationInfoNode(Document* document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

