
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
        



        #ifndef ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENT_H
        #define ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENT_H

#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScrollMapEvent: public AllBinaryEventObject {
        

    private: dx: int32_t= 0;

    private: dy: int32_t= 0;

public constructor (any = {} anyType);

    public setDx(int32_t dx);

    public int32_t getDx();

    public setDy(int32_t dy);

    public int32_t getDy();

    public setDxDy(int32_t dx, int32_t dy);

};

            


        #endif //ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENT_H
