
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
        



        #ifndef ORG_ALLBINARY_BOUNDS_TOPULAYERBOUNDS_H
        #define ORG_ALLBINARY_BOUNDS_TOPULAYERBOUNDS_H

#include <org/allbinary/graphics/Rectangle.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerBounds.h"
#include "BoundsVisitorInterface.h"

class TopULayerBounds: public LayerBounds {
        

public constructor (Rectangle rectangle);

    public visit(BoundsVisitorInterface boundsVisitorInterface);

};

            


        #endif //ORG_ALLBINARY_BOUNDS_TOPULAYERBOUNDS_H
