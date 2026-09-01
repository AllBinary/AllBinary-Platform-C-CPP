
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGFACTORY_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FontDebugFactory
            : public Object
         {

    private: static FontDebugFactory instance() { return FontDebugFactory(); }

    public: static FontDebugFactory getInstance();

    public: void setFont(Font font, Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGFACTORY_H
