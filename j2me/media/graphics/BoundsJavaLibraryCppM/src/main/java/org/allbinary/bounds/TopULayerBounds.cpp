
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
        



        #ifndef ORG_ALLBINARY_BOUNDS_TOPULAYERBOUNDS_CPP
        #define ORG_ALLBINARY_BOUNDS_TOPULAYERBOUNDS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/bounds/TopULayerBounds.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graphics/Rectangle.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/bounds/LayerBounds.h"
#include "org/allbinary/bounds/BoundsVisitorInterface.h"


TopULayerBounds::TopULayerBounds(Rectangle* rectangle) : LayerBounds(rectangle){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto TopULayerBounds::visit(BoundsVisitorInterface* boundsVisitorInterface) -> void{

                        if(boundsVisitorInterface->getX() > this->rectangle->getMaxX())
                        
                                    {
                                    boundsVisitorInterface->maxX();
    

                                    }
                                

                        if(boundsVisitorInterface->getX() < this->rectangle->getPoint()->getX())
                        
                                    {
                                    boundsVisitorInterface->minX();
    

                                    }
                                

                        if(boundsVisitorInterface->getY() < this->rectangle->getPoint()->getY())
                        
                                    {
                                    boundsVisitorInterface->minY();
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_BOUNDS_TOPULAYERBOUNDS_CPP
