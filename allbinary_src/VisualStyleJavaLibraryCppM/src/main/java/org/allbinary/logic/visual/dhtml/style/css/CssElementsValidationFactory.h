
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_CSSELEMENTSVALIDATIONFACTORY_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_CSSELEMENTSVALIDATIONFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CssElementValidationFactory.h"

class CssElementsValidationFactory
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static BasicArrayList getInstance(BasicArrayList cssElementStyleNodeList);

    public: static BasicArrayList getInstance(HashMap<Object*, Object*> hashMap);

private: CssElementsValidationFactory();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_CSSELEMENTSVALIDATIONFACTORY_H
