
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_DISPLAYPOINTSCALAR_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_DISPLAYPOINTSCALAR_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DisplayPointScalar
            : public Object
         {
        

    private: static const instance: DisplayPointScalar = new DisplayPointScalar();

    public static DisplayPointScalar getInstance();

public constructor ();

    public int32_t processX(int32_t value);

    public int32_t processY(int32_t value);

    public GPoint process(GPoint point);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_DISPLAYPOINTSCALAR_H
