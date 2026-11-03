
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_COLOR_COLORCHOOSER_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_COLOR_COLORCHOOSER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/color/ColorChooser.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/color/JPanel.h"
#include "org/allbinary/graphics/j2me/workarea/color/JColorChooser.h"
#include "org/allbinary/graphics/j2me/workarea/color/BorderLayout.h"


ColorChooser::ColorChooser(){
this->initComponents();
    
}


    auto ColorChooser::initComponents() -> void{
this->jColorChooser1= new javax::swing::JColorChooser();
    
setLayout(new java::awt::BorderLayout());
    
add(this->jColorChooser1, awt->BorderLayout->CENTER);
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_COLOR_COLORCHOOSER_CPP
