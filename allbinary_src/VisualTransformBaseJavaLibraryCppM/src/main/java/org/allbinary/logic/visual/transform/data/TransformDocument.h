
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMDOCUMENT_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMDOCUMENT_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformDocumentInterface.h"

class TransformDocument
            : public Object
        : public TransformDocumentInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: baseNode: Node;

    private: document: Document;

public constructor ();

    public Node getBaseNode();

    public Document getDoc();

                //@Throws(Exception.constructor)
            
    public string log();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMDOCUMENT_H
