
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
        
#include <org/allbinary/business/page/PageData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/StoreTransformer.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/bodies/GenericBodyValidation.h>

      
#include <org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h>

      
#include <org/apache/commons/lang3/StringEscapeUtils.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GenericBodyCustomizerView: public HttpStoreComponentView, public DomNodeInterface {

    private: static inline const std::string NAME = "None";

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: GenericBodyValidation* body;

public: GenericBodyCustomizerView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void addDomNodeInterfaces(){
this->addDomNodeInterface(dynamic_cast<DomNodeInterface*>(this->body));
    
this->addDomNodeInterface(dynamic_cast<DomNodeInterface*>(this));
    
}


                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document){

    std::string pageName = TransformTemplateCustomizerUtil::getInstance()->getPageNameHack(this->getTransformInfoInterface()->getName(), this->getWeblisketSession()->getStoreName());;
    

                        if(StringValidationUtil::getInstance()->isEmpty(pageName))
                        
                                    {
                                    pageName= GenericBodyCustomizerView::NAME;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNameValueNodes(document, PageData::getInstance()->NAME, pageName);;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string view(){

        try {
            this->addDomNodeInterfaces();
    

    std::string success = XmlDocumentHelper::toString(this->getDoc());;
    

    std::string result = (new StoreTransformer(this->abeClientInformation, this->getTransformInfoInterface()))->translate(success);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringEscapeUtils::unescapeHtml3(result);;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

