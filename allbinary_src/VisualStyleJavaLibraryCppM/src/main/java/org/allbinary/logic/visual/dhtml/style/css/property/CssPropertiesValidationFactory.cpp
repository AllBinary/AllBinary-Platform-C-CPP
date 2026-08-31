
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CssPropertyData.h"
#include "CssPropertyValidationFactory.h"

class CssPropertiesValidationFactory
            : public Object
         {
        

                //@Throws(Exception.constructor)
            
    public static Vector getInstance(NodeList nodeList){

    propertiesVector: Vector = new Vector();;
    




                        for (
    index: int32_t = 0;index < nodeList!.getLength(); index++)
        {

    node: Node = nodeList!.item(index)!;;
    

                        if(node.getNodeName()!.compareTo(CssPropertyData.getInstance()!.NAME) == 0)
                        
                                    {
                                    
    cssPropertyValidationInterface: ValidationInterface = CssPropertyValidationFactory.getInstance(node) as ValidationInterface;;
    
propertiesVector!.add(cssPropertyValidationInterface);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return propertiesVector;
    
}


    public static Vector getInstance(HashMap<any, any> hashMap){

    styles: Vector = new Vector();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return styles;
    
}


private constructor (){

            super();
        }


};

            

