
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CssElementValidationFactory.h"

class CssElementsValidationFactory
            : public Object
         {
        

                //@Throws(Exception.constructor)
            
    public static Vector getInstance(Vector cssElementStyleNodeList){

    styles: Vector = new Vector();;
    

    size: int32_t = cssElementStyleNodeList!.length!;;
    

    cssElementStyleNode: Node;;
    

    cssValidationInterface: ValidationInterface;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
cssElementStyleNode= cssElementStyleNodeList!.get(index) as Node;
    
cssValidationInterface= CssElementValidationFactory.getInstance(cssElementStyleNode) as ValidationInterface;
    
styles.add(cssValidationInterface);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return styles;
    
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

            

