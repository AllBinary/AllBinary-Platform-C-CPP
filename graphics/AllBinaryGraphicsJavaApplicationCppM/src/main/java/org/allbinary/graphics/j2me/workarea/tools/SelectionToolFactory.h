
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_SELECTIONTOOLFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_SELECTIONTOOLFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasJPanel.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/tools/GraphicsItemInterfaceFactoryInterface.h"
#include "org/allbinary/graphics/j2me/workarea/tools/SelectionTool.h"
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h"

class SelectionToolFactory
            : public Object
        , public GraphicsItemInterfaceFactoryInterface {

    public: GraphicItemInterface* getInstance(CanvasJPanel* canvasJPanel);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_SELECTIONTOOLFACTORY_H
