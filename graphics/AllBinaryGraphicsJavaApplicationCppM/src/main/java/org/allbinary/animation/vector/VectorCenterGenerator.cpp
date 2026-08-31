
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
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/Points.h>

      
#include <org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VectorCenterGenerator
            : public Object
         {
        

                //@Throws(Exception.constructor)
            
    public static BasicArrayList translate(BasicArrayList list, int32_t x, int32_t y){

    graphicsPipe: BasicGraphicsPipeline = new BasicGraphicsPipeline(list);;
    
graphicsPipe!.createMatrix();
    
graphicsPipe!.translate(x, y);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return graphicsPipe!.getMatrix();;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    minX: int32_t = Integer.MAX_VALUE;

    minY: int32_t = Integer.MAX_VALUE;

    maxX: int32_t = Integer.MIN_VALUE;

    maxY: int32_t = Integer.MIN_VALUE;

    private: dx: int32_t = 0;

    private: dy: int32_t = 0;

    private: width: int32_t= 0;

    private: height: int32_t= 0;

public constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public calculate(HashMap<any, any> hashMap){

    graphicItemArray: std::vector<any> = hashMap!.keys().()!;;
    

    size: int32_t = graphicItemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    item: GraphicItemInterface = hashMap!.get(graphicItemArray[index]!) as GraphicItemInterface;;
    

                        if(item.getName() == LinesGraphicItem.getStaticName())
                        
                                    {
                                    this.getInstance(item.getPointsInterface()!.getPoints());
    

                                    }
                                
}

this.logUtil!.putF("minX: " +this.minX +" minY: " +this.minY +" maxX: " +this.maxX +" maxY: " +this.maxY, this, this.commonStrings!.GET_INSTANCE);
    
this.setWidth(this.maxX -this.minX);
    
this.setHeight(this.maxY -this.minY);
    

    max: int32_t = this.getWidth()!;;
    

                        if(getHeight() > max)
                        
                                    {
                                    max= this.getHeight();
    

                                    }
                                

    middle: int32_t = max /2;;
    

    commonLabels: CommonLabels = CommonLabels.getInstance()!;;
    

    s: string = new StringMaker().append(commonLabels!.WIDTH_LABEL)!.appendint(getWidth())!.append(commonLabels!.HEIGHT_LABEL)!.appendint(getHeight())!.append(" max: ")!.appendint(max)!.append(" middle: ")!.appendint(middle)!.toString()!;;
    
this.logUtil!.putF(s, this, this.commonStrings!.GET_INSTANCE);
    

    currentMiddleX: int32_t = this.minX +this.getWidth() /2;;
    

    currentMiddleY: int32_t = this.minY +this.getHeight() /2;;
    
this.dx= middle -currentMiddleX;
    
this.dy= middle -currentMiddleY;
    
}


                //@Throws(Exception.constructor)
            
    public transform(HashMap<any, any> hashMap){
this.calculate(hashMap);
    
this.logUtil!.putF(new StringMaker().append(" dx: ")!.appendint(this.dx)!.append(" dy: ")!.appendint(this.dy)!.toString(), this, this.commonStrings!.GET_INSTANCE);
    

    graphicItemArray: std::vector<any> = hashMap!.keys().()!;;
    

    size: int32_t = graphicItemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    item: GraphicItemInterface = hashMap!.get(graphicItemArray[index]!) as GraphicItemInterface;;
    

    list: BasicArrayList = VectorCenterGenerator.translate(item.getPointsInterface()!.getPoints(), dx, dy)!;;
    

    newPoints: Points = new Points();;
    
newPoints!.addPoints(list);
    
item.setPointsInterface(newPoints);
    
}

}


                //@Throws(Exception.constructor)
            
    getInstance(BasicArrayList pointVector){

        try {
            
    newVector: Vector = new Vector();;
    

    size: int32_t = pointVector!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    point: GPoint = pointVector!.get(index) as GPoint;;
    

                        if(point.getX() < this.minX)
                        
                                    {
                                    this.minX= point.getX();
    

                                    }
                                

                        if(point.getX() > this.maxX)
                        
                                    {
                                    this.maxX= point.getX();
    

                                    }
                                

                        if(point.getY() < this.minY)
                        
                                    {
                                    this.minY= point.getY();
    

                                    }
                                

                        if(point.getY() > this.maxY)
                        
                                    {
                                    this.maxY= point.getY();
    

                                    }
                                
}


                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.GET_INSTANCE, e);
    



                            throw e;
                    
}

}


    public int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.width;
    
}


    public setWidth(int32_t width){
this.width= width;
    
}


    public int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.height;
    
}


    public setHeight(int32_t height){
this.height= height;
    
}


};

            

