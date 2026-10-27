
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PAINT_NULLINITUPDATEPAINTABLE_H
        #define ORG_ALLBINARY_GRAPHICS_PAINT_NULLINITUPDATEPAINTABLE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/paint/InitUpdatePaintable.h"

class NullInitUpdatePaintable: public InitUpdatePaintable {

    private: static NullInitUpdatePaintable* SINGLETON() { static std::unique_ptr<NullInitUpdatePaintable> value(new NullInitUpdatePaintable()); return value.get(); }

    public: static InitUpdatePaintable* getInstance();

private: NullInitUpdatePaintable();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_PAINT_NULLINITUPDATEPAINTABLE_H
