
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
        



            #include "../../../../../java/lang/Throwable.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SpriteIndexedAnimation: public IndexedAnimation: public ColorCompositeInterface {
        

    const sprite: Sprite;

    const image: Image;

    private: const basicColorArray: std::vector<BasicColor>;

public constructor (Sprite sprite, Image image, std::vector<BasicColor> basicColorArray, AnimationBehavior animationBehavior){
            super(animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.sprite= sprite;
    
this.image= image;
    
this.basicColorArray= basicColorArray;
    

                        if(this.basicColorArray!.length != 0 && this.getSize() != this.basicColorArray!.length)
                        
                                    {
                                    


                            throw new Exception(new StringMaker().append(CommonLabels.getInstance()!.TOTAL_LABEL)!.appendint(this.getSize())!.append("!=")!.appendint(this.basicColorArray!.length)!.toString());
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public int32_t getAnimationSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getSize();;
    
}


    public setBasicColorP(BasicColor basicColor){




                        for (
    index: int32_t = 0;index < this.basicColorArray!.length; index++)
        {

                        if(basicColor == this.basicColorArray[index])
                        
                                    {
                                    this.setFrame(index);
    
break;

                    

                                    }
                                
}

}


    public BasicColor getBasicColorP(){

                        if(this.basicColorArray!.length < this.getFrame())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicColorArray[this.getFrame()]!;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorFactory.getInstance()!.WHITE;
    

                        }
                            
}


    public paintFrame(Graphics graphics, int32_t frame, int32_t x, int32_t y){
this.setFrame(frame);
    
this.sprite.setPosition(x, y);
    
this.sprite.paint(graphics);
    
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
this.sprite.setPosition(x, y);
    
this.sprite.paint(graphics);
    
}


    paint(Graphics graphics){
this.sprite.paint(graphics);
    
}


    public nextFrame(){
this.sprite.nextFrame();
    
}


    public previousFrame(){
this.sprite.prevFrame();
    
}


    public int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.sprite.getRawFrameCount();;
    
}


    public setFrame(int32_t frame){
this.sprite.setFrame(frame);
    
}


    public int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.sprite.getFrame();;
    
}


    public bool isLastFrame(){

                        if(this.sprite.getFrame() == this.getSize() -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public int32_t getLastFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getSize();;
    
}


    public setSequence(std::vector<int32_t> sequence){
}


    public std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil.getArrayInstance();;
    
}


    public close(){
}


                //@Throws(Throwable.constructor)
            
    finalize(){
}


};

            

