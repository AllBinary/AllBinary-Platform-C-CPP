
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/PaintableForm.h"

class FormPaintable: public Paintable {

    private: PaintableForm* form;

public: FormPaintable(PaintableForm* form);

    public: void paint(Graphics* graphics);

    public: PaintableForm* getForm();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_FORMPAINTABLE_H
