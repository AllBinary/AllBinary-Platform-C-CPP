
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"

class PaintableComposite: public Paintable {

    private: std::vector<PaintableInterface*> paintableArray;

public: PaintableComposite(std::vector<PaintableInterface*> paintableArray){
this->paintableArray= paintableArray;
    
}


    public: void paint(Graphics* graphics){




                        for (
    int32_t index = this->paintableArray.size() -1;index >= 0; index--)
        {
this->paintableArray[index].paint(graphics);
    
}

}


    public: void paintThreed(Graphics* graphics){




                        for (
    int32_t index = this->paintableArray.size() -1;index >= 0; index--)
        {
this->paintableArray[index].paintThreed(graphics);
    
}

}


};

            

