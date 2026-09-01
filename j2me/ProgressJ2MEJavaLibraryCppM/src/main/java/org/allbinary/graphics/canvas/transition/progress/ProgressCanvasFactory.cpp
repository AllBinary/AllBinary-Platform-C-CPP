
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
        



            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProgressCanvas.h"

class ProgressCanvasFactory
            : public Object
         {

    private: static Object* PROGRESS_FORM_SCREEN = NullUtil::getInstance().NULL_OBJECT;

    public: static ProgressCanvas getInstance(){

                        if(ProgressCanvasFactory::PROGRESS_FORM_SCREEN == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    ProgressCanvasFactory::PROGRESS_FORM_SCREEN= ProgressCanvas(StringUtil::getInstance().EMPTY_STRING, BasicColorFactory::getInstance().BLACK, BasicColorFactory::getInstance().WHITE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ProgressCanvasFactory::PROGRESS_FORM_SCREEN as ProgressCanvas;
    
}


    public: static PaintableInterface getLazyInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullPaintable::getInstance();;
    
}


};

            

