
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
        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SpriteIndexedAnimation: public IndexedAnimation, public ColorCompositeInterface {

    protected: Sprite sprite;

    protected: Image image;

    private: std::vector<BasicColor> basicColorArray;

public: SpriteIndexedAnimation(Sprite sprite, Image image, std::vector<BasicColor> basicColorArray, AnimationBehavior animationBehavior) : IndexedAnimation(animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->sprite= sprite;
    
this->image= image;
    
this->basicColorArray= basicColorArray;
    

                        if(this->basicColorArray.size() != 0 && this->getSize() != this->basicColorArray.size())
                        
                                    {
                                    


                            throw Exception(StringMaker().append(CommonLabels::getInstance().TOTAL_LABEL).appendint(this->getSize()).append("!=").appendint(this->basicColorArray.size()).toString());
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getSize();;
    
}


    public: void setBasicColorP(BasicColor basicColor){




                        for (
    int32_t index = 0;index < this->basicColorArray.size(); index++)
        {

                        if(basicColor == this->basicColorArray[index])
                        
                                    {
                                    this->setFrame(index);
    
break;

                    

                                    }
                                
}

}


    public: BasicColor getBasicColorP(){

                        if(this->basicColorArray.size() < this->getFrame())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColorArray[this->getFrame()];
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorFactory::getInstance().WHITE;
    

                        }
                            
}


    public: void paintFrame(Graphics graphics, int32_t frame, int32_t x, int32_t y){
this->setFrame(frame);
    
this->sprite.setPosition(x, y);
    
this->sprite.paint(graphics);
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
this->sprite.setPosition(x, y);
    
this->sprite.paint(graphics);
    
}


    protected: void paint(Graphics graphics){
this->sprite.paint(graphics);
    
}


    public: void nextFrame(){
this->sprite.nextFrame();
    
}


    public: void previousFrame(){
this->sprite.prevFrame();
    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sprite.getRawFrameCount();;
    
}


    public: void setFrame(int32_t frame){
this->sprite.setFrame(frame);
    
}


    public: int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sprite.getFrame();;
    
}


    public: bool isLastFrame(){

                        if(this->sprite.getFrame() == this->getSize() -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: int32_t getLastFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getSize();;
    
}


    public: void setSequence(std::vector<int32_t> sequence){
}


    public: std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    public: void close(){
}


                //@Throws(Throwable.constructor)
            
    protected: void finalize(){
}


};

            

