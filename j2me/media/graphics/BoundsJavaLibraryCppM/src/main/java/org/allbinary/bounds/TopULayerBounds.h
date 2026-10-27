
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Rectangle;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/bounds/LayerBounds.h"
class BoundsVisitorInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TopULayerBounds: public LayerBounds {

public: TopULayerBounds(Rectangle* rectangle);

    public: void visit(BoundsVisitorInterface* boundsVisitorInterface);

};

            


        #endif //ORG_ALLBINARY_BOUNDS_TOPULAYERBOUNDS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BOUNDS_TOPULAYERBOUNDS_H_COMPLETE)
        #define ORG_ALLBINARY_BOUNDS_TOPULAYERBOUNDS_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include("org/allbinary/bounds/LayerBounds.h")
#include "org/allbinary/bounds/LayerBounds.h"
#endif
#if __has_include("org/allbinary/bounds/BoundsVisitorInterface.h")
#include "org/allbinary/bounds/BoundsVisitorInterface.h"
#endif

        #endif
    
