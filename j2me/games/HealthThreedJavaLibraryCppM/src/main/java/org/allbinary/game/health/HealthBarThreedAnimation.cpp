
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <min3d/core/ColorBufferList.h>

      
#include <min3d/core/Number3dBufferList.h>

      
#include <min3d/objectPrimitives/Rectangle.h>

      
#include <min3d/vos/Number3d.h>

      
#include <org/allbinary/device/OpenGLESGraphics.h>

      
#include <org/allbinary/graphics/threed/min3d/renderer/Object3dProcessor.h>

      
#include <org/allbinary/graphics/threed/min3d/renderer/Object3dProcessorUtil.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HealthBarAnimation.h"

class HealthBarThreedAnimation: public HealthBarAnimation {
        

    private: rectangle: Rectangle;

    private: const basicColorFactory: BasicColorFactory = BasicColorFactory.getInstance()!;

public constructor (AllBinaryLayer layerInterface, int32_t location){
            super(layerInterface, location);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.basicColor= this.basicColorFactory!.GREEN;
    
this.colorP= this.basicColor!.intValue();
    
this.rectangle= new Rectangle(0, 0, 1, 1, this.basicColor);
    
this.rectangle.setDoubleSidedEnabled(true);
    
this.rectangle.setNormalsEnabled(false);
    
this.rectangle.setTexturesEnabled(false);
    
}


    updateColor(){

    colorBufferList: ColorBufferList = this.rectangle.getVertices()!.getColor4BufferList()!;;
    

    size: int32_t = colorBufferList!.size()!;;
    




                        for (
    index: int32_t = size;--index >= 0; )
        {
colorBufferList!.set(index, this.basicColor);
    
}

}


    updateSize(){

    number3dBufferList: Number3dBufferList = this.rectangle.getVertices()!.getPointsOnFacesNumber3dBufferList()!;;
    

    width: int32_t = this.x2;;
    

    height: int32_t = this.thickness *2;;
    

    segsH: int32_t = 1;;
    

    segsW: int32_t = 1;;
    

    row: int32_t= 0;;
    

    col: int32_t= 0;;
    

    w: float = width /segsW;;
    

    h: float = height /segsH;;
    

    width5: float = width /2;;
    

    height5: float = height /2;;
    

    index: int32_t = 0;;
    




                        for (
    row= 0; row <= segsH; row++)
        {




                        for (
    col= 0; col <= segsW; col++)
        {
number3dBufferList!.set(index++, col *w -width5, row *h -height5, 0);
    
}

}

}


    public onHealthChange(int32_t newX2){
super.onHealthChange(newX2);
    
this.updateColor();
    
this.updateSize();
    
}


    private: const object3dProcessor: Object3dProcessor = Object3dProcessorUtil.getInstance()!.getInstanceObject3dProcessor()!;

    public paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z){

    openGLESGraphics: OpenGLESGraphics = graphics as OpenGLESGraphics;;
    

    gl: GL10 = openGLESGraphics!.getGl10()!;;
    

    viewPosition: ViewPositionBase = this.allbinaryLayer!.getViewPosition()!;;
    

    positionNumber3d: Number3d = this.rectangle.getPosition()!;;
    
positionNumber3d!.x=  -(viewPosition!.getX());
    
positionNumber3d!.z=  -(viewPosition!.getY());
    
positionNumber3d!.y= viewPosition!.getZ() +this.allbinaryLayer!.getHeight();
    
this.object3dProcessor!.drawObject(gl, this.rectangle);
    
}


};

            

