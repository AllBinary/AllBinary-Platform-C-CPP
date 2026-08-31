
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/graphics/paint/PaintableComposite.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DemoCanvas.h"

class DemoCanvasProgressUtil
            : public Object
         {
        

    public static showProgress(DemoCanvas demoCanvas){
DemoCanvasProgressUtil.showProgressOptionallyInTheBackground(demoCanvas, false);
    
}


    public static showProgressOptionallyInTheBackground(DemoCanvas demoCanvas, bool background){

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    
progressCanvas!.startBackground(background);
    

    paintableArray: std::vector<PaintableInterface> = new Array(2);;
    
paintableArray[0]= progressCanvas;
    
paintableArray[1]= demoCanvas!.getDefaultPaintableInterface();
    
demoCanvas!.setDefaultPaintableInterface(new PaintableComposite(paintableArray));
    
demoCanvas!.setPaintableInterface(demoCanvas!.getDefaultPaintableInterface());
    
}


};

            

