
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_FORMPAINTABLE_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_FORMPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
#include <org/allbinary/graphics/paint/Paintable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PaintableForm;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FormPaintable: public Paintable {

    private: PaintableForm* form;

public: FormPaintable(PaintableForm* form);

    public: void paint(Graphics* graphics);

    public: PaintableForm* getForm();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_FORMPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_FORMPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_FORMPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include("org/allbinary/graphics/form/PaintableForm.h")
#include "org/allbinary/graphics/form/PaintableForm.h"
#endif

        #endif
    
