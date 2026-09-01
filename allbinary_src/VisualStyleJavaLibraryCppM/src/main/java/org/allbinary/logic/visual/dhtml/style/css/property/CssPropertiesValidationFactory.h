
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_CSSPROPERTIESVALIDATIONFACTORY_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_CSSPROPERTIESVALIDATIONFACTORY_H

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
            
    public: static Vector getInstance(NodeList nodeList);

    public: static Vector getInstance(HashMap<any, any> hashMap);

private: CssPropertiesValidationFactory();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_CSSPROPERTIESVALIDATIONFACTORY_H
