
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
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/HttpContextView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AddValidationStoreFrontView: public HttpContextView, public ValidationComponentInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: StoreFrontInterface* newStoreFrontInterface;

public: AddValidationStoreFrontView(TransformInfoInterface* transformInfoInterface) : HttpContextView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->newStoreFrontInterface= dynamic_cast<StoreFrontInterface*>(new StoreFront(dynamic_cast<HttpServletRequest*>(this->getPageContext()->getRequest())));
    

                        if(false)
                        this->newStoreFrontInterface->setName(this->getWeblisketSession()->getStoreName());
                                
}


    public: bool isValid(){

        try {
            
    bool valid = Boolean::TRUE;;
    

                        if(this->newStoreFrontInterface->isValid() == Boolean::FALSE)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(StoreFrontFactory::getInstance(this->newStoreFrontInterface->getName()) != 
                                    nullptr
                                )
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(AbFile::createAbFileFromAbPath(new AbPath(this->getStoreViewsPath(), StringUtil::getInstance()->EMPTY_STRING))->isFile())
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                



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


                //@Throws(Exception.constructor)
            
    private: std::string getStoreViewsPath(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getMainPath());
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH);
    
stringBuffer->append(this->newStoreFrontInterface->getName());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    public: std::string validationInfo(){

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    

                        if(this->newStoreFrontInterface->isValid() == Boolean::FALSE)
                        
                                    {
                                    stringBuffer->append(this->newStoreFrontInterface->validationInfo());
    

                                    }
                                

                        if(StoreFrontFactory::getInstance(this->newStoreFrontInterface->getName()) != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append("Store name already used<br/>");
    

                                    }
                                

                        if(AbFile::createAbFileFromAbPath(new AbPath(this->getStoreViewsPath(), StringUtil::getInstance()->EMPTY_STRING))->isFile())
                        
                                    {
                                    stringBuffer->append("Store name clashes with template name<br/>");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

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


                //@Throws(Exception.constructor)
            
    public: std::string view(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return views.ValidationOnlyTempUtil.getInstance()->view(this);;
    
}


};

            

