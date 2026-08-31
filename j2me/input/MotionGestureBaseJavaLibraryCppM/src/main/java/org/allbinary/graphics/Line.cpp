
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
        



            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GPoint.h"
#include "PointFactory.h"

class Line
            : public Object
         {
        

    private: p1: GPoint;

    private: p2: GPoint;

    private: deltaX: double= 0.0;

    private: deltaY: double= 0.0;

public constructor (GPoint p1, GPoint p2){

            super();
        this.p1= PointFactory.getInstance()!.ZERO_ZERO;
    
this.p2= this.p1;
    
this.setP1(p1);
    
this.setP2(p2);
    
}


    public double getGradient(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getDeltaY() /this.getDeltaX();
    
}


    update(){
this.deltaX= this.getP1()!.getX() -this.getP2()!.getX();
    
this.deltaY= this.getP1()!.getY() -this.getP2()!.getY();
    
}


    public double getDeltaX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.deltaX;
    
}


    public double getDeltaY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.deltaY;
    
}


    public GPoint getP1(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.p1;
    
}


    public GPoint getP2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.p2;
    
}


    public setP1(GPoint p1){
this.p1= p1;
    
this.update();
    
}


    public setP2(GPoint p2){
this.p2= p2;
    
this.update();
    
}


};

            

