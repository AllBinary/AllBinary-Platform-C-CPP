
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/InputStream.h>

      
#include <java/io/StringBufferInputStream.h>

      
#include <javax/xml/parsers/DocumentBuilder.h>

      
#include <javax/xml/parsers/DocumentBuilderFactory.h>

      
#include <javax/xml/transform/Transformer.h>

      
#include <javax/xml/transform/TransformerFactory.h>

      
#include <javax/xml/transform/dom/DOMSource.h>

      
#include <javax/xml/transform/stream/StreamResult.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DomDocumentHelper
            : public Object
         {
        

    public static Document create(){

        try {
            
    factory: DocumentBuilderFactory = DocumentBuilderFactory.newInstance()!;;
    

    builder: DocumentBuilder = factory.newDocumentBuilder()!;;
    

    document: Document = builder.newDocument()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


                //@Throws(Exception.constructor)
            
    public static Document create(InputStream inputStream){

        try {
            
    factory: DocumentBuilderFactory = DocumentBuilderFactory.newInstance()!;;
    

    builder: DocumentBuilder = factory.newDocumentBuilder()!;;
    

    document: Document = builder.parse(inputStream)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public static Document create(string xmlString){

        try {
            
    factory: DocumentBuilderFactory = DocumentBuilderFactory.newInstance()!;;
    

    builder: DocumentBuilder = factory.newDocumentBuilder()!;;
    

    document: Document = builder.parse(new StringBufferInputStream(xmlString))!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public static string toString(Document document){

        try {
            
    domSource: DOMSource = new DOMSource(document);;
    

    byteArrayOutputStream: ByteArrayOutputStream = new ByteArrayOutputStream();;
    

    streamResult: StreamResult = new StreamResult(byteArrayOutputStream);;
    

    copyTransformerFactory: TransformerFactory = TransformerFactory.newInstance()!;;
    

    copyTransformer: Transformer = copyTransformerFactory!.newTransformer()!;;
    
copyTransformer!.transform(domSource, streamResult);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return byteArrayOutputStream!.toString();;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


private constructor (){

            super();
        }


};

            

