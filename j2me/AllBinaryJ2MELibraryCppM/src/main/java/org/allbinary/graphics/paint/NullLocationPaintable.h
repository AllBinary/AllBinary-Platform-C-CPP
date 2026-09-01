
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PAINT_NULLLOCATIONPAINTABLE_H
        #define ORG_ALLBINARY_GRAPHICS_PAINT_NULLLOCATIONPAINTABLE_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LocationPaintable.h"

class NullLocationPaintable: public LocationPaintable {

    private: static const NullLocationPaintable instanceC = NullLocationPaintable();

    public: static NullLocationPaintable getInstance();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_PAINT_NULLLOCATIONPAINTABLE_H
