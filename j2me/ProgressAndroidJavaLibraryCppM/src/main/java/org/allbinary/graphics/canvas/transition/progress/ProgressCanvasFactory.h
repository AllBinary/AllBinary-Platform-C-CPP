
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVASFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVASFACTORY_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AndroidBasicTitleProgressBar.h"
#include "ProgressCanvas.h"

class ProgressCanvasFactory
            : public Object
         {

    private: static Object* PROGRESS_FORM_SCREEN = NullUtil::getInstance().NULL_OBJECT;

    public: static ProgressCanvas getInstance();

    public: static PaintableInterface getLazyInstance();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVASFACTORY_H
