
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_COLORCHANGEEVENT_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_COLORCHANGEEVENT_H

#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicColorFactory.h"
#include "BasicColor.h"

class ColorChangeEvent: public AllBinaryEventObject {
        

    private: basicColor: BasicColor = BasicColorFactory.getInstance()!.WHITE;

public constructor (any = {} anyType);

    public setBasicColorP(BasicColor basicColor);

    public BasicColor getBasicColorP();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_COLORCHANGEEVENT_H
