
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_XMLDOCUMENTHELPER_CPP
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_XMLDOCUMENTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/StringReader.h>

      
#include <java/io/StringWriter.h>

      
#include <java/io/Writer.h>

      
#include <javax/xml/parsers/DocumentBuilderFactory.h>

      
#include <javax/xml/transform/OutputKeys.h>

      
#include <javax/xml/transform/Transformer.h>

      
#include <javax/xml/transform/TransformerConfigurationException.h>

      
#include <javax/xml/transform/TransformerFactory.h>

      
#include <javax/xml/transform/dom/DOMSource.h>

      
#include <javax/xml/transform/stream/StreamResult.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/java/characters/CharacterSetData.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/xml/sax/InputSource.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto XmlDocumentHelper::instance_owner() -> XmlDocumentHelper* { static std::unique_ptr<XmlDocumentHelper> value(new XmlDocumentHelper()); return value.get(); }
XmlDocumentHelper* XmlDocumentHelper::instance = XmlDocumentHelper::instance_owner();

    auto XmlDocumentHelper::getInstance() -> XmlDocumentHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return XmlDocumentHelper::instance;
    
}


XmlDocumentHelper::XmlDocumentHelper() : logUtil(LogUtil::getInstance()){
this->init(4, true);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto XmlDocumentHelper::init(int32_t indent, bool ignoreDeclaration) -> void{
this->indent= indent;
    
this->ignoreDeclaration= ignoreDeclaration;
    
}


                //@Throws(TransformerConfigurationException.constructor)
            
    auto XmlDocumentHelper::createTransformer(int32_t indent, bool ignoreDeclaration) -> Transformer*{

    BooleanFactory* booleanFactory = BooleanFactory::getInstance();;
    

    TransformerFactory* transformerFactory = TransformerFactory::newInstance();;
    
transformerFactory->setAttribute(this->INDENT_NUMBER, indent);
    

    Transformer* transformer = transformerFactory->newTransformer();;
    
transformer->setOutputProperty(OutputKeys::ENCODING, CharacterSetData::getInstance()->UTF_8);
    
transformer->setOutputProperty(OutputKeys::OMIT_XML_DECLARATION, ignoreDeclaration
                        ?       
                                booleanFactory->YES
                                :

                            booleanFactory->NO);
    
transformer->setOutputProperty(OutputKeys::INDENT, booleanFactory->YES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return transformer;
    
}


                //@Throws(TransformerConfigurationException.constructor)
            
    auto XmlDocumentHelper::createTransformer() -> Transformer*{

    int32_t currentIndent= 0;;
    

    bool currentIgnoreDeclaration= false;;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
currentIndent= this->indent;
    
currentIgnoreDeclaration= this->ignoreDeclaration;
    





                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->createTransformer(currentIndent, currentIgnoreDeclaration);;
    
}


                //@Throws(Exception.constructor)
            
    auto XmlDocumentHelper::format(std::string xmlString) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->formatWithTransformer(xmlString, this->createTransformer());;
    
}


                //@Throws(Exception.constructor)
            
    auto XmlDocumentHelper::formatWithTransformer(std::string xmlString, Transformer* transformer) -> std::string{

    InputSource* src = new InputSource(new StringReader(xmlString));;
    

    Document* document = DocumentBuilderFactory::newInstance()->newDocumentBuilder()->parse(src);;
    

    Writer* out = new StringWriter();;
    
transformer->transform(new DOMSource(document), new StreamResult(out));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(out);;
    
}


                //@Throws(Exception.constructor)
            
    auto XmlDocumentHelper::toString(Document* document) -> std::string{

        try {
            
    DOMSource* domSource = new DOMSource(document);;
    

    ByteArrayOutputStream* byteArrayOutputStream = new ByteArrayOutputStream();;
    

    StreamResult* streamResult = new StreamResult(byteArrayOutputStream);;
    

    TransformerFactory* copyTransformerFactory = TransformerFactory::newInstance();;
    

    Transformer* copyTransformer = copyTransformerFactory->newTransformer();;
    
copyTransformer->transform(domSource, streamResult);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(byteArrayOutputStream);;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_XMLDOCUMENTHELPER_CPP
