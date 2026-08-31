
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
        



#include <org/allbinary/graphics/Rectangle.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerBounds.h"
#include "BoundsVisitorInterface.h"

class RectangleLayerBounds: public LayerBounds {
        

public constructor (Rectangle rectangle){
            super(rectangle);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public visit(BoundsVisitorInterface boundsVisitorInterface){

                        if(boundsVisitorInterface!.getX() > this.rectangle.getMaxX())
                        
                                    {
                                    boundsVisitorInterface!.maxX();
    

                                    }
                                

                        if(boundsVisitorInterface!.getY() > this.rectangle.getMaxY())
                        
                                    {
                                    boundsVisitorInterface!.maxY();
    

                                    }
                                

                        if(boundsVisitorInterface!.getX() < this.rectangle.getPoint()!.getX())
                        
                                    {
                                    boundsVisitorInterface!.minX();
    

                                    }
                                

                        if(boundsVisitorInterface!.getY() < this.rectangle.getPoint()!.getY())
                        
                                    {
                                    boundsVisitorInterface!.minY();
    

                                    }
                                
}


};

            

