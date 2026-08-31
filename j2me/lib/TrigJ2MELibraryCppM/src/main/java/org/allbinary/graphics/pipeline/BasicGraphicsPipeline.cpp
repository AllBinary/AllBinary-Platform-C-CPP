
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/NoDecimalTrigTable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicGraphicsPipeline
            : public Object
         {
        

    pointBasicArrayList: BasicArrayList;

public constructor (BasicArrayList points){

            super();
        this.pointBasicArrayList= points;
    
}


    public setInitMatrix(BasicArrayList points){
this.pointBasicArrayList= points;
    
}


    public createMatrix(){
}


                //@Throws(Exception.constructor)
            
    public translate(int32_t x, int32_t y){

    newBasicArrayList: BasicArrayList = new BasicArrayListD();;
    

    size: int32_t = this.pointBasicArrayList!.size()!;;
    

    pointFactory: PointFactory = PointFactory.getInstance()!;;
    

    secondPoint: GPoint;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
secondPoint= this.pointBasicArrayList!.objectArray[index]! as GPoint;
    

                        if(secondPoint!.getX() != 1000)
                        
                                    {
                                    newBasicArrayList!.add(pointFactory!.createXY(secondPoint!.getX() +x, secondPoint!.getY() +y));
    

                                    }
                                
                        else {
                            newBasicArrayList!.add(secondPoint);
    

                        }
                            
}

this.pointBasicArrayList= newBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    public rotateToAngle(Angle angle){
this.rotate(static_cast<int32_t>(angle.getValue()));
    
}


    private: const noDecimalTrigTable: NoDecimalTrigTable = NoDecimalTrigTable.getInstance()!;

                //@Throws(Exception.constructor)
            
    rotate(int32_t angle){

    newBasicArrayList: BasicArrayList = new BasicArrayListD();;
    

    secondPoint: GPoint;;
    

    y: int64_t= 0;;
    

    secondX: int64_t= 0;;
    

    secondY: int64_t= 0;;
    

    point: GPoint;;
    

    pointFactory: PointFactory = PointFactory.getInstance()!;;
    

    size: int32_t = this.pointBasicArrayList!.size()!;;
    

    sin: int64_t= 0;;
    

    cos: int64_t= 0;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
secondPoint= this.pointBasicArrayList!.objectArray[index]! as GPoint;
    

                        if(secondPoint!.getX() != 1000)
                        
                                    {
                                    sin= this.noDecimalTrigTable!.sin(angle);
    
cos= this.noDecimalTrigTable!.cos(angle);
    
y= secondPoint!.getY() *sin;
    
secondX= (secondPoint!.getX() *cos) -y;
    
secondY= (secondPoint!.getX() *sin) +(secondPoint!.getY() *cos);
    
point= pointFactory!.createXY(static_cast<int32_t>(secondX) /10000, static_cast<int32_t>(secondY) /10000);
    
newBasicArrayList!.add(point);
    

                                    }
                                
                        else {
                            newBasicArrayList!.add(secondPoint);
    

                        }
                            
}

this.pointBasicArrayList= newBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    public mirror(int32_t width){

    pointFactory: PointFactory = PointFactory.getInstance()!;;
    

    halfWidth: int32_t = (width>>1);;
    

    newBasicArrayList: BasicArrayList = new BasicArrayListD();;
    

    secondPoint: GPoint;;
    

    newX: int32_t= 0;;
    

    point: GPoint;;
    

    size: int32_t = this.pointBasicArrayList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
secondPoint= this.pointBasicArrayList!.objectArray[index]! as GPoint;
    

                        if(secondPoint!.getX() != 1000)
                        
                                    {
                                    newX= 0;
    

                        if(secondPoint!.getX() > halfWidth)
                        
                                    {
                                    newX= halfWidth -(secondPoint!.getX() -halfWidth);
    

                                    }
                                
                        else {
                            newX= halfWidth +(halfWidth -secondPoint!.getX());
    

                        }
                            
point= pointFactory!.createXY(newX, secondPoint!.getY());
    
newBasicArrayList!.add(point);
    

                                    }
                                
                        else {
                            newBasicArrayList!.add(secondPoint);
    

                        }
                            
}

this.pointBasicArrayList= newBasicArrayList;
    
}


    public BasicArrayList getMatrix(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.pointBasicArrayList;
    
}


};

            

