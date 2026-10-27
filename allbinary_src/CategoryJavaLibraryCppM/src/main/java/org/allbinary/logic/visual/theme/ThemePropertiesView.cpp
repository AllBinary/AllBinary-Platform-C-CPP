
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEPROPERTIESVIEW_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEPROPERTIESVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/theme/ThemePropertiesView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/theme/ThemeInterface.h"
#include "org/allbinary/logic/visual/theme/ThemeData.h"


ThemePropertiesView::ThemePropertiesView(ThemeInterface* themeInterface){
this->themeInterface= themeInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto ThemePropertiesView::toXmlNode(Document* document) -> Node*{

    Node* node = ModDomHelper::createNameValueNodes(document, ThemeData::getInstance()->NAME, this->themeInterface->toHashMap());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEPROPERTIESVIEW_CPP
