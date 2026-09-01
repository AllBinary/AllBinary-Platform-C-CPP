
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

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ColorData.h"
#include "ColorsData.h"

class ColorsView
            : public Object
        : public DomNodeInterface {

    private: const CommonPhoneStrings commonPhoneStrings = CommonPhoneStrings::getInstance();

    private: const int32_t HEXRADIX = 16;

    private: const int32_t MAX = 255;

    const int32_t delta = 20;

public: ColorsView();

                //@Throws(Exception.constructor)
            
    public: Node getColorNode(Document document, int32_t redIndex, int32_t greenIndex, int32_t blueIndex);

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_COLOR_COLORSVIEW_H
