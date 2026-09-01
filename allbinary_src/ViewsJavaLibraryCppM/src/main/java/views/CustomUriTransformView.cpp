
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
        



            #include "../java/lang/Object.h"
        
            #include "../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInfoCustomUriTransformer.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentFactory.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CustomUriTransformView
            : public Object
        : public TransformInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: TransformInfoInterface transformInfoInterface;

    private: TransformDocumentInterface transformDocumentInterface;

public: CustomUriTransformView(TransformInfoInterface transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("View Name: " +transformInfoInterface.getName(), this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
this->setTransformInfoInterface(transformInfoInterface);
    
this->setTransformDocumentInterface(TransformDocumentFactory::getInstance());
    
}


    public: int32_t NO_TYPE = 0;

    public: int32_t getTypeId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NO_TYPE;
    
}


    public: TransformInfoInterface getTransformInfoInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->transformInfoInterface;
    
}


    public: void setTransformInfoInterface(TransformInfoInterface transformInfoInterface){
this->transformInfoInterface= transformInfoInterface;
    
}


    public: TransformDocumentInterface getTransformDocumentInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->transformDocumentInterface;
    
}


    public: void setTransformDocumentInterface(TransformDocumentInterface transformDocumentInterface){
this->transformDocumentInterface= transformDocumentInterface;
    
}


    public: Document toXmlDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->transformDocumentInterface.getDoc();;
    
}


                //@Throws(Exception.constructor)
            
    public: Document getDoc(){

    Document document = this->getTransformInfoInterface().getDataDocument();;
    

    Node dataNode = this->getTransformDocumentInterface().getDoc().importNode(document.getFirstChild(), true);;
    

                        if(dataNode != 
                                    nullptr
                                )
                        
                                    {
                                    this->getTransformDocumentInterface().getBaseNode().appendChild(dataNode);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTransformDocumentInterface().getDoc();;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string view(){

        try {
            
    std::string success = DomDocumentHelper::toString(this->getDoc());;
    

    std::string result = TransformInfoCustomUriTransformer(this->abeClientInformation, this->getTransformInfoInterface()).translate(success);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "view()", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

