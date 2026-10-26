
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_LINE_H
        #define ORG_ALLBINARY_GRAPHICS_LINE_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GPoint.h"
#include "PointFactory.h"

class Line
            : public Object
         {

    private: GPoint p1;

    private: GPoint p2;

    private: double deltaX= 0.0;

    private: double deltaY= 0.0;

public: Line(GPoint p1, GPoint p2);

    public: double getGradient();

    private: void update();

    public: double getDeltaX();

    public: double getDeltaY();

    public: GPoint getP1();

    public: GPoint getP2();

    public: void setP1(GPoint p1);

    public: void setP2(GPoint p2);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_LINE_H
