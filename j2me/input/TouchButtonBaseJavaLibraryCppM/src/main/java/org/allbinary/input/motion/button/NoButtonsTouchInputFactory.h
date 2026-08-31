
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_NOBUTTONSTOUCHINPUTFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_NOBUTTONSTOUCHINPUTFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseTouchInput.h"

class NoButtonsTouchInputFactory
            : public Object
         {
        

    private: static const instance: BaseTouchInput = new BaseTouchInput();

    public static BaseTouchInput getInstance();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_NOBUTTONSTOUCHINPUTFACTORY_H
