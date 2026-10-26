
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
        



#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Processor.h"

class RunnableCanvasRefreshHelper: public Processor {

    private: MyCanvas runnableCanvas;

public: RunnableCanvasRefreshHelper(MyCanvas runnableCanvas){
this->runnableCanvas= runnableCanvas;
    
}


    public: void process(){
this->runnableCanvas.repaint();
    
}


};

            

