
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
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/File.h>

      
#include <java/io/OutputStream.h>

      
#include <java/io/StringBufferInputStream.h>

      
#include <javax/xml/transform/Templates.h>

      
#include <javax/xml/transform/Transformer.h>

      
#include <javax/xml/transform/TransformerFactory.h>

      
#include <javax/xml/transform/URIResolver.h>

      
#include <javax/xml/transform/stream/StreamResult.h>

      
#include <javax/xml/transform/stream/StreamSource.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //import org.allbinary.data.tree.dom.document.DomDocumentHelper;
class XslHelper
            : public Object
         {

    private: static XslHelper* instance() { static std::unique_ptr<XslHelper> value(new XslHelper()); return value.get(); }

    public: static XslHelper* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return XslHelper::instance();
    
}


private: XslHelper(){
}


                //@Throws(Exception.constructor)
            
    public: OutputStream* translate(StreamSource* xsltStreamSource, StreamSource* xmlStreamSource, StreamResult* streamResult){

        try {
            
    TransformerFactory* transformerFactory = TransformerFactory::newInstance();;
    

    Transformer* transformer = transformerFactory->newTransformer(xsltStreamSource);;
    
transformer->transform(xmlStreamSource, streamResult);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return streamResult->getOutputStream();;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: OutputStream* translate(URIResolver* resolver, StreamSource* xsltStreamSource, StreamSource* xmlStreamSource, StreamResult* streamResult){

        try {
            
    TransformerFactory* tFactory = TransformerFactory::newInstance();;
    
tFactory->setURIResolver(resolver);
    

    Transformer* transformer = tFactory->newTransformer(xsltStreamSource);;
    
transformer->transform(xmlStreamSource, streamResult);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return streamResult->getOutputStream();;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: std::string translateTemplate(Templates* templates, StreamSource* xmlStreamSource){

        try {
            
    ByteArrayOutputStream* outputStream = new ByteArrayOutputStream();;
    

    StreamResult* streamResult = new StreamResult(outputStream);;
    
templates->newTransformer()->transform(xmlStreamSource, streamResult);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return streamResult->getOutputStream()->toString();;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: std::string translate(StreamSource* xsltStreamSource, Document* xmlDocument){

        try {
            
    ByteArrayOutputStream* outputStream = new ByteArrayOutputStream();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->translate(xsltStreamSource, new StreamSource(new StringBufferInputStream(XmlDocumentHelper::toString(xmlDocument))), new StreamResult(outputStream))->toString();;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: std::string translate(StreamSource* xsltStreamSource, StreamSource* xmlStreamSource){

        try {
            
    ByteArrayOutputStream* outputStream = new ByteArrayOutputStream();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->translate(xsltStreamSource, xmlStreamSource, new StreamResult(outputStream))->toString();;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: std::string translate(URIResolver* resolver, StreamSource* xsltStreamSource, StreamSource* xmlStreamSource){

        try {
            
    ByteArrayOutputStream* outputStream = new ByteArrayOutputStream();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->translate(resolver, xsltStreamSource, xmlStreamSource, new StreamResult(outputStream))->toString();;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: void export_(File* outputFile, std::string xsltFilePath, Document* xmlDocument){

        try {
            outputFile->createNewFile();
    
this->translate(new StreamSource(xsltFilePath), new StreamSource(new StringBufferInputStream(XmlDocumentHelper::toString(xmlDocument))), new StreamResult(outputFile));
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


};

            

