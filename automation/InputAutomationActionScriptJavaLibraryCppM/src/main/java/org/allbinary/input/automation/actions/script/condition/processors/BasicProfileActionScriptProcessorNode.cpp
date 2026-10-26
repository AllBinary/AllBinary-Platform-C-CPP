
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
        
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericProfileActionScriptProcessorData.h"

class BasicProfileActionScriptProcessorNode
            : public Object
         {

public: BasicProfileActionScriptProcessorNode(Node node){

    Node actionNode = DomSearchHelper::getNode(GenericProfileActionScriptProcessorData::NAME, node.getChildNodes());;
    
}


public: BasicProfileActionScriptProcessorNode(){
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = document.createElement(GenericProfileActionScriptProcessorData::NAME);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

