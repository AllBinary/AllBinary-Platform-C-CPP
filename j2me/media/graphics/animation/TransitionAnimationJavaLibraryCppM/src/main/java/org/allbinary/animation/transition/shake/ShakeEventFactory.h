
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

    private: static ShakeEventFactory instance() { return ShakeEventFactory(); }

    public: static ShakeEventFactory getInstance();

    public: ShakeEvent MICRO = ShakeEvent();

    public: ShakeEvent SMALL = ShakeEvent();

    public: ShakeEvent MEDIUM = ShakeEvent();

    public: ShakeEvent LARGE = ShakeEvent();

    public: void init();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEEVENTFACTORY_H
