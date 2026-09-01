
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_LINESGRAPHICITEMFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_LINESGRAPHICITEMFACTORY_H

            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasJPanel.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GraphicsItemInterfaceFactoryInterface.h"
#include "LinesGraphicItem.h"
#include "GraphicItemInterface.h"

class LinesGraphicItemFactory
            : public Object
        : public GraphicsItemInterfaceFactoryInterface {

    public: GraphicItemInterface getInstance(CanvasJPanel canvasJPanel);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_LINESGRAPHICITEMFACTORY_H
