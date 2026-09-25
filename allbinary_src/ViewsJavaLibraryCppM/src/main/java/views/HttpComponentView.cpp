
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
        



            #include "../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/BasicTransformer.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformHttpRequestDocumentFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpComposite.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HttpComponentView: public TransformInfoHttpComposite, public TransformInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: BasicArrayList domNodeInterfaceVector;

    private: TransformDocumentInterface transformDocumentInterface;

public: HttpComponentView(TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("View Name: " +transformInfoInterface.getName(), this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
this->domNodeInterfaceVector= BasicArrayListD();
    
this->setTransformDocumentInterface(TransformHttpRequestDocumentFactory::getInstance(this->getPageContext(), this->getWeblisketSession()));
    
}


    public: int32_t NO_TYPE = 0;

    public: int32_t getTypeId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NO_TYPE;
    
}


    public: TransformDocumentInterface getTransformDocumentInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->transformDocumentInterface;
    
}


    public: void setTransformDocumentInterface(TransformDocumentInterface transformDocumentInterface){
this->transformDocumentInterface= transformDocumentInterface;
    
}


    public: void addDomNodeInterface(DomNodeInterface domNodeInterface){
this->domNodeInterfaceVector.add(domNodeInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: Document toXmlDoc(){

        try {
            
    int32_t size = this->domNodeInterfaceVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    DomNodeInterface domNodeInterface = this->domNodeInterfaceVector.get(index) as DomNodeInterface;;
    
this->transformDocumentInterface.getBaseNode().appendChild(domNodeInterface.toXmlNode(this->transformDocumentInterface.getDoc()));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTransformDocumentInterface().getDoc();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "toXmlDoc()", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: Document getDoc(){

    Document document = this->getTransformInfoInterface().getDataDocument();;
    

    Node node = DomNodeHelper::getFirstChildElement(document);;
    

                        if(node != 
                                    nullptr
                                )
                        
                                    {
                                    
    Node dataNode = this->getTransformDocumentInterface().getDoc().importNode(node, true);;
    

                        if(dataNode != 
                                    nullptr
                                )
                        
                                    {
                                    this->getTransformDocumentInterface().getBaseNode().appendChild(dataNode);
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTransformDocumentInterface().getDoc();;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string view(){

        try {
            this->toXmlDoc();
    

    std::string success = DomDocumentHelper::toString(this->getDoc());;
    

    std::string result = BasicTransformer(this->abeClientInformation, this->getTransformInfoInterface()).translate(success);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

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

            

