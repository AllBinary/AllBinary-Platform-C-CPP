
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ContextConfigurationData.h"
#include "ContextConfigurationView.h"
#include "ContextConfigurationInterface.h"
#include "ContextConfigurationPathUtil.h"

class ContextConfigurationInterfaceFactory
            : public Object
         {

    private: static ContextConfigurationInterfaceFactory instance() { return ContextConfigurationInterfaceFactory(); }

    public: static ContextConfigurationInterfaceFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ContextConfigurationInterfaceFactory::instance();
    
}


private: ContextConfigurationInterfaceFactory(){
}


                //@Throws(Exception.constructor)
            
    public: ContextConfigurationInterface getInstance(Document document){

    ContextConfigurationData contextConfigurationData = ContextConfigurationData::getInstance();;
    

    Node contextConfigurationNode = DomSearchHelper::getNode(contextConfigurationData.NAME, document.getChildNodes());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ContextConfigurationView(contextConfigurationNode).getContextConfigurationInterface() as ContextConfigurationInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: ContextConfigurationInterface getInstance(std::string contextName){

    AbPath abPath = ContextConfigurationPathUtil::getAbPath(contextName);;
    

    ContextConfigurationData contextConfigurationData = ContextConfigurationData::getInstance();;
    

    std::string documentString = CryptFileReader(contextConfigurationData.UNCRYPTED_EXTENSION, contextConfigurationData.ENCRYPTED_EXTENSION).get(abPath);;
    

    Document document = DomDocumentHelper::create(documentString);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getInstance(document);;
    
}


};

            

