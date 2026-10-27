
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_ITEMCOLORFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_ITEMCOLORFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ItemColorFactory
            : public virtual Object
         {

    private: static ItemColorFactory* instance_owner();
    private: static ItemColorFactory* instance;

    public: static ItemColorFactory* getInstance();


            
    public: ItemColorFactory();
        
    public: int32_t INVERT_PAINT;

    public: int32_t PAINT;

    public: int32_t TEXT_FIELD_NO_FOCUS = 0x7F7F7F;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_ITEMCOLORFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_ITEMCOLORFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_ITEMCOLORFACTORY_H_COMPLETE
        
        #endif
    
