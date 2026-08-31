
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
        
#include <org/allbinary/business/error/ErrorData.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModDomHelper.h"

class BasicErrorNodeUtil
            : public Object
         {
        

                //@Throws(Exception.constructor)
            
    public static Node get(Document document, string errorText){

        try {
            
    node: Node = document.createElement(ErrorData.getInstance()!.NAME)!;;
    
node.appendChild(ModDomHelper.createNameValueNodes(document, ErrorData.getInstance()!.TEXT, errorText));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                //: 
} catch(e) 
            {



                            throw new Exception("Error Node Creation Failure");
                    
}

}


private constructor (){

            super();
        }


};

            

