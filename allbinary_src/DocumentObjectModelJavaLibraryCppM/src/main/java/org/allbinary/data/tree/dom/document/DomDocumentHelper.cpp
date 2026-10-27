
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

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/io/InputStream.h>

      
#include <java/io/StringBufferInputStream.h>

      
#include <javax/xml/parsers/DocumentBuilder.h>

      
#include <javax/xml/parsers/DocumentBuilderFactory.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DomDocumentHelper
            : public Object
         {

    public: static void init(){
System.setProperty("jdk.xml.maxElementDepth", "0");
    
System.setProperty("jdk.xml.xpathExprOpLimit", "0");
    
System.setProperty("jdk.xml.xpathTotalOpLimit", "0");
    

    std::string LIMIT = "500000";;
    
System.setProperty("jdk.xml.maxGeneralEntitySizeLimit", LIMIT);
    
System.setProperty("jdk.xml.totalEntitySizeLimit", LIMIT);
    
}


    public: static Document* create(){

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
            
    public: static Document* create(InputStream* inputStream){

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
            
    public: static Document* create(std::string xmlString){

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


private: DomDocumentHelper(){
}


};

            

