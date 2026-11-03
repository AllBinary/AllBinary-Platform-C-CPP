
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_COLOR_COLORSVIEW_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_COLOR_COLORSVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class ModDomHelper;
class StringMaker;
class CommonPhoneStrings;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ColorData;
class ColorsData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ColorsView
            : public virtual Object
        , public virtual DomNodeInterface {

    private: CommonPhoneStrings* commonPhoneStrings;

    private: const int32_t HEXRADIX = 16;

    private: const int32_t MAX = 255;

    public: const int32_t delta = 20;

public: ColorsView();

                //@Throws(Exception.constructor)
            
    public: Node* getColorNode(Document* document, int32_t redIndex, int32_t greenIndex, int32_t blueIndex);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_COLOR_COLORSVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_COLOR_COLORSVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_COLOR_COLORSVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/logic/visual/dhtml/style/color/ColorData.h")
#include "org/allbinary/logic/visual/dhtml/style/color/ColorData.h"
#endif
#if __has_include("org/allbinary/logic/visual/dhtml/style/color/ColorsData.h")
#include "org/allbinary/logic/visual/dhtml/style/color/ColorsData.h"
#endif

        #endif
    
