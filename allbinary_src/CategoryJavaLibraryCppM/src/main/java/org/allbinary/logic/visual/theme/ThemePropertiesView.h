
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEPROPERTIESVIEW_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEPROPERTIESVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class ModDomHelper;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ThemeInterface;
class ThemeData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ThemePropertiesView
            : public virtual Object
        , public DomNodeInterface {

    private: ThemeInterface* themeInterface;

public: ThemePropertiesView(ThemeInterface* themeInterface);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEPROPERTIESVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEPROPERTIESVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEPROPERTIESVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/logic/visual/theme/ThemeInterface.h")
#include "org/allbinary/logic/visual/theme/ThemeInterface.h"
#endif
#if __has_include("org/allbinary/logic/visual/theme/ThemeData.h")
#include "org/allbinary/logic/visual/theme/ThemeData.h"
#endif

        #endif
    
