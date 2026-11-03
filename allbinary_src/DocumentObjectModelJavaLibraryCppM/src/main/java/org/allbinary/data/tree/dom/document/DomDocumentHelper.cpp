
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTHELPER_CPP
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/io/InputStream.h>

      
#include <java/io/StringBufferInputStream.h>

      
#include <javax/xml/parsers/DocumentBuilder.h>

      
#include <javax/xml/parsers/DocumentBuilderFactory.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DomDocumentHelper::DomDocumentHelper(){
}


    auto DomDocumentHelper::init() -> void{

    CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings::getInstance();;
    
System.setProperty("jdk.xml.maxElementDepth", commonPhoneStrings->ZERO);
    
System.setProperty("jdk.xml.xpathExprOpLimit", commonPhoneStrings->ZERO);
    
System.setProperty("jdk.xml.xpathTotalOpLimit", commonPhoneStrings->ZERO);
    

    std::string LIMIT = "500000";;
    
System.setProperty("jdk.xml.maxGeneralEntitySizeLimit", LIMIT);
    
System.setProperty("jdk.xml.totalEntitySizeLimit", LIMIT);
    
}


    auto DomDocumentHelper::create() -> Document*{

        try {
            
    DocumentBuilderFactory* factory = DocumentBuilderFactory::newInstance();;
    

    DocumentBuilder* builder = factory->newDocumentBuilder();;
    

    Document* document = builder->newDocument();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return document;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


                //@Throws(Exception.constructor)
            
    auto DomDocumentHelper::create(InputStream* inputStream) -> Document*{

        try {
            
    DocumentBuilderFactory* factory = DocumentBuilderFactory::newInstance();;
    

    DocumentBuilder* builder = factory->newDocumentBuilder();;
    

    Document* document = builder->parse(inputStream);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return document;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto DomDocumentHelper::create(std::string xmlString) -> Document*{

        try {
            
    DocumentBuilderFactory* factory = DocumentBuilderFactory::newInstance();;
    

    DocumentBuilder* builder = factory->newDocumentBuilder();;
    

    Document* document = builder->parse(new StringBufferInputStream(xmlString));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return document;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTHELPER_CPP
