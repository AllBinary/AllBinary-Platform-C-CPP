
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
        



        #ifndef ORG_ALLBINARY_INPUT_TOUCHJ2ME_H
        #define ORG_ALLBINARY_INPUT_TOUCHJ2ME_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //TouchJ2MENone
class TouchJ2ME
            : public virtual Object
         {

public: TouchJ2ME();

    public: void pointerDragged(int32_t x, int32_t y);

    public: void pointerPressed(int32_t x, int32_t y);

    public: void pointerReleased(int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_INPUT_TOUCHJ2ME_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_TOUCHJ2ME_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_TOUCHJ2ME_H_COMPLETE
        
        #endif
    
