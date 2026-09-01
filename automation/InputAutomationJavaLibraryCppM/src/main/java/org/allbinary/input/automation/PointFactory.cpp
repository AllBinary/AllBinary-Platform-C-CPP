
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
        



            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
#include <java/awt.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Point.h"

class PointFactory
            : public Object
         {

    private: static std::vector<std::vector<Point>> pointArray = new Array(3000).fill(null).map(() => new Array(3000).fill(0))
                                                            ;

    public: static Point getInstance(int32_t x, int32_t y){

    Point point = PointFactory::pointArray[x]![y];;
    

                        if(point == 
                                    nullptr
                                )
                        
                                    {
                                    point= PointFactory::pointArray[x]![y]= Point(x, y);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return point;
    
}


private: PointFactory(){
}


};

            

