
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEEVENTFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEEVENTFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShakeEvent.h"

class ShakeEventFactory
            : public Object
         {
        

    private: static const instance: ShakeEventFactory = new ShakeEventFactory();

    public static ShakeEventFactory getInstance();

    public MICRO: ShakeEvent = new ShakeEvent();

    public SMALL: ShakeEvent = new ShakeEvent();

    public MEDIUM: ShakeEvent = new ShakeEvent();

    public LARGE: ShakeEvent = new ShakeEvent();

    public init();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEEVENTFACTORY_H
