
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ContextConfigurationInterface.h"
#include "ContextConfigurationView.h"

class ContextConfigurationDomDocumentMapping
            : public Object
        : public DomDocumentMappingInterface {

    private: ContextConfigurationInterface contextConfigurationInterface;

public: ContextConfigurationDomDocumentMapping(ContextConfigurationInterface contextConfigurationInterface){
this->contextConfigurationInterface= contextConfigurationInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: Document toXmlDoc(){

    Document document = DomDocumentHelper::create();;
    

    Node node = ContextConfigurationView(this->contextConfigurationInterface).toXmlNode(document);;
    
document.appendChild(node);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string toDomDocumentString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return XmlDocumentHelper::toString(this->toXmlDoc());;
    
}


};

            

