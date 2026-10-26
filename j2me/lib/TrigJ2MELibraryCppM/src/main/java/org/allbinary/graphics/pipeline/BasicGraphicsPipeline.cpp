
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

    protected: BasicArrayList pointBasicArrayList;

public: BasicGraphicsPipeline(BasicArrayList points){
this->pointBasicArrayList= points;
    
}


    public: void setInitMatrix(BasicArrayList points){
this->pointBasicArrayList= points;
    
}


    public: void createMatrix(){
}


                //@Throws(Exception.constructor)
            
    public: void translate(int32_t x, int32_t y){

    BasicArrayList newBasicArrayList = BasicArrayListD();;
    

    int32_t size = this->pointBasicArrayList.size();;
    

    PointFactory pointFactory = PointFactory::getInstance();;
    

    GPoint secondPoint;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
secondPoint= this->pointBasicArrayList.objectArray[index];
    

                        if(secondPoint.getX() != 1000)
                        
                                    {
                                    newBasicArrayList.add(pointFactory.createXY(secondPoint.getX() +x, secondPoint.getY() +y));
    

                                    }
                                
                        else {
                            newBasicArrayList.add(secondPoint);
    

                        }
                            
}

this->pointBasicArrayList= newBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    public: void rotateToAngle(Angle angle){
this->rotate(static_cast<int32_t>(angle.getValue()));
    
}


    private: const NoDecimalTrigTable noDecimalTrigTable = NoDecimalTrigTable::getInstance();

                //@Throws(Exception.constructor)
            
    private: void rotate(int32_t angle){

    BasicArrayList newBasicArrayList = BasicArrayListD();;
    

    GPoint secondPoint;;
    

    int64_t y= 0;;
    

    int64_t secondX= 0;;
    

    int64_t secondY= 0;;
    

    GPoint point;;
    

    PointFactory pointFactory = PointFactory::getInstance();;
    

    int32_t size = this->pointBasicArrayList.size();;
    

    int64_t sin= 0;;
    

    int64_t cos= 0;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
secondPoint= this->pointBasicArrayList.objectArray[index];
    

                        if(secondPoint.getX() != 1000)
                        
                                    {
                                    sin= this->noDecimalTrigTable.sin(angle);
    
cos= this->noDecimalTrigTable.cos(angle);
    
y= secondPoint.getY() *sin;
    
secondX= (secondPoint.getX() *cos) -y;
    
secondY= (secondPoint.getX() *sin) +(secondPoint.getY() *cos);
    
point= pointFactory.createXY(static_cast<int32_t>(secondX) /10000, static_cast<int32_t>(secondY) /10000);
    
newBasicArrayList.add(point);
    

                                    }
                                
                        else {
                            newBasicArrayList.add(secondPoint);
    

                        }
                            
}

this->pointBasicArrayList= newBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    public: void mirror(int32_t width){

    PointFactory pointFactory = PointFactory::getInstance();;
    

    int32_t halfWidth = (width>>1);;
    

    BasicArrayList newBasicArrayList = BasicArrayListD();;
    

    GPoint secondPoint;;
    

    int32_t newX= 0;;
    

    GPoint point;;
    

    int32_t size = this->pointBasicArrayList.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
secondPoint= this->pointBasicArrayList.objectArray[index];
    

                        if(secondPoint.getX() != 1000)
                        
                                    {
                                    newX= 0;
    

                        if(secondPoint.getX() > halfWidth)
                        
                                    {
                                    newX= halfWidth -(secondPoint.getX() -halfWidth);
    

                                    }
                                
                        else {
                            newX= halfWidth +(halfWidth -secondPoint.getX());
    

                        }
                            
point= pointFactory.createXY(newX, secondPoint.getY());
    
newBasicArrayList.add(point);
    

                                    }
                                
                        else {
                            newBasicArrayList.add(secondPoint);
    

                        }
                            
}

this->pointBasicArrayList= newBasicArrayList;
    
}


    public: BasicArrayList getMatrix(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pointBasicArrayList;
    
}


};

            

