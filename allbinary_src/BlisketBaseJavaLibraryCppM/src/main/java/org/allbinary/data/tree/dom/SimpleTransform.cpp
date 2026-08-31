
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
        
#include <java/io/StringBufferInputStream.h>

      
#include <javax/xml/transform/stream/StreamSource.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "XslHelper.h"

class SimpleTransform
            : public Object
         {
        

    private: const xsltFilePath: AbPath;

    private: const dataFilePath: AbPath;

public constructor (AbPath xsltFilePath, AbPath dataFilePath){

            super();
        this.xsltFilePath= xsltFilePath;
    
this.dataFilePath= dataFilePath;
    
}


                //@Throws(Exception.constructor)
            
    public string transform(){

    inputStream: AbFileLocalInputStream = new AbFileLocalInputStream(AbFile.createAbFileFromAbPath(this.xsltFilePath));;
    

    document: Document = DomDocumentHelper.create(new AbFileLocalInputStream(AbFile.createAbFileFromAbPath(this.dataFilePath)))!;;
    

    result: string = XslHelper.getInstance()!.translate(new StreamSource(inputStream), new StreamSource(new StringBufferInputStream(DomDocumentHelper.toString(document))))!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


};

            

